/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00311700` (_code @ 0x311700, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_005588b4; /* 0x5588b4 */

extern unsigned int *FUN_002f58d0(void);


void FUN_00311700(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_002f58d0();
  puVar1[0xb] = 0;
  *puVar1 = (unsigned int)&DAT_005588b4;
  puVar1[10] = 0;
  puVar1[9] = 0;
  return;
}
