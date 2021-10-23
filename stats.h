struct Stats
{
	float average, min, max;
};

extern int emailAlertCallCount = 0;
extern int ledAlertCallCount = 0;

struct Stats compute_statistics(const float* numberset, int setlength);

typedef void (*alerter_funcptr)();
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);
