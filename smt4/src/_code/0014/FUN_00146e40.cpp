/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00146e40` (_code @ 0x146e40, 0xc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013ac54(unsigned char *);

extern unsigned char DAT_004ead10; /* 0x4ead10 */

/* Supplied declaration required: FUN_0013ac54. */


void FUN_00146e40(int param_1,unsigned char param_2)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned char *)(param_1 + 0x26) = param_2;
  FUN_0013ac54(&DAT_004ead10);
  return;
}

} /* extern "C" */
