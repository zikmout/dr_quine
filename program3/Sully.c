int i = 5;
#include <stdio.h>
#include <stdlib.h>
int main(void) {
//i--;
	char *p="int i = %d;%c#include <stdio.h>%c#include <stdlib.h>%cint main(void) {%c//i--;%c%cchar *p=%c%s%c;%cFILE *pFile;%cchar name[] = %cSully_x.c%c;%cname[6] = i + %c0%c;%cpFile = fopen(name, %cw%c);%cfprintf(pFile, p, i - 1, 10, 10, 10, 10, 10, 9, 34, p, 34, 10, 10, 34, 34, 10, 39, 39, 10, 34, 34, 10, 10, 10, 34, 34, 10, 10, 34, 34, 10, 39, 39, 10, 39, 39, 10, 10, 34, 34, 34, 34, 10, 34, 34, 10, 39, 39, 10, 10, 10, 10, 10);%c//fseek(pFile, 8, SEEK_SET);%c//fprintf(pFile, %c%%d%c, i);%cfclose(pFile);%cchar cmd[] = %cgcc -Wall -Werror -Wextra Sully_X.c -o Sully_X%c;%ccmd[32] = i + %c0%c;%ccmd[45] = i + %c0%c;%csystem(cmd);%cpFile = fopen(name,%cr+%c);fseek(pFile, 8, SEEK_SET);fprintf(pFile, %c%%d%c, i);fclose(pFile);%cchar name2[] = %c./Sully_X%c;%cname2[8] = i + %c0%c;%cif (i == 0) return 0;%csystem(name2);%creturn 0;%c}%c";
FILE *pFile;
char name[] = "Sully_x.c";
name[6] = i + '0';
pFile = fopen(name, "w");
fprintf(pFile, p, i - 1, 10, 10, 10, 10, 10, 9, 34, p, 34, 10, 10, 34, 34, 10, 39, 39, 10, 34, 34, 10, 10, 10, 34, 34, 10, 10, 34, 34, 10, 39, 39, 10, 39, 39, 10, 10, 34, 34, 34, 34, 10, 34, 34, 10, 39, 39, 10, 10, 10, 10, 10);
//fseek(pFile, 8, SEEK_SET);
//fprintf(pFile, "%d", i);
fclose(pFile);
char cmd[] = "gcc -Wall -Werror -Wextra Sully_X.c -o Sully_X";
cmd[32] = i + '0';
cmd[45] = i + '0';
system(cmd);
pFile = fopen(name, "r+");fseek(pFile, 8, SEEK_SET);fprintf(pFile, "%d", i);
char name2[] = "./Sully_X";
name2[8] = i + '0';
if (i == 0) return 0;
system(name2);
return 0;
}
