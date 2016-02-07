#include <Comm.h>
#include <Arduino.h>
void blink(int num, int t){
    for (int i = 0; i != num; ++i){
        digitalWrite(13, HIGH); 
        delay(t);              
        digitalWrite(13, LOW);    
        delay(t); 
    }
}


