#include "romwright_types.h"

extern "C" {

extern int FUN_0018206c(unsigned int, int);


unsigned char FUN_004ac19c(void)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  temp_v1 = 0;
  do {
    temp_v0 = FUN_0018206c(0xc,temp_v1);
    if (temp_v0 != 0) {
      temp_v2 = temp_v2 + 1;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 6);
  temp_v1 = 0;
  do {
    temp_v0 = FUN_0018206c(0xd,temp_v1);
    if (temp_v0 != 0) {
      temp_v2 = temp_v2 + 1;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 5);
  return temp_v2 >= 11;
}

} /* extern "C" */
