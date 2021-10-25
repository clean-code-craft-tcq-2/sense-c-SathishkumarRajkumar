#include "stats.h"
#include "math.h"
#include "alerters.h"

struct Stats compute_statistics(const float* numberset, int setlength) 
{
    struct Stats s;
    s.average = 0.0;
    s.min = numberset[0];
    s.max = 0.0;
    float sum = 0.0;
	
    if ((setlength !=0) && (numberset != NULL )) /* When array contains non zero float values */
    {	
        for (int i=0; i<setlength; i++)
	{
            if (s.max < numberset[i])
	    {
	        s.max = numberset[i]; /* Stores the max float value from array */
	    }
            if (s.min >= numberset[i])
	    {
		s.min = numberset[i]; /* Stores the minimum float value from array */
            }			
	    sum += numberset[i];
	}	
	s.average = sum/(float)setlength; /* Stores the average of all float values from array */
    }
    else  /* When array is empty or NULL */
    {
        s.average = sum/(float)setlength; /* Sets NaN if array contains non-valid elements */
	s.min += s.average;
	s.max += s.average;
    }
	
    return s;
}

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
{
    if (maxThreshold < computedStats.max)
    {
	alerters[0]();
	alerters[1]();
    }
}
