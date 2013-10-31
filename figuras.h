#ifndef FIGURAS_H
#define FIGURAS_H

#include <stdio.h>
#include <string.h>

/*Macros*/
#define ES_VAL(AP)     ((AP)!=NULL)

/*Errores*/
#define OK           	/*No hay error*/
#define MEM_INS  1   	/*memoria insuficiente*/
#define AP_INV   2   	/*Apuntador nulo*/

#define TAM_MAX  1000   /*Maximo tamaño de figura*/
#define TAM_CAD  1000   /*Cadena auxiliar*/

typedef struct{
  char sal[TAM_MAX];
  int anc;              /*Dimensiones de la imagen*/
  int alt;
}figura;

/*···············Manejar figuras·················*/

/*Crea una figura, de tamaño y ancho dado*/
int fig_crea(figura*, int, int);

/* Convierte una figura a una cadena */
char* fig_tostr(char*, const figura*);

/*Obtiene y modifica el tamaño de la figura*/
int fig_setalt(figura*, int);
int fig_getanc(const figura*);
int fig_getalt(const figura*);
int fig_setalt(figura*, int);
int fig_setanc(figura*, int);

/******************************************************
                Figuras que se construyen
*******************************************************/
/*Figura 1 :
*
**
***
****
*/
int figura1(figura*);

/*Figura 2 :
****
***
**
*
*/
int figura2(figura*);

/*Figura 3 :
****
 ***
  **
   *
*/
int figura3(figura*);

/*Figura 4 :
   *
  **
 ***
****
*/
int figura4(figura*);

int figura9(figura*);

int figura10(figura*);

int figura11(figura*);

int figura13(figura*);

int figura15(figura*);

int rectangulos(figura*);

int fig_marco1(figura* f);


#endif