#include <stdio.h>
/*
	first comment
*/
int f() { return(0); }
char*program="#include <stdio.h>%c/*%c%cfirst comment%c*/%cint f() { return(0); }%cchar*program=%c%s%c;%cint main(void) {%c/*%c%csecond comment%c*/%cf();%creturn!printf(program, 10, 10, 9, 10, 10, 10, 34, program, 34, 10, 10, 10, 9, 10, 10, 10, 10);}%c";
int main(void) {
/*
	second comment
*/
f();
return!printf(program, 10, 10, 9, 10, 10, 10, 34, program, 34, 10, 10, 10, 9, 10, 10, 10, 10);}
