/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00239b54` (_code @ 0x239b54, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned int *DAT_00472a3c; /* 0x472a3c */


void FUN_00239b54(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  if (DAT_00472a3c != (unsigned int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00239b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(romwright_code **)*DAT_00472a3c)(DAT_00472a3c,param_1,param_2);
    return;
  }
  return;
}
