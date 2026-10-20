/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039bb48` (_code @ 0x39bb48, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e59f8(int, int, int);
int rt_aeabi_memclr(int, int);

/* Supplied declaration required: FUN_002e59f8. */
/* Supplied declaration required: rt_aeabi_memclr. */


void FUN_0039bb48(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  if (param_1 == 0 || param_2 == 0) {
    return;
  }
  rt_aeabi_memclr(param_2,100);
  FUN_002e59f8(param_1,param_2,0xe);
  FUN_002e59f8(param_1 + 0xe,param_2 + 0x4c,0x12);
  *(unsigned short *)(param_2 + 0x62) = *(unsigned short *)(param_1 + 0x36);
  return;
}

} /* extern "C" */
