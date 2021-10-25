#include "alerters.h"

int emailAlertCallCount;
int ledAlertCallCount;

int emailAlerter(void)
{
	emailAlertCallCount = 1; 
}

int ledAlerter(void)
{
	ledAlertCallCount = 1;
}
