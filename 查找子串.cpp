#include <stdio.h>

char* findString(char* str,char* target)
{
	int flag=0;
	int n=0;
	char* p=target;
	while(*target++)
	{
		n++;
	}
	target=p;
	while(*str)
	{
		if(flag)
		{
			if(*p==0)
			{
				return str-n;
			}
			if(*str==*p)
			{
				p++;
				str++;
				continue;
			}
			else
			{
				p=target;
				flag=0;
			}
		}
		else
		{
			if(*str==*target)
			{
				flag=1;
				p=target+1;
			}
		}
		str++;
	}
	return NULL;
}

int main()
{
	char* p;
	p=findString("qqwertyuioasdfghjkl","wert");
	puts(p);
	return 0;
}
