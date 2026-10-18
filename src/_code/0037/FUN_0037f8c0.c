/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037f8c0` (_code @ 0x37f8c0, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_002bd630(void);
/* Supplied declaration required: FUN_0037c490. */


void FUN_0037f8c0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_002bd630();
  FUN_0037c490(temp_v0,param_1 + 0x50);
  *(unsigned char *)(param_1 + 0xd) = 1;
  return;
}
