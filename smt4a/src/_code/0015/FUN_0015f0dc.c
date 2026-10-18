/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015f0dc` (_code @ 0x15f0dc, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055c618; /* 0x55c618 */

extern unsigned int *FUN_00175f54(void);


void FUN_0015f0dc(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_00175f54();
  *puVar1 = (unsigned int)&DAT_0055c618;
  return;
}
