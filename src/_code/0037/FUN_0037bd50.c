/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037bd50` (_code @ 0x37bd50, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_003e6954. */
/* Supplied declaration required: FUN_003e69c0. */


int * FUN_0037bd50(int *param_1,int *param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  temp_v0 = 0x51455343;
  if (*param_2 == 0x51455343) {
    temp_v0 = param_2[2];
  }
  if (*param_2 == 0x51455343 && temp_v0 == 0x1000000) {
    *param_1 = (int)param_2;
    FUN_003e6954();
    param_1[1] = (int)(param_2 + 2);
    temp_v0 = *param_1;
    FUN_003e69c0();
    param_1[2] = temp_v0 + 8;
  }
  return param_1;
}
