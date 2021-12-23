int JoyStick_X = 0;               // X Axis of Joystick
int JoyStick_Y = 1;               // Y Axis of Joystick
int JoyStick_Z = 3;               // Key of Joystick

void setup() 
{
  pinMode(JoyStick_Z, INPUT); 
  Serial.begin(9600);             // Set up Serial for the Console
}

void loop() 
{
  int x,y,z;
  x=analogRead(JoyStick_X);
  y=analogRead(JoyStick_Y);
  z=digitalRead(JoyStick_Z);
  Serial.print("X: ");
  Serial.println(x ,DEC);
  Serial.print("Y: ");
  Serial.println(y ,DEC);
  Serial.print("Z: ");
  Serial.println(z ,DEC);
  delay(200);
}
