#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "inc/userFncFile.h"
#include "inc/systemTimer.h"
#include "inc/led_LED1.h"
#include "inc/led_LED2.h"
#include "inc/led_LED3.h"
#include "inc/relay_Relay1.h"
#include "inc/relay_Relay2.h"
#include "inc/timer_api1.h"
#include "inc/EMICBus.h"

void onReset()
{
    LEDs_LED1_blink(100, 200, 3);
    LEDs_LED2_blink(100, 200, 3);
    LEDs_LED3_blink(100, 200, 3);
    setTime1(1000, 'A');
}


void etOut1()
{
    LEDs_LED1_blink(100, 101, 1);
    relay_Relay1(2);
}



