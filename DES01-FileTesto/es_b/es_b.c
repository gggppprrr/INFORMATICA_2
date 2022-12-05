/****************************************************************************
*            4°H                              	                            *
*                                                                       	*
*      Stefano Bonfanti                                                     *
*     secondo esercizio                                            	        *
*                                                                       	*
*****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define MAX 30

int main()
{
	char pfile[MAX+1];
	char pfile2[MAX+1];	
	char c;
	FILE *FileIN,*FileOUT;
	
	printf("da quale file devo leggere?");
	scanf("%s",pfile);
	printf("in quale file devo copiare?");
	scanf("%s",pfile2);
	
	FileIN=fopen(pfile,"r");
	FileOUT=fopen(pfile2,"a");
	if (FileIN != NULL && FileOUT != NULL)
        {
while(!feof(FileIN))
{
	c=fgetc(FileIN);

			
	fputc(c,FileOUT);
}
fclose(FileIN);
fclose(FileOUT);
}
else
	
printf("\n c e un errore nell apertura del file");
system("pause");

}


