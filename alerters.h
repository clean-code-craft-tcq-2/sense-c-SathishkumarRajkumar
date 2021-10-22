#include "stats.h"

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

alerter_funcptr emailAlerter(void);
alerter_funcptr ledAlerter(void);
