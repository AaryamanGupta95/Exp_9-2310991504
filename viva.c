#include <stdio.h>

int main(){

    int a;
    printf("Enter the number - ");
    scanf("%d",&a);
    int i,num = 0;
    int x = 0,y = 1;
    if(a==1)
        {  num = 0; }
 else if (a==2)
       { num = 1; } 
else
     { for(i=1;i<=a-2;i++)
        {  num = x + y;
            x = y;
            y = num; }  }
    printf("Fibonacci number = %d",num);
   return 0;
}
