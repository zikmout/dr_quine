int i = 5;
#include <stdio.h>
#include <stdlib.h>
int main(void) {
if (i < 0) return 0;
FILE *pFile;
char name[] = "Sully_x.c";
name[6] = i + '0';
pFile = fopen(name, "w");
	char *p="int i = %d;%c#include <stdio.h>%c#include <stdlib.h>%cint main(void) {%cif (i < 0) return 0;%cFILE *pFile;%cchar name[] = %cSully_x.c%c;%cname[6] = i + %c0%c;%cpFile = fopen(name, %cw%c);%c%cchar *p=%c%s%c;%cfprintf(pFile, p, i, 10, 10, 10, 10, 10, 10, 34, 34, 10, 39, 39, 10, 34, 34, 10, 9, 34, p, 34, 10, 10, 10, 10);%creturn 0;%c}%c";
fprintf(pFile, p, i, 10, 10, 10, 10, 10, 10, 34, 34, 10, 39, 39, 10, 34, 34, 10, 9, 34, p, 34, 10, 10, 10, 10);
return 0;
}
