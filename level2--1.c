#include<stdio.h>
#include<string.h>
int main()
{
    int channel[5]={0};//��ʾ���Ż���ͨ���аڷŵ���Ŀ����channel[0]==3����ʾ1��ͨ������ڷ�����������
    char goods[5];//��ʾ����ͨ���ڷŵĻ������࣬��goods[0]==A,����1��ͨ������A����
    int price[5]={0};//��ʾ����ͨ���аڷŵĻ���ĵ��ۣ���price[0]==5,��ʾ1��ͨ���л��ﵥ��Ϊ5Ԫ
    char q[10];
    printf("��ѡ���Ƿ���Ҫ�ڷŻ������Ҫ������YES���粻��Ҫ�ڻ���ڻ�������������END���й�����");
    scanf("%9s",q);
    int i,j,k;//�ֱ���ͨ�������ۣ���ڷ���Ŀ��
    char ch; 
    while(strcmp(q,"END")!=0&&strcmp(q,"YES")==0){
        while(ch=(getchar())!='\n'&&ch!=EOF){;}
        char r;
        printf("������ڷŵĻ������࣬ͨ����������ڷ���Ŀ\n");
        scanf("%c",&r);
        scanf("%d %d %d",&i,&j,&k);
        //printf("j=%d",j);
        //printf("k=%d",k);
        if((ch=getchar())!='\n'&&ch!=EOF||j>10||k>50){
        printf("�ڷŴ���\n");
        break;
        }else{
            if(channel[i-1]==0){
            channel[i-1]=k;
            goods[i-1]=r;
            price[i-1]=j;
            int m=0;
            for(m=0;m<=5;m++){
                if(channel[i-1]==channel[m-1]){
                    if(price[i-1]!=price[m-1]){
                        printf("���ﵥ��ǰ��һ�¡�����������\n");
                        printf("������ڷŵĻ������࣬ͨ����������ڷ���Ŀ\n");
                        scanf("%c",&r);
                        scanf("%d %d %d",&i,&j,&k);
                        break;
                    }
                }
            }
            if(price[i-1]!=price[m-1]){
                printf("��ѡ���Ƿ���Ҫ�����ڷŻ������Ҫ������YES���粻��Ҫ�ڻ���ڻ�������������END���й�����\n");
                scanf("%s",q);
                }   
            }else{
                printf("�ظ��ڷŵ�ͬһͨ���������°ڷ�������YES����ֹͣ�ڷ�������END��");
                scanf("%s",q);
            }
        }
        
    }
    if(strcmp(q,"END")!=0&&strcmp(q,"YES")!=0)
    {
        printf("�������\n");
    }
    if(strcmp(q,"END")==0){
        printf("�ڻ������ҰڷŽ������\n");
    
    
        for(i=1;i<=5;i++){
            if(channel[i-1]>0){
                printf("%d��ͨ���ڷ�%c�������Ϊ%d�������ﵥ��Ϊ%dԪ\n",i,goods[i-1],channel[i-1],price[i-1]);
            }
            else{
             printf("%d��ͨ��δ�ڷŻ��\n",i);
            }
        }
    }   
    while(ch=(getchar())!='\n'&&ch!=EOF){;}
    printf("��ѡ���Ƿ���Ҫ����������Ҫ������YES�������蹺����߹��������������END����������");
    int number;//һ�ι��������
    scanf("%s",q);
    int sum=0;
    while(strcmp(q,"END")!=0){
        while(ch=(getchar())!='\n'&&ch!=EOF){;}
        char r;
        printf("��������Ҫ����Ļ������࣬ͨ������Ŀ��");
        scanf("%c %d %d",&r,&i,&number);
        sum=sum+price[i-1]*number;
        if(r==goods[i-1]&&number<=channel[i-1]){
            printf("�Ƿ���Ҫ��������������Ҫ������YES�������蹺����߹��������������END����������");
            scanf("%s",q);
            if(strcmp(q,"END")!=0&&strcmp(q,"YES")!=0){
            printf("�������\n");
            printf("�Ƿ���Ҫ��������������Ҫ������YES�������蹺����߹��������������END����������");
            }
        }else if(number>channel[i-1]){
            printf("�޷����򣬿�治�㡣\n����Ҫ���¹���������YES������Ҫ��������������END��");
            scanf("%s",q);
        }else {
            printf("�޷��������鹺��������������ͨ���Ƿ���ȷ��\n����Ҫ���¹���������YES������Ҫ��������������END��");
            scanf("%s",q);
        }
        
    }
    if(strcmp(q,"END")!=0&&strcmp(q,"YES")!=0)
    {
        printf("�������\n");
    }
    if(strcmp(q,"END")==0){
        printf("����������ܽ��Ϊ%dԪ��\n����Ͷ��֧����һ����ֻ��Ͷ��1Ԫ��2Ԫ����5Ԫ��",sum);
        printf("�������һ��Ͷ�ҵĽ�");
        int every;//ÿһ��Ͷ�ҵĽ��
        int count=2;//Ͷ�ҵĴ���
        int total=0;//Ͷ�ҵ��ܽ��
        scanf("%d",&every);
        total=total+every;
        while(total<sum){
            printf("�������%d��Ͷ�ҵĽ��:",count);
            scanf("%d",&every);
            total=total+every;
            count++;
        }
        if(total==sum){
            printf("�������㡣\n�ڴ�������һ�ι���");
        }else{
            printf("����%dԪ��\n�ڴ�������һ�ι���",total-sum);
        }
        
    }
    return 0;

}