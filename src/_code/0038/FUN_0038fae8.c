/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038fae8` (_code @ 0x38fae8, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *FUN_002c0ac8(void);


unsigned int FUN_0038fae8(void)

{
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  puVar1 = (unsigned int *)FUN_002c0ac8();
  temp_v0 = (puVar1[0x5e6] + 1) % 0x28;
  puVar1[0x5e6] = temp_v0;
  if (temp_v0 >= 0x15) {
    *puVar1 = *puVar1 | 0x200;
  }
  return 0;
}
