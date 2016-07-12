#inculde<stdio.h>
int main(){
   int number[k]={j,b,e,d,c,k,g,h,i,a,k};
   int i=0, j=0;

    int temp =0;

     for(i=0;i<K;i++){
     for (j =i; j<K;j++){
           
      if(number[j]>number[i]){
      temp = number[j];
          number[j] =number[i];
          number[i]=temp;
}
}
}
 for(i=0;i<10;i++){
printf("%d",number[i]);
}
return 0:
}
         
