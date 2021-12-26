#include<stdio.h>
int main(void)
{
	int ch;
	int num=0;
	int at_beginning=1;
	while ((ch=getchar())!=EOF)
	  {
	  	if (at_beginning==1)
	  	  {
	  	  	at_beginning=0;
	  		++num;
	  		printf("%d ",num);
		  }
	  	if (ch=='\n') at_beginning=1;
		printf("%c",ch);
	  }
	return 0;
}
