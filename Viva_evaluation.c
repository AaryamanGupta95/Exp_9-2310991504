#include<stdio.h>

int main(){

    int x,room;
    printf("Type of room - ");
    scanf("%d",&x);
    if(x == 1){
        room = 1500;
    }else if(x == 2){
        room = 2500;
    }else{
        room = 4000;
    }
    int bed,night,service;
    printf("Number of nights stayed - ");
    scanf("%d",&night);
    printf("Number of extra beds - ");
    scanf("%d",&bed);
    printf("Number of days room service availed - ");
    scanf("%d",&service);
    float total,tax;
    total = (room*night) + (500*bed) + (200*service); 
    tax = 0.12*(total);
    float final;
    final = total + tax;
    printf("Total amount = %f",final);

    return 0;
}