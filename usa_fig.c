#include "figuras.h"

int main(){
  int i;
  figura f;
  char s[100];
  for(i=0;i<2;i++){
	crea_fig(&f,i*5,i*5);
	figura3(&f);
	printf("%s\n",fig_tostr(s,&f));
  }
  
  return 0;
}