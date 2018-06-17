#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#
#
int main() {
	char* method;
	if((method  = getenv("REQUEST_METHOD")) == NULL)
		fprintf(stdout, "error_request");
	else if(strcmp(method, "POST")) {
		int length;
		if((length = atoi(getenv("CONTENT_LENGTH"))) != 0) {
			printf("<h1> hello </h1>");
			printf("<h1>%s\n</h1>", scanf("%s", stdin));
		}
	}
	return 0;
}

	 
        printf("Content-Type: text/html\n\n");
        printf("Hello World!\n");
        return 0;
}