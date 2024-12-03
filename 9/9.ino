//EJEMPLO: CILCO REPRETITIVO FOR
int brillo=0;

void setup() 
{

}

void loop() 
{
  for(brillo==0;brillo<255;brillo=brillo+1)
  {
    analogWrite(10,brillo);
    delay(5);
  }

  for(brillo==255;brillo>0;brillo=brillo-1)
  {
    analogWrite(10,brillo);
    delay(5);
  }
  for(brillo==0;brillo<255;brillo=brillo+1)
  {
    analogWrite(9,brillo);
    delay(5);
  }

  for(brillo==255;brillo>0;brillo=brillo-1)
  {
    analogWrite(9,brillo);
    delay(5);
  }
   for(brillo==0;brillo<255;brillo=brillo+1)
  {
    analogWrite(6,brillo);
    delay(5);
  }

  for(brillo==255;brillo>0;brillo=brillo-1)
  {
    analogWrite(6,brillo);
    delay(5);
  }
}