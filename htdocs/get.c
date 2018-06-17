#include <stdlib.h>
#include <stdio.h>

int main() {
	char* querry;
	querry = getenv("QUERY_STRING");
	printf("Content-type: text/html\n\n");
	printf("<h1>Querry string is %s</ h1>\n", querry);
	return 0;
}
