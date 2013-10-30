#include "figuras.h"

int main(){

  int i;
  figura f;
  char s[100];

  //Aqui vamos imprimiendo las figuras
  for(i=0;i<2;i++){
	crea_fig(&f,i*5,i*5);
	figura1(&f);
	printf("%s\n","Figura 1");
	printf("%s\n",fig_tostr(s,&f));
  }

  for(i=0;i<2;i++){
	crea_fig(&f,i*5,i*5);
	figura2(&f);
	printf("%s\n","Figura 2");
	printf("%s\n",fig_tostr(s,&f));
  }

  for(i=0;i<2;i++){
	crea_fig(&f,i*5,i*5);
	figura3(&f);
	printf("%s\n","Figura 3");
	printf("%s\n",fig_tostr(s,&f));
  }
  
  for(i=0;i<2;i++){
	crea_fig(&f,i*5,i*5);
	figura4(&f);
	printf("%s\n","Figura 4");
	printf("%s\n",fig_tostr(s,&f));
  }

  for(i=0;i<2;i++){
	crea_fig(&f,i*7,i*8);
	figura9(&f);
	printf("%s\n","Figura 9");
	printf("%s\n",fig_tostr(s,&f));
  }

  return 0;
}