/* ex7.c
 * more variables, some math
 * 04/27/2014 
 * bagustris, bagustris@yahoo.com
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
  int bugs = 100;
  double bug_rate = 1.2;

  printf("You have %d bugs at the imaginary rate of %f.\n", bugs, bug_rate);

  long universe_of_defect = 1L * 1024L * 1024L * 1024L;
  printf("the entire univers has %ld bugs.\n", universe_of_defect);

  double expected_bugs = bugs * bug_rate;
  printf("you are expected to have %f bugs.\n", expected_bugs);

  double part_of_universe = expected_bugs / universe_of_defect;
  printf("that only is %e portion of the universe.\n", part_of_universe);

  //this makes no sense, just demo of something weird
  char nul_byte = '\0';
  int care_percentage = bugs * nul_byte;
  printf("Which menas you should care %d%%.\n", care_percentage);

  return 0;
}
