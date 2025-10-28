#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
srand(time(0));
int player,computer=(rand()%3);
printf("enter 0 for snake ,1 for water,2 for gun:");
scanf("%d",&player);
while(player==computer){
    printf("it's a tie please try again\n");
printf("enter 0 for snake ,1 for water,2 for gun:");
scanf("%d",&player);
computer=(rand()%3);
}
if((player==0&&computer==1)||(player==1&&computer==2)||(player==2&&computer==0)){
    printf("congratulations you have won\n");

}
 else  {
    printf(" you lost!better luck next time.\n");

}
printf("%d",computer);
 
return 0;
}