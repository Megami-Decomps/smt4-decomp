/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e264c` (_code @ 0x2e264c, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0037b5e0(int, int);

extern unsigned char DAT_0057f110; /* 0x57f110 */

/* Supplied declaration required: FUN_0037b5e0. */


void FUN_002e264c(int param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  if ((*(int *)((unsigned char *)&DAT_0057f110 + 0x4)) != 0) {
    param_3 = *(int *)((*(int *)((unsigned char *)&DAT_0057f110 + 0x4)) + 0x174);
  }
  if (((*(int *)((unsigned char *)&DAT_0057f110 + 0x4)) != 0 && param_3 != 0) && (param_1 != 0)) {
    FUN_0037b5e0(param_3,param_1);
    return;
  }
  return;
}

} /* extern "C" */
