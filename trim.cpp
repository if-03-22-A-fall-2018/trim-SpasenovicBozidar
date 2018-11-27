/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			trim.cpp
 * Author:			P. Bauer
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * Test functions for trim.h
 * ----------------------------------------------------------
 */
#include "trim.h"
#include "string.h"
void trim(char *str, char *trimmed){
  if (strcmp(str, "") == 0) {
    strcpy(trimmed, "");
    return;
  }


int start = 0;
int  length = strlen(str);


      while ((str)[start] == ' ') {
        start++;
      }

      (str) += start;

      if (start < length)
      {

            int end = strlen(str) - 1;
            while ((str)[end] == ' ') {
              end--;
            }
            (str)[end +1] = 0;
      }


  strcpy(trimmed, str);
}
