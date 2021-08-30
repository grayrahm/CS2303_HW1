/*
 * production.h
 *
 *  Created on: Aug 29, 2021
 *      Author: CyberPower
 */

#ifndef PRODUCTION_H_
#define PRODUCTION_H_

#include <stdio.h>
#include <stdbool.h>
#include <string.h>//strncpy
#include <stdlib.h>//strtol

#define MAXSTRINGLENGTH (100)

bool production(int argc, char* argv[]);
bool getYesNo(char* query);
void substringExtraction(char* whole, int* results);
void printOut(int* results, int arrSize);
void bzeros(char *s, int n);



#endif /* PRODUCTION_H_ */
