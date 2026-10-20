/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d85d0` (_code @ 0x2d85d0, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c425c(unsigned int, unsigned int);

extern unsigned int *DAT_0043ded0; /* 0x43ded0 */

/* Supplied declaration required: FUN_002c425c. */


void FUN_002d85d0(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0043ded0;
  FUN_002c425c(*DAT_0043ded0,param_1);
  puVar1[0xc] = param_1;
  return;
}

} /* extern "C" */
