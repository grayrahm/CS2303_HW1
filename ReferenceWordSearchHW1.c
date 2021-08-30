/*
 ============================================================================
 Name        : ReferenceWordSearchHW1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "tests.h"
#include "production.h"

int main(int argc, char* argv[]) {
	puts("!!!Hello World let's try a word search!!!"); /* prints !!!Hello World!!! */
	if (tests())
	{
		puts("all tests passed.");

		production(argc, argv);
	}
	else
	{
		puts("failed");

	}
	return EXIT_SUCCESS;
}
