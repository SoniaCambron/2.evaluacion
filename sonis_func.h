int devuelve_longitud(char palabra[]){
    int longitud=0;//Variable acumuladora
    int cont=0;
    while(palabra[cont]!='\0'){
                               longitud++;
                               cont++;
                               }
    return(longitud);
    }
void cambia_mayus_minus(char palabra[]){
     int cont;
     for(cont=0;cont<devuelve_longitud(palabra);cont++){
       if(palabra[cont]>=65 && palabra[cont]<=95){
           palabra[cont]= palabra[cont]+32;
        }
       else{
            if(palabra[cont]>=97 && palabra[cont]<=122){
               palabra[cont]= palabra[cont]-32;
        }
        }
     }
}    
    
