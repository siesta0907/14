#include <stdio.h>
#include <stdlib.h>

struct Book {
	int number;
	char title[10];
};

void main(void) {
	struct Book *p;
	p = (struct Book*)malloc(2 * sizeof(struct Book));
	if (p == NULL) {
		printf("메모리 할당 오류\n");
		return;
	}
	p->number = 1;
	strcpy(p->title, "C Programming");
	printf("%s\n", p->title);
	
	(p+1)->number = 2;
	strcpy((p+1)->title, "Electronics");
	printf("%s", (p+1)->title);
	free(p);
	return;
}
