int button0=2;
int button1=4;

int led3=  3;//50% analog
int led5=  5;
int led6=  6;

int led9=  9;
int led10=10;
int led11=11;//50% analog

int reading0;
int reading1;

void setup(){
  for(int x=3;x<=11;x++){
    pinMode (x,OUTPUT);
  }
  
 pinMode(button0,INPUT);
pinMode(button1,INPUT);
  
}

void loop(){
  
 reading0=digitalRead(button0);
 reading1=digitalRead(button1);
  
    if(reading0==HIGH){
      analogWrite(led3,127);
      
        for(int x=0;x<=255;x++){
        analogWrite(led5,x);
        analogWrite(led6,x);
          
        }}
      else{
        analogWrite(led3,0);
        analogWrite(led5,0);
        analogWrite(led6,0);
      }
  
  
   if(reading1==HIGH){
     
     analogWrite(led11,127);
     
        for(int V=0;V<=255;V++){
        analogWrite(led9,V);
        analogWrite(led10,V);
         
        }
   }
 
      else{
        analogWrite(led9,0);
        analogWrite(led10,0);
        analogWrite(led11,0);
      }
  
       
      }

    
 
  
    
      
  
  
  
