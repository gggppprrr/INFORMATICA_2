/**********************************
Stefano Bonfanti                   *       
4H                                 *
19/11/2022                         *
Esercizio 4                        *
***********************************/

#include <stdio.h>	
#include <stdlib.h>	
#include <string.h>		
#include <limits.h>	
#define MAX 30		
int main()
{
char NomeFile  []= {"numeri.txt"}; 	
char NomeFile1 []= {"pari.txt"};	
char NomeFile2 []= {"dispari.txt"};	

char c;

FILE *f1,*f2,*f3;				
f1=fopen(NomeFile,"r");				
f2=fopen(NomeFile1,"w");		
f3=fopen(NomeFile2,"w");			


if(f1!=0&&f2!=0&&f3!=0)				
{
	printf("i file sono stati modificati\n");
	
		while((c=getc(f1))	!=EOF)	
		{
			
			if(c!= ' ') 
		    {
				if(c%2==0)		
				{
				fputc(c,f2);
				fputc(' ',f2);
				}
					
				else				
				{
				fputc(c,f3);
				fputc(' ',f3);
			}
				
		}
		
	}
}

else								
	{
	printf("errore nell apertura del file \n");
	system("pause");
	}
	
	fclose(f1);
	fclose(f2);
	fclose(f3);	
	
}
