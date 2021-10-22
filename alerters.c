#include "alerters.h"

alerter_funcptr emailAlerter(void)
{
	emailAlertCallCount = 1;
	return emailAlertCallCount;
}

alerter_funcptr ledAlerter(void)
{
	ledAlertCallCount = 1;
	return ledAlertCallCount;
}
