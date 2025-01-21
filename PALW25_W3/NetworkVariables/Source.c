// PAL Week 3 - Examine a C Program - Using variables and formatting output
// 
// PROG71990-W25
// 
// revision history
// 1.0			01/11/2025		initial


#include <stdio.h>

int main(void)
{
	int protocolNumber = 1;			// indicates the protocol to be used (TCP, UDP, etc.)
	float latency = 19.5f;			// made-up server latency (in milliseconds)

	printf("Booting up...\n"); // what does the f in printf stand for?
	printf("Connection Established through protocol #%d (%f ms)\n", protocolNumber, latency);

	/*
	* Our output shows (19.500000 ms), which seems like a waste based on the program we're writing.
	* How would we format this to only include 2 decimal values?
	*/
	return 0;
}