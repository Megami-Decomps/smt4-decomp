/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e4140` (_code @ 0x3e4140, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_003e4140(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  
  temp_v1 = 0;
  do {
    temp_v2 = temp_v1;
    temp_v0 = temp_v1 * 4;
    temp_v1 = temp_v1 + 1;
    *(unsigned int *)(param_1 + temp_v0) = *(unsigned int *)(temp_v2 * 4 + 0x536bcc);
  } while ((int)temp_v1 < 2);
  return;
}
