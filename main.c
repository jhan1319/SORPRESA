#include <stdio.h>
#include <stdlib.h>
//16/20
int main()
{
    printf("INGRESE UNA PASSWORD:\n");
    char c;
    char * texto;
    texto= malloc( 1 * sizeof(char) );
    int i = 0;
    while( (c = getch())!='x'){
        texto = realloc( texto, (i+2) * sizeof(char) );
        texto[i]=c;
        //printf("%c",c);
        i++;

    }
    texto[i]='\0';
    //printf("Este es mi caracter:\n %c",c);
    printf("%s\n",texto);

    printf("REINGRESE NUEVAMENTE SU PASSWORD PARA GUARDAR:\n");
    char d;
    char * texto2;
    texto2 = malloc(1 * sizeof(char));
    int j=0;

    while((d = getch()) != 'x')
    {
      texto2 = realloc(texto2, (i+2) * sizeof(char));
      texto2[j] = d;
      j++ ;
    }
    texto2[j] = '\0';
    
    
    if(texto == texto2)
    {
      printf("PASSWORD GUARDADA");
    }
    if(c != d) // esto compara 2 characters; tenías que comparar 2 strings pudiste usar strcmp(texto,texto2) -2
    {
      printf("ERROR AL GUARDAR LA PASSWORD");
    }
    // tenías que volver a pedirles que reingresen el password si ambos no coinciden -2
    printf("REVISAR SUS ERRORES E INTENTAR DE NUEVO:\nPassword #1:%s\nPassword #2:%s", texto, texto2);


    free(texto);
    return 0;
}
