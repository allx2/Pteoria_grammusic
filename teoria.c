#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){

  if(argc > 1){
    char file[100],*check;
    strcpy(file,argv[1]);
    check=strrchr(file,'.');
    //printf("%s\n",check );
    if( strcmp(check,".txt") == 0)
    {
      FILE  *gfile;
      gfile = fopen(gfile,"r+");
      if(gfile == NULL){
        printf("el archivo %s No existe\n",file);
      }
    }

  }

  //fscanf("",)
  return 0;

}
