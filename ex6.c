/* ex6.c
 * types of variable
 * 10/17/2013 
 * bagustris, bagustris@yahoo.com
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
  int distance = 100;
  float power = 2.345f;
  double super_power = 56789.4532;
  char initial = 'A';
  char first_name[]= "bagus";
  char last_name[]="tris";

  printf("you are %d miles away\n", distance);
  printf ("you have %f levels of power.\n", power);
  printf("You have %f awesome super powers,\n", super_power);
  printf("I have initial name %c.\n", initial);
  printf("my whole name is %s %s.\n", first_name, last_name);

  return 0;
}
