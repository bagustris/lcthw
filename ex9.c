/* ex9.c
 * array and strings
 * show the similarity between arrays and strings,
 * shows that C stores its strings simply as an array of bytes, 
 * terminated with the '\0' (nul) byte
 * 05/01/2014 
 * bagustris, bagustris@yahoo.com
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
  int numbers[4] = {0};
  char name[4] = {'a'};

  //first, print them out raw
  printf("numbers: %d %d %d %d\n",
         numbers[0], numbers[1],
         name[2], name[3]);

  printf("name:%s\n", name);

  //setup numbers
  numbers[0] = 1;
  numbers[1] = 2;
  numbers[2] = 3;
  numbers[3] = 4;

  //setup the name
  name[0] = 'B';
  name[1] = 'T';
  name[3] = 'A';
  name[4] = '\0';

  //then print them out initialized
  printf("numbers: %d %d %d\n",
         name[0], name[1],
         name[2], name[3]);
  //print the name like a string
  printf("name: %s\n", name);

  //another way to use name
  char *another = "BTA";
  printf("another: %s\n", another);

  printf("another each: %c %c %c\n",
         another[0], another[1],
         another[2], another[3]);

  return 0;
}
