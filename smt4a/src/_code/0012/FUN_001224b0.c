/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001224b0` (_code @ 0x1224b0, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055b2b4; /* 0x55b2b4 */

extern unsigned int *FUN_0030fc48(void);


void FUN_001224b0(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_0030fc48();
  puVar1[4] = 1;
  puVar1[5] = 0;
  *puVar1 = (unsigned int)&DAT_0055b2b4;
  return;
}
