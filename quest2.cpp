#include <bits/stdc++.h>
using namespace std;

#define OUT 0
#define IN 1

unsigned countWords(char *str)
{
	int state = OUT;
	unsigned wc = 0;

	
	while (*str)
	{
	
		if (*str == ' ' || *str == '\n' || *str == '\t')
			state = OUT;

		else if (state == OUT)
		{
			state = IN;
			++wc;
		}

		++str;
	}

	return wc;
}

int main(void)
{
	char str[] ="abc def ";
	cout<<"No of words : "<<countWords(str);
	return 0;
}