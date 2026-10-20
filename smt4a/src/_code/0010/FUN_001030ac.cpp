/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001030ac` (_code @ 0x1030ac, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


int FUN_001030ac(unsigned int param_1)

{
  int temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v2 = 0;
  temp_v3 = 0x1ade;
  do {
    temp_v0 = (temp_v2 + temp_v3) / 2;
    temp_v1 = *(short *)(temp_v0 * 2 + 0x550a72);
    temp_v4 = (unsigned int)*(unsigned short *)(temp_v1 * 2 + 0x554030);
    if (param_1 == temp_v4) {
      if (temp_v1 >= 0x2f0) {
        temp_v1 = temp_v1 + 0x292;
      }
      return (int)temp_v1;
    }
    if ((int)param_1 < (int)temp_v4) {
      temp_v3 = temp_v0 - 1;
    }
    else {
      temp_v2 = temp_v0 + 1;
    }
  } while (temp_v2 <= temp_v3);
  return -1;
}

} /* extern "C" */
