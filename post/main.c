#include <stdio.h>
#include <time.h>
#include <string.h>
#include<readline/readline.h>

struct post generate_post(char *name, int time, char *text);
void print_post(struct post p);

struct post {
	char *name;
	int time;
	char *text;
};

struct test2 {
	int test;
	float test2;
	char *test3;
};

struct test {
	char *test;
	int time;
	char text[];
};

int main(void) 
{
	struct post x = {"Daragh", time(NULL), "Test"};
	printf("%s\nPosted at %d\n%s\n", x.name, x.time, x.text);

	struct post new = generate_post("Mark", time(NULL), "This is a test post\nWOw!");
	print_post(new);

	char * name = readline("Enter your name: ");
	char *input;

	char text[100];
	int i;
	i = 0;
	char ch;
	ch = '\n';
	int first;
	first = 1;

	do {
		if (first)
			input = readline("Enter your post: ");
		else
			input = readline("");
		int len;
		len = strlen(input);
		if (input[0] != '.') {
			strncat(input, &ch, 1);
			strcat(text, input);
			first = 0;
		} else {
			break;
		}
	} while (input[0] != '.');


	struct post user = generate_post(name, time(NULL), text);

	print_post(user);

	return 0;
}

struct post generate_post(char *name, int time, char *text) 
{
	struct post new = {name, time, text};
	return new;
}

void print_post(struct post p) 
{
	printf("%s\nPosted at %d\n%s", p.name, p.time, p.text);
	return;
}
