#include "alerters.h"

int emailAlertCallCount;
int ledAlertCallCount;

void emailAlerter(void)
{
    /* setting count value to notify emailAlerter function is called */
    emailAlertCallCount = 1;
}

void ledAlerter(void)
{
    /* setting count value to notify ledlAlerter function is called */
    ledAlertCallCount = 1;
}
