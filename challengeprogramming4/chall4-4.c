#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
  int a_cnt = 0, p_cnt = 0;
  char str[32];
  FILE* fp;

  if(argc < 1) {
    fprintf(stderr, "Usage : %s filename\n", argv[0]);
    return -1;
  }

  fp = fopen(argv[1], "rt");

  do {
    fscanf(fp, "%s", str);
    if (str[0] == 'A' || str[0] == 'a')
      a_cnt++;
    else if (str[0] == 'P' || str[0] == 'p') 
      p_cnt++;
  } while(!feof(fp));

  printf("Count of words with A start: %d\n", a_cnt);
  printf("Count of words with P start: %d\n", p_cnt);

  fclose(fp);

  return 0;
}