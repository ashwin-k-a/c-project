#include<stdio.h>

#include<conio.h>

#define n 5

int i,j;

void a();

void b();


void  c();

void  d();

void  e();

void  f();


void  g();

void  h();

void  I();

void  J();


void  k();

void  l();

void  m();

void  N();





void  o();

void  p();

void  q();

void  r();


void  s();

void  t();

void  u();

void  v();


void  w();

void  x();

void  y();

void  z();





int main(void)

{



a();

printf("\n\n");

b();

printf("\n\n");

  c();printf("\n\n");

  d();

  printf("\n\n");

  e();printf("\n\n");

  f();printf("\n\n");


  g();printf("\n\n");

  h();printf("\n\n");

  I();printf("\n\n");

  J();printf("\n\n");


  k();printf("\n\n");

  l();printf("\n\n");

  m();printf("\n\n");

  N();printf("\n\n");



  o();printf("\n\n");

  p();printf("\n\n");

  q();printf("\n\n");

  r();printf("\n\n");


  s();printf("\n\n");

  t();printf("\n\n");

  u();printf("\n\n");

  v();printf("\n\n");


  w();printf("\n\n");

  x();printf("\n\n");

  y();printf("\n\n");

  z();printf("\n\n");



getch();

clrscr();

return 0;

}


void  a()

{



for(i=0;i<n;i++)

{

	for(j=0;j<n;j++)

	{

	if(i*j==0)

		printf("*");


	else if(i==2 || j==4)

		printf("*");

	else

		printf(" ");


	}


printf("\n");


}



}

void  b()

{

for(i=0;i<n;i++)

{

	for(j=0;j<n;j++)

	{

	if(i*j%4==0||i==2)

		printf("* ");



	else

		printf("  ");


	}


printf("\n");



}


}



void  c()

{

for(i=0;i<n;i++)

{

	for(j=0;j<n;j++)

	{

	if(i*j==0 ||i==4 )

		printf("*");



	else

		printf(" ");


	}


printf("\n");



}

}

void  d()

{


for(i=0;i<n;i++)

{

	for(j=0;j<n;j++)

	{

	if(i*j==0 || i==4 || j==4)

		printf("*");



	else

		printf(" ");


	}


printf("\n");



}

}


void  e()

{

for(i=0;i<n;i++)

{

	for(j=0;j<n;j++)

	{

	if(i*j==0)

		printf("*");


	else if(i==2 || i==4)

		printf("*");

	else

		printf(" ");


	}


printf("\n");



}


}

void  f()

{

for(i=0;i<n;i++)

{

	for(j=0;j<n;j++)

	{

	if(i*j==0||i==2)

		printf("*");



	else

		printf(" ");


	}


printf("\n");



}



}

void  g()

{

for(i=0;i<n;i++)

{

	for(j=0;j<n;j++)

	{

	if(i*j==0||i==4||i*j==12||i*j==8)

		printf("*");



	else

		printf(" ");


	}


printf("\n");



}



}


void  h()

{

for(i=0;i<n;i++)

{

	for(j=0;j<n;j++)

	{

	if(i==2||j==0||j==4)

		printf("*");



	else

		printf(" ");


	}


printf("\n");



}


}



void  I()

{

for(i=0;i<n;i++)

{

	for(j=0;j<n;j++)

	{

	if(i==0||i==4||j==2)

		printf("*");



	else

		printf(" ");


	}


printf("\n");



}


}



void  J()

{

for(i=0;i<n;i++)

{

	for(j=0;j<n;j++)

	{

	if(i==4||j==4)

		printf("*");



	else

		printf(" ");


	}


printf("\n");



}


}


void  k()

{

for(i=0;i<n;i++)

{

	for(j=0;j<n;j++)

	{

	if(j==1||(i+j==4&&i!=4)||(i+j==6&&i!=4&&j!=4)||i+j==8)

		printf("*");



	else

		printf(" ");


	}


printf("\n");



}



}



void  l()

{

for(i=0;i<n;i++)

{

	for(j=0;j<n;j++)

	{

	if(j==0||i==4)

		printf("*");



	else

		printf(" ");


	}


printf("\n");



}


}


void  m()

{

for(i=0;i<n;i++)

{

	for(j=0;j<n;j++)

	{

	if(i*j==0||j==2||j==4)

		printf("* ");



	else

		printf("  ");


	}


printf("\n");



}



}



void  N()

{

for(i=0;i<n;i++)

{

	for(j=0;j<n;j++)

	{

	if(j==0||i-j==0||j==4)

		printf("*");



	else

		printf(" ");


	}


printf("\n");



}

}


void  o()

{

 for(i=0;i<n;i++)

{

	for(j=0;j<n;j++)

	{

	if(i==0||j==0||i==4||j==4)

		printf("*");



	else

		printf(" ");


	}


printf("\n");



}


}


void  p()

{


for(i=0;i<n;i++)

{

	for(j=0;j<n;j++)

	{

	if(i*j==0||i==2||i-j==-3)

		printf("*");



	else

		printf(" ");


	}


printf("\n");



}

}


void  q()

{


 for(i=0;i<n;i++)

{

	for(j=0;j<n;j++)

	{

	if(i*j%4==0||i+j==6)

		printf("* ");



	else

		printf("  ");


	}


printf("\n");



}





}

void  r()

{

for(i=0;i<n;i++)

{

	for(j=0;j<n;j++)

	{

	if(i*j==0||i==2||i-j==-3||i*j==9||i*j==16)

		printf("*");



	else

		printf(" ");


	}


printf("\n");



}

}

void  s()

{


for(i=0;i<n;i++)

{

	for(j=0;j<n;j++)

	{

	if(i==0||i==2||i==4||i+j==1||i+j==7)

		printf("*");



	else

		printf(" ");


	}


printf("\n");



}


}

void  t()

{

for(i=0;i<n;i++)

{

	for(j=0;j<n;j++)

	{

	if(i==0||j==2)

		printf("*");



	else

		printf(" ");


	}


printf("\n");



}

}


void  u()

{

for(i=0;i<n;i++)

{

	for(j=0;j<n;j++)

	{

	if(j==0||i==4||j==4)

		printf("*");



	else

		printf(" ");


	}


printf("\n");



}


}






void  v()

{


 for(i=0;i<n;i++)

{

	for(j=0;j<n;j++)

	{

	if((j-i==-1||i+j==5)&&i!=4)

		printf("*");



	else

		printf(" ");


	}


printf("\n");



}


}

void  w()

{

for(i=0;i<n;i++)

{

	for(j=0;j<n;j++)

	{

	if(j==0||j==2||j==4||i==4)

		printf("* ");



	else

		printf("  ");


	}


printf("\n");



}

}


void  x()

{

for(i=0;i<n;i++)

{

	for(j=0;j<n;j++)

	{

	if(i-j==0||i+j==4)

		printf("*");



	else

		printf(" ");


	}


printf("\n");



}


}

void  y()

{

for(i=0;i<n;i++)

{

	for(j=0;j<n;j++)

	{

	if(i+j==4||i*j==1||i+j==0)

		printf("*");



	else

		printf(" ");


	}


printf("\n");



}

}


void  z()

{

for(i=0;i<n;i++)

{

	for(j=0;j<n;j++)

	{

	if(i==0||i==4||i+j==4)

		printf("*");



	else

		printf(" ");


	}


printf("\n");



}

}


