// Me figuring out how to drive a little 4-digit 7-segment
// LED display with the TM1637 two wire interface
// not too different from I2C.
// I'm only using the Chinglish datasheet as a refference.

const uint8_t clk = 2;
const uint8_t dta = 3;  // data is output only

void setup() {
  pinMode(clk, OUTPUT);
  pinMode(dta, OUTPUT);

}

void loop() {


}
