#include <stdio.h>
void main() {
	int i=10;
	scanf_s("%d", &i);
	printf("�Է°�: %d\n", i);
}



/*
struct point {
	int x;
	int y;
};

typedef struct {
	int age;
	char gen;
}person;

void main() {
	int i = 100;
	float f = 2.2f;
	char c = 'a';
	person* per;
	int x = 100;
	int y = 200;

	struct point p;
	p.x = 300;
	p.y = 400;
	printf("%d, %d\n", p.x, p.y);

	person saram1;
	saram1.age = 30;
	saram1.gen = 'F';

	per = &saram1;
	printf("%d, %c\n", per->age, per->gen);
	printf("%d, %c\n", saram1.age, saram1.gen);
}
*/



/*
void prn(int *p) {
	//main�� su ���� 1000���� �ٲٱ�
	*p = 1000;

}


void main() {
	int i;
	int* p; //*�� ����Ʈ(�ּ�) ������ �ǹ�-������ ������ �ּҸ� �����ϴ� ����
	int su = 0;
	i = 100;
	p = &i; //&�� i�� ����Ʈ(�޸� �ּ�)�� �ǹ�, �װ��� ����Ʈ ���� p�� ����, *�� �� ����Ʈ(�޸� �ּ�)�� ��(100)�� �ǹ�
	printf("%d, %p\n", i,&i);
	printf("%p\n",p);
	printf("%d\n", *p);
	prn(&su);
	printf("%d\n", su);
}
*/