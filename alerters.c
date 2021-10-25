#include "alerters.h"

int emailAlertCallCount;
int ledAlertCallCount;

int emailAlerter(void)
{
	emailAlertCallCount = 1;
	return emailAlertCallCount;
}

int ledAlerter(void)
{
	ledAlertCallCount = 1;
	return ledAlertCallCount;
}
