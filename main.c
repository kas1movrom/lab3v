#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <readline/readline.h>

typedef struct item {
	unsigned int release;
	unsigned int key;
	char *info;
	struct item *next;
} item;

typedef struct key_space {
	int hash;
	item *list;
} key_space;

typedef struct table {
	key_space **arr;
	int m_size;
	int c_size;
} table;


int main()
{

	return 0;
}
