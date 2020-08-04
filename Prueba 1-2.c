void busqueda_binaria(int n,struct *L){
    struct lista *lista=L;
    int lugar;
    int nohay=-1;
    while(lista->siguiente!=NULL){
           if(lista->actual->numero==n){
            lugar=lista->actual->lugar-1
           }
           else{
               lista->actual=lista->actual->siguiente;
               return nohay;}
 
    }
   }