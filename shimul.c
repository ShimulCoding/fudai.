/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


void print(int n){
    if(n==10){
        printf("%d\n",n);
        return;
    }
    print(n+1);
    printf("%d\n",n);
    return;
}
int main()
{
    print(1);

    return 0;
}
