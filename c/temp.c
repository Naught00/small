#include <stdio.h>

typedef struct string string;

struct string {
	char * s;
	int size;
};

void function(string *text) {
	printf("%s\n", text->s);
	return;
}

int main(void) {
	string text = {"test", 4};

	function(&text);
	printf("%d\n", text.size);
	return 0;
}
