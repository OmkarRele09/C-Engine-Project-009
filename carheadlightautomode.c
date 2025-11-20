#include <stdio.h>
int main(){
int light;
printf("Enter the value of light 0 or 1(0 for daytime and 1 for Nightmode)\n");
scanf("%d" , &light);
if(light==1){
printf("Headlight ON : Nightmode");
}
else{
printf("Headlight OFF : Daytime");
}
 return 0;
}