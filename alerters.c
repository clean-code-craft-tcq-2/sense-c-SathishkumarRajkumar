#include "alerters.h"

int emailAlertCallCount;
int ledAlertCallCount;

int emailAlerter(void)
{
	int emailCount = 1;
	return emailCount;
}

int ledAlerter(void)
{
	int ledCount = 1;
	return ledCount;
}
