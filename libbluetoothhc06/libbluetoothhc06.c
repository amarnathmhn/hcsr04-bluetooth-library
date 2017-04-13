/*
  Blank Simple Project.c
  http://learn.parallax.com/propeller-c-tutorials 
*/
#include "simpletools.h"                      // Include simple tools
#include "fdserial.h"
fdserial* bluetooth ;
#define btrx  6
#define bttx 5
int main()                                    // Main function
{
  // Add startup code here.
 print("trying to bring up bluetooth\n");
  bluetooth = fdserial_open(btrx,bttx,0,9600);
  
  if(bluetooth){
    print("Bluetooth connected!\n");
  } else{
    print("Bluetooth failed to open\n");
  }       
 //return 0;
  while(1)
  {
    // Add main loop code here.
    char in = fdserial_rxChar(bluetooth);
    if(in == -1){
      print("invalid char\n");
      pause(10);
      continue;
    }else{
      print("%c\n",in);
    }            
//    print("%c\n",in);
  //  pause(100);
    
  }  
}
