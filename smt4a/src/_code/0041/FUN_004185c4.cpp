/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004185c4` (_code @ 0x4185c4, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_001ab940(void);


void FUN_004185c4(int param_1,char param_2)

{
  int temp_v0;
  
  temp_v0 = FUN_001ab940();
  temp_v0 = temp_v0 + param_1 * 4;
  *(unsigned char *)(temp_v0 + 0x2a2) = (*(unsigned char *)(temp_v0 + 0x2a2) & 0xfd) | (param_2 << 1);
  return;
}

} /* extern "C" */
