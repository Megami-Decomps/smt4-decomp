/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001062f6` (_code @ 0x1062f6, 0x36 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e74bc(unsigned int);
int strAssign(unsigned int, int, int, unsigned int);

/* Supplied declaration required: FUN_002e74bc. */
/* Supplied declaration required: strAssign. */


void FUN_001062f6(unsigned int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  
  temp_v1 = *(int *)(param_2 + 8);
  FUN_002e74bc(*(unsigned int *)(param_3 + 0xd8));
  temp_v0 = *(int *)(temp_v1 + 0x10) - 0x2cU;
  if (temp_v0 != 0) {
    strAssign(*(unsigned int *)(param_3 + 0xd8),
                 *(int *)(temp_v1 + 0xc) + *(int *)(temp_v1 + 0x18) + *(int *)(param_2 + 0xc),temp_v0,
                 0xffffffff);
  }
  return;
}

} /* extern "C" */
