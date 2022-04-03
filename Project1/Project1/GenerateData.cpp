#include <cstddef>
#include"Functions.h"
int* generateData(int*&fillbuffer, int &fillcnt) {
	int num = static_cast<int> (getProb() * 10)%10;
	fillbuffer[fillcnt] = num;
	(fillcnt)++;
	if (fillcnt == BUFSIZE) {
		fillcnt = 0;
		int* tmp = fillbuffer;
		fillbuffer = new int[10];
		return tmp;
	}
	else
		return NULL;
}