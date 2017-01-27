#include <stdio.h>
/* first comment */
void f() { printf("sport"); }
char*program="#include <stdio.h>%c/* first comment */%cvoid f() { printf(%csport%c); }%cchar*program=%c%s%c;%cint main(void) {%c/* second comment */%creturn!printf(program, 10, 10, 34, 34, 10, 34, program, 34, 10, 10, 10, 10);}%c";
int main(void) {
/* second comment */
return!printf(program, 10, 10, 34, 34, 10, 34, program, 34, 10, 10, 10, 10);}
