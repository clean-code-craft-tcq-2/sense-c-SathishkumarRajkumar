struct Stats
{
	float average, min, max;
};

int emailAlertCallCount;
int ledAlertCallCount;

struct Stats compute_statistics(const float* numberset, int setlength);

typedef void (*alerter_funcptr)();
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);
