#include<stdio.h>
/* ����putchar()
    ����ļ�����
	fopen()���ļ� 
	feof()�ж��ļ�����β
	����鿴stdio.h 
*/
#include<stdlib.h>
/*
	���õ�system()
	sand() 
	��rand() 
*/
#include<time.h>
/*
	��ϵͳʱ���ʼ����ȡ����� 
*/
#include<windows.h>
FILE *fp=NULL;//�ļ��ṹ��ָ�� 
int main()
{
	char name[]="ASCII-BadApple 0007.txt";
	char a[]="0007";
	int i,j,n=1,p,q,ff=0;
	for(i=7;i<1301;i++){ 
	
	//ʱ���ᶨλ
            for(p=10,q=0;q<4;q++)
            {
                  if(i<10&&q==1)break;
                  
                  else if(i<100&&q==2)break;

                  else if(i<1000&&q==3)break;
                  
                  else if(i<10000&&q==4)break;

                  else

                  {

                       a[q]=i%p/(p/10)+48;

                       p*=10; 

                  }

            }

            //������

            for(p=0;p<q;p++)

                  name[18-p]=a[p];
	
		fp=fopen(name,"r");
		/*
		fopen()�򿪺�Դ����ͬ�ļ����µ�1.txt�ļ�
		Ȩ����r��ֻ��
		*/
		if(NULL==fp)//�ж����ļ��Ƿ�򿪳ɹ�
		{
			printf("�ļ���ʧ�ܣ�ԭ���Ǵ򿪺�ͬһ�ļ���",
			"�²����ڸ��ļ�������ļ��Ѿ���ϵͳ��\n");
			return 1;//����1,������return 0;�������� 
		}
		srand((unsigned int)time(NULL));//��ʼ�����������ʹ��ϵͳʱ��
	    char ch; 
		while(!feof(fp))//�ж��ļ��Ƿ񵽽�βfeof�ж��ļ�����β�󷵻ؼ�
		{
			ch=fgetc(fp);//�ļ�֮�ж�ȡһ���ַ�
			//Sleep(rand()%1+1);//�ӳ�1~100ms��ʾ���Կ���Ч�� 
			putchar(ch);//���ַ���ӡ����Ļ 
		}
		fclose(fp);//�ر��ļ� 
		//Sleep(rand()%1+1);//�ӳ�1~100ms��ʾ���Կ���Ч�� 
		//for(int ff=0;ff<1000;ff++){printf("\n");}
		if(ff==0){
			system("cls");//����
			ff=0;
			}
		else
			ff++;
		
	} 
	return 0;	
} 
