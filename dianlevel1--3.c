#include<stdio.h>

int main()
{
    int a;
    printf("1��ʾ�ڻ���2��ʾ������\n������������Ҫ�Ĳ�����Ӧ�����֡�");
    scanf("%d",&a);
    if(a==1){
       getchar();
        char p;//�ڻ�
        int i,j,k;
        scanf("%c",&p);
        //printf("%c",p);
        scanf("%d %d %d",&i,&j,&k);
        printf("%d:",i);
        for( ;k>0;k--){

            printf("%c",p);
            if(k==1){
                printf(" ");
            }
        }
        
        printf("%d",j);//�ڷŻ��
    }
        if(a==2){
            printf("�������ܼ۸�");
        int total;
        scanf("%d",&total);
        printf("�������һ��Ͷ�ҵĽ�");
        int i;
        int count=2;
        int sum=0;
        scanf("%d",&i);
        sum=sum+i;
        while(sum<total){
            printf("�������%d��Ͷ�ҵĽ��:",count);
            scanf("%d",&i);
            sum=sum+i;
            count++;
        }
        if(sum==total){
            printf("�������㡣");
        }else{
            printf("����%dԪ��",sum-total);
        }
        } 
        return 0;
    }