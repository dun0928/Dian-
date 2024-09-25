#include<stdio.h>


int main()
{
    char p;//摆货
    int i,j,k;
    scanf("%c",&p);
    //printf("%c",p);
    scanf("%d %d %d",&i,&j,&k);
    printf("%d:",i);
    for(k;k>0;k--){
        printf("%c",p);
        if(k==1){
            printf(" ");
        }
    }
    
    printf("%d",j);//摆放货物。
    return 0;
    

}