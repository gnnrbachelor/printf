#include "holberton.h"

int main(void)
{
  int len, len2;
  len = printf("%\n");
  printf("std len : %d\n", len);
  len2 = _printf("%\n");
  printf("our len : %d\n", len2);
  return (0);
}
#include <limits.h>
#include <stdio.h>
#include "holberton.h"

int main(void)
{
  struct comp
  {
    int line_num;
    int return_val;
  };
  struct comp std_printf[13];
  struct comp our_printf[13];
  int x = 0, y = 0, yy = 0, num = 1;
  int len = 0;
  int len2 = 0;
  unsigned int ui;
  void *addr;
  int neg_addr = -999999999, pos_addr = 999999999;
  //specs c s d i u o x X p + space # l h p
  //STD LIBRARY PRINTF EDGE TESTS
  printf("<std library printf edge cases located below>\n");
  printf("--------------------------------\n");
  len = printf("\n%");// 1
  std_printf[x].return_val = len, std_printf[x].line_num = num, num++, x++;
  len = printf("%%d");// 2
  std_printf[x].return_val = len, std_printf[x].line_num = num, num++, x++;
  len = printf("%");// 3
  std_printf[x].return_val = len, std_printf[x].line_num = num, num++, x++;
  len = printf("%%%d", 10);// 4
  std_printf[x].return_val = len, std_printf[x].line_num = num, num++, x++;
  len = printf("%\n");// 5
  std_printf[x].return_val = len, std_printf[x].line_num = num, num++, x++;
  len = printf("%%");// 6
  std_printf[x].return_val = len, std_printf[x].line_num = num, num++, x++;
  len = printf("% ");// 7
  std_printf[x].return_val = len, std_printf[x].line_num = num, num++, x++;
  len = printf(" %");//8
  std_printf[x].return_val = len, std_printf[x].line_num = num, num++, x++;
  len = printf("hello% ");//9
  std_printf[x].return_val = len, std_printf[x].line_num = num, num++, x++;
  len = printf("hello%[] ");//10
  std_printf[x].return_val = len, std_printf[x].line_num = num, num++, x++;
  len = printf(" hello% ");//11
  std_printf[x].return_val = len, std_printf[x].line_num = num, num++, x++;
  len = printf(" hello%[] ");//12
  std_printf[x].return_val = len, std_printf[x].line_num = num, num++, x++;
  len = printf("% \n ");//13
  std_printf[x].return_val = len, std_printf[x].line_num = num, num++, x++;
  //reset x
  x = 0;
  num = 0;
  //OUR PRINTF EDGE TESTS
  printf("<our _printf edge cases located below>\n");
  printf("--------------------------------\n");
  len2 = _printf("\n%");// 1
  our_printf[x].return_val = len2, our_printf[x].line_num = num, num++, x++;
  len2 = _printf("%%d");// 2
  our_printf[x].return_val = len2, our_printf[x].line_num = num, num++, x++;
  len2 = _printf("%");// 3
  our_printf[x].return_val = len2, our_printf[x].line_num = num, num++, x++;
  len2 = _printf("%%%d", 10);// 4
  our_printf[x].return_val = len2, our_printf[x].line_num = num, num++, x++;
  len2 = _printf("%\n");//5
  our_printf[x].return_val = len2, our_printf[x].line_num = num, num++, x++;
  len2 = _printf("%%");//6
  our_printf[x].return_val = len2, our_printf[x].line_num = num, num++, x++;
  len2 = _printf("% ");//7
  our_printf[x].return_val = len2, our_printf[x].line_num = num, num++, x++;
  len2 = _printf(" %");//8
  our_printf[x].return_val = len2, our_printf[x].line_num = num, num++, x++;
  len2 = _printf("hello% ");//9
  our_printf[x].return_val = len2, our_printf[x].line_num = num, num++, x++;
  len2 = _printf("hello%[] ");//10
  our_printf[x].return_val = len2, our_printf[x].line_num = num, num++, x++;
  len2 = _printf(" hello% ");//11
  our_printf[x].return_val = len2, our_printf[x].line_num = num, num++, x++;
  len2 = _printf(" hello%[] ");//12
  our_printf[x].return_val = len2, our_printf[x].line_num = num, num++, x++;
  len2 = _printf("% \n ");//13
  our_printf[x].return_val = len2, our_printf[x].line_num = num, num++, x++;
  //TRANSITION TO RESULTS
  printf("-----------------\n");
  printf("<ran all edge cases>\n");
  printf("-----------------\n");
  printf("<our _printf call fails on these indexed lines in the test file>\n\n");
  printf("<below are the line numbers where _printf function fails in testfile>");
  printf("\n < compare this list of numbers below to the test file to see where the");
  printf("\ncomments on right hand side indicate where your _printf is failing");
  printf(" an edge case>\nEXAMPLE:// 1,// 2, etc...\n");
  printf("-----------------\n");
  //RESULTS AFTER COMPARING
  for (y = 0; y < 13; y++)
    {
      if (std_printf[y].return_val != our_printf[y].return_val)
	{
	  if (std_printf[y].return_val > 7);
	  {
	    if (std_printf[y].return_val > 7);
	    {
	      printf(": %d\n", std_printf[y].line_num);
	      yy++;
	    }
	  }
	}
    }
  return (0);
}
