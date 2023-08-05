/*
  Data types demo for uint32_t and uint8_t.
 */
 
uint32_t x;
uint8_t sensor_data[1000];

void setup(){
}

void loop(){
  sensor_data[x++]=x;
}
