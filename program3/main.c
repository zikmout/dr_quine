#include <stdio.h>
#include <stdlib.h>
/*
 better comment here !
*/
#define RT(y) printf(#y);
//#define FT(x) int main() { if (x < 0) exit; char filename[] = "./Sully_X"; filename[8] = x + '0'; FILE*f = fopen("Grace_kid.c", "w");char*program="#include <stdio.h>%c#include <stdlib.h>%c/*%c better comment here !%c*/%c#define FT(x) int main() { if (x < 0) exit; char filename[] = %c./Sully_X%c; filename[8] = %c + '0'; FILE*f = fopen(%cGrace_kid.c%c, %cw%c);char*program=%c%s%c;fprintf(f, program, 10, 10, 10, 10, 10, x, 34, 34, x, 34, 34, 34, 34, 34, program, 34, 10, x, 10);}%cFT(%c)%c";fprintf(f, program, 10, 10, 10, 10, 10, 34, 34, x, 34, 34, 34, 34, 34, program, 34, 10, x, 10);}
//FT(5);
RT(tt);
