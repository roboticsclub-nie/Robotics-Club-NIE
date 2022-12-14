int RF=10;
int data;

void setup()
{
  pinMode(RF,INPUT);
  Serial.begin(9600);
}

void loop() 
{
  data=pulseIn(RF,HIGH);
  Serial.println(data);
  
}
