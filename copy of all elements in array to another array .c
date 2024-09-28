#include<stdio.h>
int main(){

    int array1[5]={20,30,45,42,50}, i, array2[5];

    for(i=0;i<5;i++){
        printf("%d\n", array1[i]);

    }
   // copies all the elements from array1 
for(i=0;i<5;i++){

    array2[i]=array1[i];
}
    for(i=0;i<5;i++){
    printf("%d\n",array2[i]);
}
    return 0;
}