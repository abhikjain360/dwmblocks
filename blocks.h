/* time interval in seconds to sleep before looking for updates in the main loop */
#define SLEEPINTERVAL			1

/* If interval of a block is set to 0, the block will only be updated once at startup.
 * If interval is set to a negative value, the block will never be updated in the main loop.
 * Set signal to 0 if signalling is not required for the block.
 * Keep signal for clickable blocks less than 10.
 * If multiple realtime signals are pending, then the lowest numbered signal is delivered first. */

/* pathu - path of the program whose output is to be used for status text
 * pathc - path of the program to be executed on clicks */
static Block blocks[] = {
/*	pathu				pathc					interval	signal */
	{"cpuusage" 	,		NULL,					2,		3},
	{"cputemp"  	,		NULL,					1,		3},
	{"memory"   	,		NULL,					1,		3},
	{"battery"  	,		NULL,					1,		3},
	{"vol" 	    	,		NULL,					1,		3},
	{"wifi"     	,		NULL,					5,		3},
	{"datetime" 	,		NULL,					5,		3},

        { NULL } /* just to mark the end of the array */
};

static const char *delim =  " | ";
