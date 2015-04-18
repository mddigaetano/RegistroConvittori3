//Dichiarazioni iniziali
#include <stdio.h>
#include <stdlib.h>

//Definizione costanti
#define MAX_STRLEN 30

//Definizione record
struct s_convittore{
    char nome[MAX_STRLEN+1];
    char cognome[MAX_STRLEN+1];
    char data[10+1];            //Data nel formato: dd/mm/yyyy  || sarebbe meglio un altro record?
    /*
     struct s_data{
         unsigned int giorno;
         unsigned int mese;
         unsigned int anno;
     }
     */
    struct s_scuola{
        char tipo[MAX_STRLEN+1];
        char nome[MAX_STRLEN+1];
    };
    struct s_classe{
        unsigned int anno;
        char sezione;
        char corso[MAX_STRLEN+1];
    };
    unsigned int matricola;
};

//Definizione del tipo del record
typedef struct s_convittore convittore;

//Prototipi Funzioni
int AggiungiConvittore();
int CercaConvittore();
int OrdinaNome();
int OrdinaCognome();
int OrdinaData();
int OrdinaScuola();
int OrdinaClasse();
int OrdinaMatricola();
int EliminaConvittore();
    //Aggiungere qui eventuali funzioni aggiuntive

//Inizio Programma
int main(int argc, char** argv) {
    //Dichiarazione variabili
    int scelta;
    convittore nuovo;
    FILE *pFile;                 //Puntatore per file "elenco.dat"
    
//Istruzioni da eseguire
    
    //Elenco funzioni
    printf("Benvenuti nel Registro Convittori 3.0!_____Powered by Amedeo Di Gaetano\n\n");
    printf("Selezionare l'opzione desiserata:\n");
    printf("1-Aggiungi nuovi convittori;\n");
    printf("2-Cerca Convittori;\n");
    printf("3-Stampa Ordinatamente i Convittori;\n");
    printf("4-Elimina Convittore;\n");
    //Aggiungere qui eventuali funzioni aggiuntive
    
    //Inserimento scelta
    printf("\nInserire la scelta: ");
    scanf("%d", &scelta);
    printf("\n");
    
    //Menù delle funzioni
    switch (scelta){
        case 1:
            //operazioni case 1
            if(pFile=fopen("elenco.dat","ab")){
                
            }
            else{
                pFile=fopen("elenco.dat","wb");
                
            }
            
            //controllo chiusura
            if(fclose(pFile))
                printf("Non è stato possibile chiudere (e quindi salvare) il file");
            else
                printf("Operazione terminata con successo");
            break;
        case 2:
            if(pFile=fopen("elenco.dat","rb")){
                //operazioni case 2
                
                //controllo chiusura                
                if(fclose(pFile))
                    printf("Non è stato possibile chiudere (e quindi salvare) il file");
                else
                    printf("Operazione terminata con successo");
            }
            else
                printf("Impossibile aprire il file");
            
            
            break;
        case 3:
            if(pFile=fopen("elenco.dat","rb")){
                //operazioni case 3
                
                //controllo chiusura
                if(fclose(pFile))
                    printf("Non è stato possibile chiudere (e quindi salvare) il file");
                else
                    printf("Operazione terminata con successo");
            }
            else
                printf("Impossibile aprire il file");
            break;
        case 4:
            if(pFile=fopen("elenco.dat","ab")){
                //operazioni case 4
                
                //controllo chiusura
                if(fclose(pFile))
                    printf("Non è stato possibile chiudere (e quindi salvare) il file");
                else
                    printf("Operazione terminata con successo");
            }
            else
                printf("Impossibile aprire il file");
            break;
        default:printf("La funzione selezionata non e' ancora stata aggiunta");
    }
    
    return (EXIT_SUCCESS);
}