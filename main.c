#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    
    go(200,2450);
    motor(0, 0);
    motor(1, 100);
    msleep(1150);
    ao();
    msleep(2000);
    go(200, 4600);
    go(-100, 300);
    msleep(2000);
    motor(0, 100);
    motor(1, 0);
    msleep(2300);
    freeze(0);
    freeze(1);
    go(100, 500);
    msleep(2000);
    while(digital(0)==0){
    	followP(50);
    }
    freeze(0);
    freeze(1);
    
    return 0;
}





