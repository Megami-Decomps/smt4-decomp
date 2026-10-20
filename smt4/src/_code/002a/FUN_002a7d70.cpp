/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a7d70` (_code @ 0x2a7d70, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c424c(unsigned int, unsigned int, unsigned int);

extern unsigned int DAT_004765ec; /* 0x4765ec */

/* Supplied declaration required: FUN_002c424c. */


void FUN_002a7d70(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  if ((*(unsigned int *)(param_1 + 0x24) & 2) != 0) {
    FUN_002c424c(param_2,param_3,DAT_004765ec);
    return;
  }
  return;
}

} /* extern "C" */
