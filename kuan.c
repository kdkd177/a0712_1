#include <stdio.h>

int main()
{
int number[10]={1,5,7,9,4,3,2,6,8,10};
int i=0,j=0,temp=0;
for(i=0;i<10;i++){
for(j=0;j<10;j++){
if(number[j]>number[i]){
temp=number[j];
number[j]=number[i];
number[i]=temp;
}
}
}
for(i=0;i<10;i++){
printf("%d",number[i]);
}
return 0;
}

