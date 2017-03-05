#include <stdio.h>
#include <stdlib.h>
/*
 better comment here !
*/
#define x 5
#define FT(x) int main() { int i = x; i--; if (x < 0) exit; char filename[] = "./Sully_X"; filename[8] = i + '0'; char dfilename[] = "./Sully_X.c"; dfilename[8] = i + '0'; FILE*f = fopen(dfilename, "w");char*program="#include <stdio.h>%c#include <stdlib.h>%c/*%c better comment here !%c*/%c#define FT(x) int main() { int i = x; i--; if (x < 0) exit; char filename[] = %c./Sully_X%c; filename[8] = i + %c0%c; char dfilename[] = %c./Sully_x.c%c; dfilename[8] = i + %c0%c; FILE*f = fopen(dfilename, %cw%c);char*program=%c%s%c;fprintf(f, program, 10, 10, 10, 10, 10, 34, 34, 39, 39, 34, 34, 39, 39, 34, 34, 34, program, 34, 34, 34, 39, 39, 39, 39, 10, (x - 1), 10); fclose(f); char compil[] = %cgcc Sully_X.c -o Sully_X%c; compil[10] = i + %c0%c; compil[23] = i + %c0%c; system(compil); system(filename);}%cFT(%d)%c";fprintf(f, program, 10, 10, 10, 10, 10, 34, 34, 39, 39, 34, 34, 39, 39, 34, 34, 34, program, 34, 34, 34, 39, 39, 39, 39, 10, (x - 1), 10); fclose(f); char compil[] = "gcc Sully_X.c -o Sully_X"; compil[10] = i + '0'; compil[23] = i + '0'; system(compil); system(filename);}
FT(x + 1);
