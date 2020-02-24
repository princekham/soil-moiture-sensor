// The following are codes for sensor connection - the codes need changes
// the codes are referred from http://www.circuitstoday.com/arduino-soil-moisture-sensor
int sensor_pin = A0;

int output_value ;

void setup() {

   Serial.begin(9600);

   Serial.println("Reading From the Sensor ...");

   delay(2000);

   }

void loop() {

   output_value= analogRead(sensor_pin);
*/we will map the output values to 0-100, because the moisture is measured in percentage. 
When we took the readings from the dry soil, then the sensor value was 550 and in the wet soil, 
the sensor value was 10.*/
   output_value = map(output_value,550,0,0,100);

   Serial.print("Mositure : ");

   Serial.print(output_value);

   Serial.println("%");

   delay(1000);

   }
