#include <stdio.h>
int Add(int salaryA) {
	return salaryA + 1072;
}
int recursion(int salaryB) {
	return salaryB * 2 - 50;
}

int compartion(int salaryA, int salaryB,int count) {
	if (salaryA <= salaryB) {
		return salaryB;
	}
	count++;
	printf("%d���ԓ������Ƃ�\n", count);
	salaryA= Add(salaryA);
	printf("��ʓI�Ȓ����̌n�̏ꍇ��%d�~\n", salaryA);
	salaryB = recursion(salaryB);
	printf("�ċA�I�Ȓ����̌n�̏ꍇ��%d�~\n", salaryB);
	compartion(salaryA, salaryB,count);
	
}
int main() {
	int salaryA=1072;
	int salaryB=100;
	int hour = 1;
	compartion(salaryA, salaryB, hour);
	return 0;
}