#include"Functions.h"
#include<iostream>
void processData(int*&outbuf, int &count, int &total) {
	if (!outbuf) {
		return;
	}
	total+=outbuf[count];
	count++;
	if (count==BUFSIZE)
	{
		count = 0;
		delete[] outbuf;
		outbuf = NULL;
	}
}