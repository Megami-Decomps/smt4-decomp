#include "romwright_types.h"

extern "C" {

int FUN_0040223c(int);

/* Supplied declaration required: FUN_0040223c. */


void FUN_004f6e20(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  do {
    temp_v0 = param_1 + temp_v1 * 0x3c;
    *(unsigned int *)(temp_v0 + 0x139c) = 0;
    *(unsigned int *)(temp_v0 + 0x1398) = 0xffffffff;
    FUN_0040223c(temp_v0 + 0x13a0);
    temp_v1 = temp_v1 + 1;
    *(unsigned int *)(temp_v0 + 0x13d0) = 0;
  } while (temp_v1 < 0x32);
  return;
}

} /* extern "C" */
