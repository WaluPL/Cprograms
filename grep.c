#include <stdio.h>
int main(int argc, char *argv[]){
char* strstr(char *str, char *substr)
{
      while (*str)
      {
          char *Begin = str;
          char *pattern = substr;
          while (*str && *pattern && *str == *pattern)
          {
              str++;
              pattern++;
        }
        if (!*pattern)
            return Begin;
        str = Begin + 1;
    }
    return NULL;
}
char *napis=argv[1];
FILE*input=fopen(argv[2], "r");
char line[255];
int linia=0;

while(fgets(line,255,input))
{
  if(strstr(line, napis)!=NULL){
            printf("%s", line);
        }
        linia++;
    }

fclose(input);
return 0;
}







