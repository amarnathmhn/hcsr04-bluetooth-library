/*
  Blank Simple Project.c
  http://learn.parallax.com/propeller-c-tutorials 
*/
#include "simpletools.h"                      // Include simple tools
#include "hcsr04.h"

int main(){
  while(1){
    int cm = hcsr04_ping_cm(10,9);
    print("Distance = %d\n",cm);
    pause(100);
  }  
  
}  
