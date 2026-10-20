/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a2cbc` (_code @ 0x2a2cbc, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned short *FUN_002613f0(int);


void FUN_002a2cbc(void)

{
  unsigned short *puVar1;
  int temp_v0;
  
  temp_v0 = 0;
  do {
    puVar1 = (unsigned short *)FUN_002613f0(temp_v0);
    *puVar1 = 0;
    puVar1[1] = 0;
    temp_v0 = temp_v0 + 1;
    puVar1[2] = 0;
    puVar1[3] = 0;
  } while (temp_v0 < 0x18);
  return;
}

} /* extern "C" */
