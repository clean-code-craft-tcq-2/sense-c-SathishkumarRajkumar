struct Stats
{
	float average, min, max;
};

extern int emailAlertCallCount;
extern int ledAlertCallCount;

struct Stats compute_statistics(const float* numberset, int setlength);

typedef int (*alerter_funcptr)();
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);
