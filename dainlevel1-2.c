#include<stdio.h>
int main()
{
     /*int i,j;
   printf("�����빺��Ļ���Ľ����������");
    scanf("%d %d",&i,&j);
    int total=i*j;*/
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
    return 0;

    


}