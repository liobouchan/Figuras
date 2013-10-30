
#include "figuras.h"

/*
Pinta un triangulo de tamaño fijo
*
**
***
Recibe:
  Figura en la que se pintará el triángulo
Regresa:
  Código de error en caso de recibir apuntador nulo.
  OK en otro caso.
*/
/*int rectangulos(figura* f){
  int i,j;
  if (!ES_VAL(f))
    return AP_INV;

  strcpy(f->sal,"");
  for(i=0;i<f->alt;i++){
    for(j=0;j<f->anc;j++){
      strcat(f->sal,"*"); 
    }
    strcat(f->sal);
  }
  return OK;
}*/

int figura1(figura* f){
  int i,j;
  if(!ES_VAL(f))
    return AP_INV;
  
  strcpy(f->sal,"");
  for(i=0;i<f->alt;i++){
    for(j=0;j<i;j++)
	  strcat(f->sal,"*");
	strcat(f->sal,"\n");
  }
  return OK;
}

int figura2(figura* f){
  int i,j;
  if(!ES_VAL(f))
    return AP_INV;
  
  strcpy(f->sal,"");
  for(i=0;i<f->alt;i++){
    for(j=i+1;j<f->alt;j++)
	  strcat(f->sal,"*");
	strcat(f->sal,"\n");
  }
  return OK;
}

int figura3(figura* f){
  int i,j;
  if(!ES_VAL(f))
    return AP_INV;
  
  strcpy(f->sal,"");
  for(i=0;i<f->alt;i++){
    for(j=0;j<f->anc-1;j++)
	   if(i==0||(i<j)||i==j)
	     strcat(f->sal,"*");
      else
	    strcat(f->sal," ");
	strcat(f->sal,"\n");
  }
  return OK;
} 

int figura4(figura* f){
  int i,j;
  if(!ES_VAL(f))
    return AP_INV;
  
  strcpy(f->sal,"");
  for(i=0;i<f->alt;i++){
    for(j=0;j<f->anc;j++)
	   if(i==0||j<f->anc-i)
	     strcat(f->sal," ");
      else
	    strcat(f->sal,"*");
	strcat(f->sal,"\n");
  }
  return OK;
}

int figura9(figura* f){
  int i,j;
  if(!ES_VAL(f))
    return AP_INV;

  strcpy(f->sal,"");
  for(i=0;i<f->alt;i++){
    for(j=0;j<i;j++)
    strcat(f->sal,"*");
  strcat(f->sal,"\n");
  }

  for(i=0;i<f->alt;i++){
    for(j=i+1;j<f->alt;j++)
    strcat(f->sal,"*");
  strcat(f->sal,"\n");
  }

  return OK;  
}

int figura10(figura* f){
    int i,j;
  if(!ES_VAL(f))
    return AP_INV;

  strcpy(f->sal,"");

  for(i=0;i<f->alt;i++){
    for(j=0;j<f->anc;j++)
     if(i==0||j<f->anc-i)
       strcat(f->sal," ");
      else
      strcat(f->sal,"*");
    for(j=0;j<i;j++)
      strcat(f->sal,"*");
  strcat(f->sal,"\n");
  }

  for(i=0;i<f->alt;i++){
    for(j=0;j<f->anc;j++)
     if(i==0||(i<j)||i==j)
       strcat(f->sal,"*");
     else
      strcat(f->sal," ");
    for(j=i+1;j<f->alt;j++)
      strcat(f->sal,"*");
  strcat(f->sal,"\n");
  }

  return OK; 
}

/*
Inicializa una figura, para especificar el tamaño necesario
Recibe:
  Figura a ser inicializada.
  El ancho y alto de la figura.
Regresa:
  Código de error en caso de que la figura solicitada sea
  muy grande.
*/
int crea_fig(figura* f, int anc, int alt){
  if(!(anc*alt <TAM_MAX))
    return MEM_INS;
	
  strcpy(f->sal,"");
  f->anc = anc;
  f->alt = alt;
  
  return OK;
}
/******************************************************
     Funciones para modificar las caracteristicas
*******************************************************/
/*Modifica el ancho*/
int fig_setalt(figura* f, int alt){
  if(!ES_VAL(f))
    return AP_INV;
  
  f->alt = alt;
  return OK;
}
/*Modifica el largo*/
int fig_setanc(figura* f, int anc){
  if(!ES_VAL(f))
    return AP_INV;
  
  f->anc = anc;
  return OK;
}
/*Regresa el ancho*/
int fig_getanc(const figura* f){
  return f->anc;
}
/*Regresa el largo*/
int fig_getalt(const figura* f){
  return f->alt;
}
/*Convierte una figura en cadena para mostrarlo en pantalla*/
char* fig_tostr(char* sal, const figura* f){
  if(!ES_VAL(f))
    strcpy(sal,"NULL");
  else
    strcpy(sal,f->sal);
  return sal;
}