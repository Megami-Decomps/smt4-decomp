/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f7e4c` (_code @ 0x2f7e4c, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ed912(...);

extern unsigned char DAT_0055ab0c; /* 0x55ab0c */

/* Supplied declaration required: FUN_002ed912. */


void FUN_002f7e4c(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6,unsigned int param_7,unsigned int param_8,
                 unsigned int param_9,unsigned int param_10)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = param_5;
  param_1[5] = param_6;
  param_1[6] = param_7;
  *param_1 = (unsigned int)&DAT_0055ab0c;
  param_1[7] = param_8;
  param_1[8] = param_9;
  param_1[10] = 0;
  param_1[9] = param_10;
  temp_v0 = FUN_002ed912(param_1 + 0xb);
  temp_v0 = FUN_002ed912(temp_v0 + 0xc);
  *(unsigned char *)(temp_v0 + 0xc) = 0;
  return;
}

} /* extern "C" */
