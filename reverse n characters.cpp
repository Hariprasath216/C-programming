#include<stdio.h >
#include<string.h >
int main(int argc, char *argv[])
{
 FILE *fs, *fd;
 char s[20], d[20];
 int c = 0, count = 0, n;
 strcpy(s, argv[1]);
 
 fs = fopen(s, "r");
 if(s == NULL)
 printf("\n FILE ERROR");
 printf("\n SOURCE FILE :\n");
 while(!feof(fs))
 {
  printf("%c", fgetc(fs));
  c++;
 }
 fclose(fs);
 fs = fopen(s, "r+");
 count = 0;
 while(count < n)
 {
  d[count] = fgetc(fs);
  count++;
 }
 d[count] = '\0';
 fseek(fs, 0L, 0);
 fputs(strrev(d), fs);
 fclose(fs);
 fs = fopen(s,"r");
 while(!feof(fs))
 {
  printf("%c", fgetc(fs));
  c++;
 }
 fclose(fs);
return 0;
}