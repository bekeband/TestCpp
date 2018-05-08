//============================================================================
// Name        : TestCpp.cpp
// Author      : Beke András
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <iostream>
#include <fstream>

#if !defined(CLASSLIB_DICT_H)
//# include <classlib/dict.h>
#endif

bool is_alpha(const char* ch)
{

  if (((*ch >= 'a') && (*ch <= 'z')) || ((*ch >= 'A') && (*ch <= 'Z')))
    {
      return true;
    } else
      {
	if (( strcmp(ch , "á") == 0 ) || ( strcmp(ch , "Á") == 0 ) || ( strcmp(ch , "é") == 0 ) || ( strcmp(ch , "É") == 0 ) ||
	    ( strcmp(ch , "í") == 0 ) || ( strcmp(ch , "Í") == 0 ) || ( strcmp(ch , "ü") == 0 ) || ( strcmp(ch , "Ü") == 0 ) ||
	    ( strcmp(ch , "ú") == 0 ) || ( strcmp(ch , "Ú") == 0 ) || ( strcmp(ch , "ö") == 0 ) || ( strcmp(ch , "Ö") == 0 ) ||
	    ( strcmp(ch , "ő") == 0 ) || ( strcmp(ch , "Ő") == 0 ) || ( strcmp(ch , "ú") == 0 ) || ( strcmp(ch , "Ú") == 0 ) ||
	    ( strcmp(ch , "ó") == 0 ) || ( strcmp(ch , "Ó") == 0 ))
	  return true;
	else
	  return false;
      }



/*  	return (((ch >= 'a') && (ch <= 'z')) || ((ch >= 'A') && (ch <= 'Z')) ||
    				(ch == "á") || (ch == "Á") || (ch == "é") || (ch == "É") ||
    				(ch == 'í') || (ch == 'Í') || (ch == 'ü') || (ch == 'Ü') ||
            (ch == 'û') || (ch == 'Û') || (ch == 'ö') || (ch == 'Ö') ||
            (ch == 'õ') || (ch == 'Õ') || (ch == 'ú') || (ch == 'Ú') ||
            (ch == 'ó') || (ch == 'Ó'));*/
};

int main(void) {

std::string nexttoken;
char nextchar;
char ch;
//int inmode = ios::in;
//int outmode = ios::out;
#define MAX_TOKEN	512
char next_token[MAX_TOKEN];
int token_pos;
int token_number = 0;
int max_token = 0;

std::ifstream ifs;

ifs.open ("infile.txt", std::ifstream::in);


	puts("!!!Hello World!!!");
	return EXIT_SUCCESS;
}
