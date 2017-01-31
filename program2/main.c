#include <stdio.h>
#define decode(s,i,m,o,n,e) m##i##o##e
#define begin decode(c,a,m,i,o,n)
//comment
#define F() int begin() { FILE*f = fopen("Grace_kid.c", "w");char*program="#include <stdio.h>%c#define decode(s,i,m,o,n,e) m##i##o##e%c#define begin decode(c,a,m,i,o,n)%c//comment%c#define F() int begin() { FILE*f = fopen(%cGrace_kid.c%c, %cw%c);char*program=%c%s%c;%cF() return!fprintf(f, program, 10, 10, 10, 10, 34, 34, 34, 34, 34, program, 34, 10, 10);}%c";
F() return!fprintf(f, program, 10, 10, 10, 10, 34, 34, 34, 34, 34, program, 34, 10, 10);}
