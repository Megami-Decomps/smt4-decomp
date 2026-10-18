/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e00bc` (_code @ 0x3e00bc, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001801a4(void);


void FUN_003e00bc(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_001801a4();
  *(unsigned short *)(temp_v0 + 0x5e) = *(unsigned short *)(temp_v0 + 0x5e) | (unsigned short)(1 << (param_1 & 0xff));
  return;
}
