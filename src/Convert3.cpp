/**convert3
*dealing with struct and pointer
*/
#include<stdio.h>

struct B;

struct A
{
	double x;
	A(const B& b);
};

void f(const A& a){
	printf("f: %f\n",a.x);
}

struct B
{
	double y;
	B(double d) : y(d)
	{
		printf("B::B(double)\n");
	}
};

A::A(const B& b) : x(b.y)
{
	printf("A::A(const B&)\n");
}

main()
{
	A a(1);//a(B(double(1))
	f(a);

	B b(2);//B(double(2))
	f(b);//f(A(b))

//	f(3);//cannot convert implicitly more than once 
	f(B(3));//explicit B(double(3)), implicit f(A(b))
	f(A(4));//explicit B(double(4)), implicit f(A(b))
}

