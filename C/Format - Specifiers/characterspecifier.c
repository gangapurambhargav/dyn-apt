// Character Specifier
#include <stdio.h>
int main()
{
	char ch = 'A';    // char
	printf("%c\n", ch); //%c
	return 0;
} // bytes =1


//Signed Integer
#include <stdio.h>
int main()
{
	int x = 45, y = 90; //int
	printf("%d\n", x); //%d
	printf("%i\n", x);
	return 0;
} // bytes= 2/4

// Unsigned Integer

#include <stdio.h>
int main()
{
	// The -10 value is converted into it's positive
	// equivalent by %u
	printf("%u\n", -10); // %u 
	printf("%u\n", 10);
	return 0;
} //bytes 2/4

//floating point

#include <stdio.h>
int main()
{
	float a = 12.67; //float
	printf("%f\n", a); //%f
	printf("%e\n", a);
	return 0;
}

// unsigned OCTAL NUMBER for integer

#include <stdio.h>
int main()
{
	int a = 67;
	printf("%o\n", a);  //%o
	return 0;
} 

//Unsigned hexadecimal for integer

#include <stdio.h>
int main()
{
	int a = 67;
	printf("%o\n", a); //%o
	return 0;
}

//String i/o
#include <stdio.h>
int main()
{
	char a[] = "geeksforgeeks"; //char a[]
	printf("%s\n", a); //%s
	return 0;
}

// Addresss Printing
#include <stdio.h>
int main()
{
	int a = 10;
	printf("The Memory Address of a: %p\n",(void*)&a);
	return 0;
}

//DECIMAL INTEGER
#include <stdio.h>
int main()
{
	int a = 0;
	scanf("%d", &a); // input is 45
	printf("%d\n", a);
	return 0;
}
// Integer may be octal or in hexadecimal : %i 
#include <stdio.h>
int main()
{
	int a = 0;
	scanf("%i", &a); // input is 017 (octal of 15 )
	printf("%d\n", a);
	scanf("%i", &a); // input is 0xf (hexadecimal of 15 )
	printf("%d\n", a);
	return 0;
}
//dOUBLE FLOAT
#include <stdio.h>
int main()
{
	double a = 0.0;
	scanf("%lf", &a); // input is 45.65
	printf("%lf\n", a);
	return 0;
}




