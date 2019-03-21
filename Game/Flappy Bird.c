#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

//��ʼ
int high,width;//�����С
int bird_x,bird_y;//��λ��
int bar1_y,bar1_xDown,bar1_xTop;//�ϰ�������
int score;//�÷�

void gotoxy(int x,int y)//��������
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(handle,pos);
}

void startup()  //���ݳ�ʼ��
{
	high = 20;
	width = 50;
	bird_x = high/2;
	bird_y = 3;
	bar1_y = width/2;
	bar1_xDown = high/3;
	bar1_xTop = high/2;
	score = 0;
}

void show()//��ʾ����
{
	gotoxy(0,0);//����
	int i,j;
	for (i=0;i<high;i++)
	{
		for (j=0;j<width;j++)
		{
			if ((i==bird_x) && (j==bird_y))
				printf("@");//���С��
			else if ((j==bar1_y) && ((i<bar1_xDown)||(i>bar1_xTop)) )
				printf("*");//���ǽ��
			else
				printf(" ");//����ո�
		}
		printf("\n");
	}
	printf("�÷֣�%d\n",score);
}

void updateWithoutInput()//���û������޹صĸ���
{
	bird_x ++;
	bar1_y --;
	if (bird_y==bar1_y)
	{
		if ((bird_x>=bar1_xDown)&&(bird_x<=bar1_xTop))
			score++;
		else
		{
			printf("��Ϸʧ��\n");
			system("pause");
			exit(0);
		}
	}
	if (bar1_y<=0)//��������һ���ϰ���
	{
		bar1_y = width;
		int temp = rand()% 16;
		bar1_xDown = temp - high/10;
		bar1_xTop = temp + high/10;
	}

	Sleep(150);
}

void updateWithInput()//���û������йصĸ���
{
	char input;
	if(kbhit())//�ж��Ƿ�������
	{
		input = getch();//�����û��Ĳ�ͬ�������ƶ�����������س�
		if (input == 'j')
		{
			bird_x = bird_x - 2;
		}

	}
}

int main(void)
{
	startup();//���ݳ�ʼ��
	while (1)//��Ϸѭ��ִ��
	{
		show();//��ʾ����
		updateWithoutInput();//���û������޹صĸ���
		updateWithInput();//���û������йصĸ���
	}
	return 0;
}