/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


void print(int n){
    printf("%d\n",n);
    if(n==1){
       
        return;
    }
    print(n-1);
    
    return;
}
int main()
{
    print(10);

    return 0;
}
