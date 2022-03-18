#include <iostream>
#include <cmath>

using namespace std;

#define min(a, b) (a > b ? cout << b : cout << a)


#define stroka "first line\n"\
				"second line"


//#define p 3.14
//#define e 3
//#define fr for(;;)
//#define begin {
//#define end }

/* сдвиг влево на y бит, <<  ,x << y 
   сдвиг вправо на y бит, >>, x >> y
   все юиты в х меняются на противоположные, ~, ~х
   над каждым битом в х и соответсвующим ему битом в у выполняется операция логичкого и, &, x & y
   над каждым битом в х и соответсвующим ему битом в у выполняется операция логичкого или, |, x | y
   над каждым битом в х и соответсвующим ему битом в у выполняется операция логичкого исключающего или, ^, x ^y
*/

/*сдвиг влево
2 << 1
2(10) = 0010(2)
2 << 1 = 0100 = 4
2 << 2 = 1000 = 8
2 << 3 = 0000
*/

/*сдвиг впарво
12 = 1100
12 >> 1 = 0110 = 6
12 >> 2 = 0011 = 3
12 >> 3 = 0001 = 1
*/

/*Инверсия
4 = 0100
~4 = 1011 = 11

4 = 0000 0100
~4 = 1111 1011 = 251
*/

/*побитовые и или
5 | 6
0101 | 0110 true = 1, false = 0.. true - козда одно из 2 значений = 1
0	1	0	1 \\ 5
0	1	1	0 \\ 6

0	1	1	1 \\ 7
1 | 4 | 6


0	1	0	1	true - когда оба значения = 1
0	1	1	0

0	1	0	0

0100 = 4
*/

/*исключающее или(XOR)
6 3

0	1	1	0  true - когда только 1 значение = 1
0	0	1	1

0	1	0	1

0101= 5
*/

//union employee {
//	int id;
//	double salary;
//};

struct statusField {
	unsigned int JS : 1;//в битах размер
	unsigned int PHP : 1;
	unsigned int Python : 1; //3 * sizeof(unsigned int) = 3 * 4 = 12 байтов
} state;

struct fieldBite {
	unsigned short field1 : 2;
	unsigned short field2 : 2;
	unsigned short field3 : 4;

} field;

struct date {
	unsigned short dayNum : 5;
	unsigned short monthNum : 4;
	unsigned short yearNum : 7;
	unsigned short hourNum : 5;
	unsigned short minuteNum : 6;
	unsigned short secondNum : 6;
};

struct info {
	unsigned char p1 : 2;
	unsigned char p2 : 3;
	unsigned char p3 : 1;
	unsigned char p4 : 1;
	unsigned char mySym;
};

struct myStruct {
	int num;

	void input() {
		cin >> num;
	}

	void print() {
		cout << num << endl;
	}

	void size() {
		cout << sizeof(myStruct) << endl;
	}
};

void dec2bin(int num) {
	int bin = 0;
	int k = 1;

	while (num) {
		bin += (num % 2) * k;
		k *= 10;
		num /= 2;
	}

	cout << bin;
}

int main()
{
	int a = 5;
	int b = 6;
	min(a, b);

	/*myStruct s;
	s.input();
	s.print();
	s.size();

	cin >> s.num;
	dec2bin(s.num);*/

	/*date d;
	int i;
	
	cout << "Day number: " << "\t";
	cin >> i;
	d.dayNum = i;

	cout << "Month number: " << "\t";
	cin >> i;
	d.monthNum = i;

	cout << "Year number: " << "\t";
	cin >> i;
	d.yearNum = i;

	cout << "Date is" << d.dayNum << "." << d.monthNum << "." << d.yearNum << "." << endl;
	cout << sizeof(d) << endl;*/
	//int y = 02, x = 03, z = 01, res;

	//res = x | y & z; //1    (x|(02&01)) = (x|00) = (03|0) = 03
	//cout << res << endl;

	//res = x | y & ~z; // 2 (x|(02&10)) = (x|00) = 03
	//cout << res << endl;

	//res = x ^ x;//3     k = x ^ x (01 ^ 01) = 0
	//cout << res << endl;

	//x <<= 3; //4			x = 01 << 3; 00000001<<3 = 00001000 = 8
	//cout << x << endl;

	/*union {
		short int c1;
		int c2;
		long int c3;
	} myUnion;

	myUnion.c1 = 22;
	cout << myUnion.c1 << endl;

	myUnion.c3 = 3333333;
	cout << myUnion.c3 << endl;

	cout << myUnion.c1 << endl;*/

	/*employee myEmployee;

	myEmployee.id = 15;

	cout << "The first id at ";
	cout << "the aloccated memory:";
	cout << myEmployee.id << endl;

	myEmployee.salary = 100.35;
	cout << "The salary is" << myEmployee.salary << endl;*/
}

