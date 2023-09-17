// C++ code
//

int red = 6;
int i=0;
void setup()
{
  pinMode( red , OUTPUT);

}

void loop()
{
 
  while(i<=255)
  {
    analogWrite(red , i);
    i++;
    delay(20);
  }
  while(i>=0)
  {
    analogWrite(red , i);
    i--;
    delay(20);

  }
}  



