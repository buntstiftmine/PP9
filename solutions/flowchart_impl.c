#include <stdio.h>

void flowchart(int x) 
{

    int result = 1;
    int i = 1;

    while (i <= x) 
    {
        if (i%2==0) 
	{
		result += i;
	}
        else 
	{
		result *= i;
	}
        if (result > 1000) 
	{
		result -= 100;
	}
        i++;
    }
    printf("result: %i\n", result);
}
