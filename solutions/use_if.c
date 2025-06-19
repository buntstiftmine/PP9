#include <stdio.h>

const char* sign_of(int x)
{
    if (x > 0) return "positive";
    else if (x==0) return "zero";
    else return "negative";
}
int main()
{
    int A [] = {0,-1,1,-2,3,-5,8,-13,21};
    for (int i = 0; i < 9; i++)
    {
        printf("%i is %s\n",  A[i], sign_of(A[i]));
    }
return 0;
}
