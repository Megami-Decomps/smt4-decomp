/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002493a4` (_code @ 0x2493a4, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002570a8(void);
int FUN_002de270(unsigned int, int);

/* Supplied declaration required: FUN_002570a8. */
/* Supplied declaration required: FUN_002de270. */


void FUN_002493a4(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_002570a8();
  }
  switch(param_3) {
  default:
    return;
  case 1:
  case 4:
  case 9:
    param_2 = param_2 & 0xffff;
    FUN_002de270(param_2,0x20080027);
    *(unsigned int *)(param_1 + 0x50) = param_2;
    return;
  case 2:
    param_2 = param_2 & 0xffff;
    FUN_002de270(param_2,0x200000a7);
    *(unsigned int *)(param_1 + 0x50) = param_2;
    return;
  }
}

} /* extern "C" */
