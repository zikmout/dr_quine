int i = 5;
#include <stdio.h>
#include <stdlib.h>
int main(void) {
//i--;
	char *p="int i = %d;%c#include <stdio.h>%c#include <stdlib.h>%cint main(void) {%c//i--;%c%cchar *p=%c%s%c;%cif (i < 0) return 0;%cFILE *pFile;%cchar name[] = %cSully_x.c%c;%cname[6] = i + %c0%c;%cpFile = fopen(name, %cw%c);%cfprintf(pFile, p, i - 1, 10, 10, 10, 10, 10, 9, 34, p, 34, 10, 10, 10, 34, 34, 10, 39, 39, 10, 34, 34, 10, 10, 10, 34, 34, i - 1, 10, 10, 34, 34, 10, 39, 39, 10, 39, 39, 10, 10, 10, 10);%cfseek(pFile, 8, SEEK_SET);%cfprintf(pFile, %c%%d%c, %d);%cfclose(pFile);%cchar cmd[] = %cgcc -Wall -Werror -Wextra Sully_X.c -o Sully_X%c;%ccmd[32] = i + %c0%c;%ccmd[45] = i + %c0%c;%csystem(cmd);%creturn 0;%c}%c";
if (i < 0) return 0;
FILE *pFile;
char name[] = "Sully_x.c";
name[6] = i + '0';
pFile = fopen(name, "w");
fprintf(pFile, p, i - 1, 10, 10, 10, 10, 10, 9, 34, p, 34, 10, 10, 10, 34, 34, 10, 39, 39, 10, 34, 34, 10, 10, 10, 34, 34, i - 1, 10, 10, 34, 34, 10, 39, 39, 10, 39, 39, 10, 10, 10, 10);
fseek(pFile, 8, SEEK_SET);
fprintf(pFile, "%d", 4);
fclose(pFile);
char cmd[] = "gcc -Wall -Werror -Wextra Sully_X.c -o Sully_X";
cmd[32] = i + '0';
cmd[45] = i + '0';
system(cmd);
return 0;
}
