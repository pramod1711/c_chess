#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void getkey();

void main()
 {
	clrscr();
	while(1)
	{
		if(kbhit())
		getkey();
	}

	getch();

 }

 void getkey()
 {
	char ch;
	int i;
	ch=getch();
	if(ch=='x')
		exit(0);
	else
	{
	for(i=0;i<5;i++)
	printf("%c",ch);
	}
 }