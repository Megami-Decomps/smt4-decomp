/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001522d4` (_code @ 0x1522d4, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002a7a94(unsigned int);


int FUN_001522d4(unsigned int *param_1,int param_2)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (*(char *)(param_1 + 3) != '\0') {
    temp_v0 = FUN_002a7a94(*param_1);
    temp_v0 = *(int *)(param_1[1] + param_2 * 0xc + 8) + temp_v0 + 8;
  }
  return temp_v0;
}
