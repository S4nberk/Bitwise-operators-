#include <stdio.h>

	int main() {
		int x, y, z;
		x = 4;  //00000100
		y = 13; //00001101
		z = 7;  //00000111

		printf("Initial situation : x = %d , y = %d, z = %d \n", x, y, z);

		// & = AND
		x = y & z;
		/*
		00001101
	 	00000111
	    --------
	    00000101 = 5
		*/ 
		printf("After x = y & z : x = %d \n", x);

		// | = OR
		x = y | z;
		/*
		00001101
	 	00000111
	    --------
	    00001111 = 15
		*/
		printf("After x = y | z : x = %d \n", x);

		// ^ = XOR
		x = y ^ z;
		/*
		00001101
		00000111
	    --------
		00001010 = 10
		*/
		printf("After x = y ^ z : x = %d \n", x);

		// << = SHIFT LEFT
		x = 4 << 1;
		/*
		00000100
	    --------
	    00001000 = 8
		*/
		printf("After x = x << 1 : x = %d \n", x);

		// >> = SHIFT LEFT
		x = 4 >> 1;
		/*
		00000100
		--------
		00000010 = 2
		*/
		printf("After x = x >> 1 : x = %d \n", x);


	return 0;
}
