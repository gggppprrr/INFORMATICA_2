/** ****************************************************************************************
* es_a
*
*  Scrivi  un  programma  che  legge  il  file  nomi.txt e  scrive  un  file  
*  NOMI2.TXT,  dove  tutti  i  nomi  sono stati trasformati in caratteri maiuscoli.
* 
* Stefano Bonfanti
* 15 novembre 2022
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char NomeFileIN[]="nomi.txt";
	char NomeFileOUT[]="nomi2.txt";
	FILE *pFileIn, *pFileOut;
	char c;
	
	pFileIn=fopen(NomeFileIN, "r");
	if(pFileIn==NULL) {
		printf("errore nell'apertura fel file in'");
		return 1;
	}
	pFileOut=fopen(NomeFileOUT, "w");
	if(pFileOut==NULL) {
		printf("errore nell'apertura fel file out");
		return 1;
	}

	while(!feof(pFileIn)) //Ripetiamo fina alla fine del file
	{
		//Leggo un carattere del file
		c=fgetc(pFileIn);
		if(c>='a' && c<='z') //se è minuscolo
		{
			c=c-32; //lo converto in maiuscolo
			fputc(c, pFileOut); //lo scrivo su file OUT
		}
		else
		{
			fputc(c, pFileOut);
		}
	}
	
	fclose(pFileIn);
	fclose(pFileOut);
}
