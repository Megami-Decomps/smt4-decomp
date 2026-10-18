/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0046a0f0` (_code @ 0x46a0f0, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001ad9b4. */


unsigned short FUN_0046a0f0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned short *puVar1;
  
  puVar1 = (unsigned short *)(*(unsigned int *)(param_1 + 0xa0c) & 0xffff);
  FUN_001ad9b4();
  return *puVar1;
}
