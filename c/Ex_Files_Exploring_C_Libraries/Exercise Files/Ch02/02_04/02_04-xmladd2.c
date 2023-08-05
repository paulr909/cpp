#include <stdio.h>
#include <stdlib.h>
#include <libxml/parser.h>

int main() {
    const char filename[] = "02_04-sample1.xml";
    int r;
    /* libxml2 variables */
    xmlDocPtr doc;
    xmlNodePtr node, new_node;

    /* open the document for parsing */
    doc = xmlParseFile(filename);
    if (doc == NULL) {
        fprintf(stderr, "Unable to process %s\n", filename);
        exit(1);
    }

    /* fetch the root element */
    node = xmlDocGetRootElement(doc);
    if (node == NULL) {
        fprintf(stderr, "Document %s is empty\n", filename);
        xmlFreeDoc(doc);
        exit(1);
    }
    /* confirm document root is proper */
    if (xmlStrcmp(node->name, (const xmlChar *) "person")) {
        fprintf(stderr, "%s is not of the proper XML type\n", filename);
        xmlFreeDoc(doc);
        exit(1);
    }

    /* search for the 'name' node and add a new child, 'middle'
       along with its contents */
    node = node->children;
    while (node != NULL) {
        if ((!xmlStrcmp(node->name, (const xmlChar *) "name"))) {
            new_node = xmlNewTextChild(node, NULL, (const xmlChar *) "middle",
                                       (const xmlChar *) "Father of our Country");
            if (new_node == NULL) {
                fprintf(stderr, "Unable to create new node\n");
                exit(1);
            }
            break;
        }
        node = node->next;
    }

    /* Save the updated file */
    r = xmlSaveFormatFile(filename, doc, 0);
    if (r == -1)
        printf("Unable to update and write %s\n", filename);
    else
        printf("%s updated, %d bytes written\n", filename, r);


    /* cleanup */
    xmlFreeDoc(doc);

    return (0);
}
