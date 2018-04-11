// Programma
// Creazione della struttura denominata BUONO
struct BUONO {
            char codice[10+1];
            char data[10+1];
            char email[250+1];
            float valore;
            char datascadenza[10+1];
            int stato; // 1 -> non usato 2 -> usato 3 -> scaduto
};

struct NODO {
           BUONO info;
           NODO *next;
};

// Funzione QuantiNonComuni con parametri
int QuantiNonComuni(NODO *lista1, NODO *lista2, char *datascadenza[], int size)
{
  NODO *tmp = lista1; 
  int counter = 0;
  while(tmp != null){
    NODO *tmp2 = lista2;
    while(tmp2 != null){
      if(strcmp ( tmp -> buono.codice,tmp2 -> buono.codice )==0){  // Controllo in base al codice del buono
          if(calk(tmp -> buono.data, datascadenza, size)){
            counter++;
                                                         }
                                                      }
      tmp2 = tmp2 -> next;
                       }
    tmp = tmp -> next;
                    }
  return counter;
}

// Funzione calk
bool calk(char *data, char *datascadenza,int size)
{
  bool result = false;
  for(int i=0;i<size;i++){
    if(strcmp(data,datascadenza[i])!=0){
      result = true;
                               }
                         }
  return result;
}
                              
