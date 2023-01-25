#include <stdio.h> //standard input and output library
#include <stdlib.h> //standard library of c
#include <string.h> //strings library

#define PI 3.14 //const literals 

int main(int argc, char const *argv[])
{
    /*
        data types and variable definition

        char
        enum
        int
        long
        double
        float

        int x = 10;

        strings are char arrays

    */
    int x = 10;
    char saludo[50] = "hola"; 

   /*
        STRUCTS

        Struct name {
            type variable1
            type variable2
            type variablex
        };

   */
    struct Person
    {
        char name[50];
        char gender;
        int id;
    };
    
    struct Person Roberson;

    /*
        OPERATORS
        
            Suma +
            Resta -
            División /
            Multiplicación *
            IGUAL (EQUAL) ==
            O (OR) ||
            NO (NOT) !
            DISTINTO !=
            Y (AND) &&
            MAYOR >
            MENOR <
            Mayor igual >=
            Menor menor igual <=
            Operador para comparación de bits &
    
    */

   /*
        Printf Parameters

        %d  Muestra decimal
        %o  Muestra en octal
        %x  Muestra entro hexadecimal (minúsculas)
        %X  Muestra entro hexadecimal (mayúscula)
        %f  Notación científica (10E20)
        %c  Carácter
        %s  Modificador de cadena (string)
        \n  Otro renglón (ENTER)
        \t  Tabulador
        \\  Barra de separación.
        \a  Beep

   */

    /*
        Ternary Operator

        (condition)? true : false;
    */

    /*
        MISC

        &variable <- get the addres of the variable
        * <- get the content of a pointer
        int *ptri <- create a pointer

    */

   /*
        Functions 

        type name(args){
            local variables
            code
            return typevar or expression
        }

        IF

        if(cond){
            code
        }else{
            code
        }

        WHILE

        while(condi){
            code
        };

        DO WHILE

        do{

        }while(cond);

        FOR

        for(vari=ini; condition; increments){
            code
        };
   
   */

    printf("Hello World\n"); //print in the window
    int var = 0;

    scanf("%i",&var);

    printf("var -> %i\n", var);
    return 0;
}
