#include "alerters.h"

alerter_funcptr emailAlerter(void)
{
	emailAlertCallCount = 1;
}

alerter_funcptr ledAlerter(void)
{
	ledAlertCallCount = 1;
}
