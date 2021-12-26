#include<stdio.h>
#include<string.h>
int main(void)
{
	char s[1000],ans[1000];
	int current_max=-1;
	while ((gets(s))!=NULL)
	  {
	  	int len=strlen(s);
	  	if (len>current_max) 
		  {
		  	current_max=len;
			strcpy(ans,s);
		  } 
	  }
	if (current_max>=0) printf("%s\n",ans);
	return 0;
}
