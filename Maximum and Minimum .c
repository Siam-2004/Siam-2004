
#include<stdio.h>
int main(){
      
        int a[5]={20,50,60,75,80}
        int max,min,i;
        max=a[0];
        min=a[0];

        for(i=0;i<=4;i++){

            if(a[i]>max){
                max=a[i];
            }
        }
     
     for(i=0;i<=4;i++){

        if(a[i]<min){
            min=a[i];
        }
     }
     printf("maximum is %d \t minimum is %d", max,min);
     return 0;

}