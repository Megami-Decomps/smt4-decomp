/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001156fc` (_code @ 0x1156fc, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002e7168(int, unsigned int);


void FUN_001156fc(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_002e7168(param_1 + 4,0x80000);
  temp_v1 = 0;
  do {
    temp_v2 = temp_v1 * 4;
    temp_v1 = temp_v1 + 1;
    *(unsigned int *)(temp_v2 + temp_v0 + 0x30) = 0;
  } while (temp_v1 < 8);
  return;
}

} /* extern "C" */
