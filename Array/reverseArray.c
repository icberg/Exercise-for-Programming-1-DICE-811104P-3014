#include<stdio.h>

int main(void){
    
    int num[5];
    
    for(int i=0;i<5;i++){
        scanf("%d",&num[i]);
    }
    
    for(int i=0;i<4;i++){
        printf("%d ",num[i]);
    }
    printf("%d => ",num[4]);
    
    for(int i=4;i>0;i--){
        printf("%d ",num[i]);
    }
    
    printf("%d\n",num[0]);
    
    return 0;
}
