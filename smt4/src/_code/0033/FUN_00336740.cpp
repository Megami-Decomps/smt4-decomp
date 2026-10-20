/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00336740` (_code @ 0x336740, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00254ec8(int);

/* Supplied declaration required: FUN_00254ec8. */


int FUN_00336740(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned char temp_v2;
  
  puVar3 = (unsigned int *)(param_1 + 0x44a0);
  if (((*(unsigned int *)(param_1 + 0x44a8) & 0x10) == 0) && ((*puVar3 & 0x1000000) == 0)) {
    FUN_00254ec8(param_1);
    *puVar3 = *puVar3 | 0x1000000;
  }
  temp_v0 = (int)*(short *)(param_1 + 0x1fc8);
  if ((*puVar3 & 0x1004) == 0) {
    temp_v1 = param_1 + 0x4900;
    temp_v2 = *(short *)(param_1 + 0x496c) == 0;
    if (temp_v2) {
      temp_v1 = (unsigned int)*(unsigned short *)(param_1 + 0x496e);
    }
    if (temp_v2 && temp_v1 == 0) {
      temp_v0 = -1;
    }
  }
  return temp_v0;
}

} /* extern "C" */
