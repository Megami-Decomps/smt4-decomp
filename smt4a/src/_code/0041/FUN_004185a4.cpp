/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004185a4` (_code @ 0x4185a4, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_001ab940(void);


void FUN_004185a4(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_001ab940();
  temp_v0 = temp_v0 + param_1 * 4;
  *(unsigned char *)(temp_v0 + 0x2a2) = *(unsigned char *)(temp_v0 + 0x2a2) | 0x10;
  return;
}

} /* extern "C" */
