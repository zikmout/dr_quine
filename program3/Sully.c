int i = 5;
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
int main(void) {
i++;
	char *p="int i = %d;%c#include <stdio.h>%c#include <stdlib.h>%c#include <fcntl.h>%c#include <unistd.h>%cint main(void) {%ci++;%c%cchar *p=%c%s%c;%cchar path[400]; sprintf(path, %cSully_%%d.c%c, i - 1);%cint fd = open(path, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);if (fd == -1) return (1);%cdprintf(fd, p, i - 1, 10, 10, 10, 10, 10, 10, 10, 9, 34, p, 34, 10, 34, i - 1, 34, 10, 10, 10, 34, 34, 34, 34, 10, 10, 10);%csprintf(path, %cgcc -Wall -Werror -Wextra Sully_%%d.c -o Sully_%%d.c%c, i - 1, i - 1); system(path); sprintf(path, %c./Sully_%%d%c, i - 1); if (i > 1) system(path);%creturn 0;%c}%c";
char path[400];sprintf(path,"Sully_%d.c", i - 1);
int fd = open(path, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR); if (fd == -1) return (1);
dprintf(fd, p, i - 1, 10, 10, 10, 10, 10, 10, 10, 9, 34, p, 34, 10, 34, i - 1, 34, 10, 10, 10, 34, 34, 34, 34, 10, 10, 10);
sprintf(path, "gcc -Wall -Werror -Wextra Sully_%d.c -o Sully_%d.c", i - 1, i - 1);system(path);sprintf(path, "./Sully_%d", i - 1); if (i > 1) system(path);
return 0;
}
