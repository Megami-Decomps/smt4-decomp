/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c8f94` (_code @ 0x3c8f94, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00163e40(unsigned int);


void FUN_003c8f94(unsigned int param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  do {
    temp_v0 = FUN_00163e40(*(unsigned int *)(temp_v1 * 4 + 0x5e1f3c));
    if (temp_v0 == 0) {
      *(unsigned int *)(temp_v1 * 4 + 0x5e1f3c) = param_1;
      return;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 4);
  return;
}
