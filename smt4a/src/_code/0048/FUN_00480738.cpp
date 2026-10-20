/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00480738` (_code @ 0x480738, 0xec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_001ba3d4(unsigned int);


int FUN_00480738(unsigned int param_1)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = 0;
  switch(param_1) {
  default:
    return 0;
  case 1:
    temp_v2 = 0;
    do {
      temp_v0 = FUN_001ba3d4(*(unsigned int *)(temp_v2 * 4 + 0x57f6f8));
      temp_v2 = temp_v2 + 1;
      temp_v1 = temp_v1 + temp_v0;
    } while (temp_v2 < 0xb);
    break;
  case 2:
    temp_v2 = 0;
    do {
      temp_v0 = FUN_001ba3d4(*(unsigned int *)(temp_v2 * 4 + 0x57f724));
      temp_v2 = temp_v2 + 1;
      temp_v1 = temp_v1 + temp_v0;
    } while (temp_v2 < 0xb);
    break;
  case 3:
    temp_v2 = 0;
    do {
      temp_v0 = FUN_001ba3d4(*(unsigned int *)(temp_v2 * 4 + 0x57f750));
      temp_v2 = temp_v2 + 1;
      temp_v1 = temp_v1 + temp_v0;
    } while (temp_v2 < 0xb);
    break;
  case 4:
    temp_v2 = 0;
    do {
      temp_v0 = FUN_001ba3d4(*(unsigned int *)(temp_v2 * 4 + 0x57f77c));
      temp_v2 = temp_v2 + 1;
      temp_v1 = temp_v1 + temp_v0;
    } while (temp_v2 < 0xb);
    break;
  case 5:
    temp_v2 = 0;
    do {
      temp_v0 = FUN_001ba3d4(*(unsigned int *)(temp_v2 * 4 + 0x57f7a8));
      temp_v2 = temp_v2 + 1;
      temp_v1 = temp_v1 + temp_v0;
    } while (temp_v2 < 0xb);
  }
  return temp_v1;
}

} /* extern "C" */
