/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036fb88` (_code @ 0x36fb88, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002bfedc. */


unsigned int * FUN_0036fb88(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  temp_v0 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = temp_v0;
  param_1[6] = param_2[6];
  temp_v0 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = temp_v0;
  *(unsigned char *)(param_1 + 9) = *(unsigned char *)(param_2 + 9);
  *(unsigned char *)((int)param_1 + 0x25) = *(unsigned char *)((int)param_2 + 0x25);
  *(unsigned short *)((int)param_1 + 0x26) = *(unsigned short *)((int)param_2 + 0x26);
  FUN_002bfedc(param_1 + 10,param_2 + 10);
  return param_1;
}
