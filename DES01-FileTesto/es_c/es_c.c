/****************************************************************************
*   Stefano Bonfanti               	4°H                              	    *
*     esercizio numero 3                                            	    *
*                                                                       	*
*              	19/11/22                                                 	*
*****************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#define MAX 30

int main()
{
	int contChar=0,r=0,p=0;
	char file_in[]="nomi.txt";
	char c;
	FILE *pfile;
	
	pfile=fopen(file_in, "r");
	
	while(!feof(pfile)) 
	{	
		c=fgetc(pfile);
		if(c>='a' && c<='z' || c>='A' && c<='Z') {
			contChar++;
		}
		if(c==' ') 
		{
		p++;
		}
	}
	fclose(pfile);
	printf("i Caratteri sono stati letti %d\n", contChar);
	system("pause");
}

