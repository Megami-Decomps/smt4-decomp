/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030a84c` (_code @ 0x30a84c, 0xc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bd420(int, int, int);
int FUN_002c3940(int, int);

/* Supplied declaration required: FUN_002bd420. */
/* Supplied declaration required: FUN_002c3940. */


void FUN_0030a84c(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  if (param_1 == 0 || param_2 == 0) {
    return;
  }
  FUN_002c3940(param_2,0x8c);
  FUN_002bd420(param_1,param_2,0xe);
  FUN_002bd420(param_1 + 0xe,param_2 + 0x4c,0x12);
  *(unsigned char *)(param_2 + 0x76) = *(unsigned char *)(param_1 + 0x36);
  return;
}

} /* extern "C" */
