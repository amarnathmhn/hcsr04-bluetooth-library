#include "hcsr04.h"

int hcsr04_ping_cm(int trig, int echo){
  low(trig);
  pulse_out(trig,10);// send a 10us pulse output
  return pulse_in(echo,1)/58; // return distance in cm
}  
