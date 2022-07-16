 #include <stdio.h>
 int put1(const char* string);
 int main(void)
 {
 printf("i count %d characters.\n",put1("if i'd as much money"));
 return 0;
 }
 int put1(const char *string)
 {
 int count = 0;
 while(*string)
 {
putchar(*string++);
count++;
 }
 putchar('\n');
 return(count);
 }
