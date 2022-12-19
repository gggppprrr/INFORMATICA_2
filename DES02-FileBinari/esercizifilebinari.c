/** ****************************************************************************************
* \mainpage <nome del progetto>
*
* @brief <inserire una breve descrizione del progetto>
* <specifiche del progetto>
* <specifiche del collaudo>
* 
* @author Stefano Bonfanti 4H 
* @date <data> 
* @version 1.0 <data> Versione iniziale
* @version 1.1 <data> <Descrivere le modifiche apportate>
*/
#include <stdio.h>      
#include <stdlib.h>	   
#include <string.h>     

//define
#define S 50            
#define NR_VOTI 3             
#define MAX 50          

//struct
struct data              
{
    int giorno;
    char mese[S];
    int anno ;

}typedef data;

struct studente            
{
    int matricola;
    char cognome[S];
    int voti[NR_VOTI];
    data nascita;

}typedef studente;

void inserisciRecord(char fileName[], int numRecord);                                          
void stampaFile(char fileName[]);                     
int ricercaRecord(char fileName[], char cognome[]);   
int stampaRecord(char fileName[], int posizione);
int correggiRecord(char fileName[], int posizione); 

int main()
{
    FILE *f1;                                  
    char NomeFile[MAX] ={"file.txt"};          

    //inserisciRecord(NomeFile,1);
    stampaFile(NomeFile);
}

/** ****************************************************************************************
* @brief  inserisce in coda n record con i dati richiesti all’utente. Se il file non esiste 
*         va creato e quindi effettuare l’inserimento. 
* @param  fileName: nome del file da aprire in scrittura, numRecord: quamti file verranno
*                   inseriti in coda al file
* @retval <valori restituiti>
* @see <See Also: Describes a cross-reference to classes, functions, methods, variables, ...>
*
* @author <autore>
* @version 1.0 <data> <Descrivere le modifiche apportate>
* @version 1.1 <data> <Descrivere le modifiche apportate>
*/
void inserisciRecord(char fileName[], int numRecord) 
{
    FILE *f1;
    struct studente buffer;             

    f1=fopen(fileName,"ab");           
    int j=0;

    if(f1!=0)                           
    {   
        printf("inserisci matricola\n");
        scanf("%d",&buffer.matricola);
        printf("\n");
        printf("inserisci cognome\n");
        scanf("%s",buffer.cognome);

        for(j=0;j<NR_VOTI;j++)
        {
            printf("inserisci voti\n");
            scanf("%d",&buffer.voti[j]);
        }

        printf("inserisci giorno\n");
        scanf("%d",&buffer.nascita.giorno);
        printf("inserisci mese\n");
        scanf("%s",buffer.nascita.mese);
        printf("inserisci anno\n");
        scanf("%d",&buffer.nascita.anno);
        fwrite(&buffer,sizeof(struct studente),1,f1);
		fclose(f1);
    }
    else
    {
        printf("impossibile aprire");
    }
}

/** ****************************************************************************************
* @brief  Stampa su monitor (una riga per record) tutte le informazioni contenute nel file; 
* @param  fileName: nome del file da aprire in lettura
* @retval nessuno
* @see <See Also: Describes a cross-reference to classes, functions, methods, variables, ...>
*
* @author <autore>
* @version 1.0 <data> <Descrivere le modifiche apportate>
* @version 1.1 <data> <Descrivere le modifiche apportate>
*/
void stampaFile(char fileName[])
{
    FILE *f1;
    struct studente stud;           

    f1=fopen(fileName,"rb");            
    if(f1!=NULL) 
    {
        while(!feof(f1))
        {   
            printf("Matricola: %d\n",stud.matricola);
            printf("Cognome: %s\n",stud.cognome);
            printf("Voti:");
            for(int j=0;j<NR_VOTI;j++)
            {
                printf("%d ",stud.voti[j]);              
            }

            printf("\nData di nascita: %d/",stud.nascita.giorno);
            printf("%s-",stud.nascita.mese);
            printf("%d\n",stud.nascita.anno);

            fread(&stud,sizeof(struct studente),1,f1);          
        }
		fclose(f1);
    }
    else
    {
        printf("impossibile aprire");
    }
}

int ricercaRecord(char fileName[], char cognome[]) 
{
/*    FILE *f1;

    struct studente buffer;             

    f1=fopen(fileName,"rb");            

    int j=0;

    int s;                            

    int m=0;                           

    if(f1!=0)                           
    {
        while(!feof(f1))
         {
            if(strcmp(buffer.cognome,cognome)==0)      
            {
                printf("cognome: %s\n",buffer.cognome);
                s=0;   

                for(j=0;j<NR_VOTI;j++)
                {
                    s=s+buffer.voti[j];                 
                }

                media=s/NR_VOTI;
                printf("la media dei voti :%d\n",media);
                printf("inserisci giorno: %d\n",buffer.nascita.giorno);
                printf("inserisci mese: %s\n",buffer.nascita.mese);
                printf("inserisci anno: %d\n",buffer.nascita.anno);
                fread(&buffer,sizeof(struct studente),1,f1);
            }
            
            
         }




		fclose(f1);
    }

    else
    {
        printf("impossibile aprire");
    }
*/
    return 0;
}

int stampaRecord(char fileName[], int posizione) 
{
/*
    FILE *f1;

    struct studente buffer;            
    f1=fopen(fileName,"rb");           

    int j=0;

    if(f1!=0)                          
    {
        while(!feof(f1))
        {
            if(buffer==posizione) 
            {               
                printf("numero matricola: %d\n",buffer.matricola);
                printf("cognome: %s\n",buffer.cognome);

                for(j=0;j<NR_VOTI;j++)
                {
                    printf("stampa  voti: %d\n",buffer.voti[j]);
                }
                printf("inserisci giorno: %d\n",buffer.nascita.giorno);
                printf("inserisci mese: %s\n",buffer.nascita.mese);
                printf("inserisci anno: %d\n",buffer.nascita.anno);
                fread(&buffer,sizeof(struct studente),1,f1);
            }                     
        }
		fclose(f1);
    }
    else
    {
        printf("impossibile aprire");
    }
*/
    return 0;
}

int correggiRecord(char fileName[], int posizione)
{
/*
    FILE *f1;
    struct studente buffer;             
    int j=0;

    f1=fopen(fileName,"rb");            

    if(f1!=0)                           
    {
        stampaRecord(FileName,Bonfanti);
        fclose(f1);
    }
    else
    {
        printf("impossibile aprire");
    }
*/
    return 0;
}
