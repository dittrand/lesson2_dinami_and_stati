#pragma once
const int BUFSIZE = 10;
const int ITERATIONS = 50;
float getProb();
int* generateData(int *&fillbuffer,int &fillcnt);
void processData(int*& outbuf, int& count, int& total);