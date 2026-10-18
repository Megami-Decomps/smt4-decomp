/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b23a0` (_code @ 0x1b23a0, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055c284; /* 0x55c284 */

extern unsigned int *FUN_001b95dc(void);


unsigned int * FUN_001b23a0(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_001b95dc();
  *puVar1 = (unsigned int)&DAT_0055c284;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  return puVar1;
}
