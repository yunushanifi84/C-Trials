#include <stdio.h>
#include <stdlib.h>

int EnBuyukBul(int A[],int boyut){
    int EnBuyukV,i;
    EnBuyukV=A[0];
    for(i=0;i<boyut;i++){
        if(A[i]>EnBuyukV){
            EnBuyukV=A[i];
        }
    }
    return EnBuyukV;
}

int EnKucukBul(int B[],int boyut){
    int EnKucukV,i;
    EnKucukV=B[0];
    for(i=0;i<boyut;i++){
        if(B[i]<EnKucukV){
            EnKucukV=B[i];
        }
    }
    return EnKucukV;
}
void Dizibastir(int Dizi[],int boyut){
    int i;
    for(i=0;i<boyut;i++){
        printf("%d      ",Dizi[i]);
    }
}



int main(){
    int Dizi[5];
    printf("Input array elements(5) : ");
    for(int i =0;i<5;i++){
        scanf("%d",&Dizi[i]);
    }
    printf("Array's elements : ");
    Dizibastir(Dizi,5);
    printf("\nMax vaule of array: %d",EnKucukBul(Dizi,5));
    printf("\nMin vaule of array: %d",EnBuyukBul(Dizi,5));
    
    
    
    return 0;
}