void setup()
{
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT); 
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, OUTPUT); 
  
}

void loop()
{
  if(digitalRead(2) == HIGH){
    tone(9, 523.25);    //Do
  }
  else if(digitalRead(3) == HIGH){
    tone(9, 587.33);   //Re
  }
  else if(digitalRead(4) == HIGH){
    tone(9, 659.3);    //Mi
  }
  else if(digitalRead(5) == HIGH){
    tone(9, 698.5);    //Fa
  }
  else if(digitalRead(6) == HIGH){
    tone(9, 784.0);   //Sol
  }
  else if(digitalRead(7) == HIGH){
    tone(9, 880.0);   //]La
  }
  else if(digitalRead(8) == HIGH){
    tone(9, 897.8);   //Si
  }
  else{
    noTone(9);
  }
}
