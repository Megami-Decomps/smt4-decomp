/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014e220` (_code @ 0x14e220, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6354(unsigned int *, int);

/* Supplied declaration required: FUN_002e6354. */


void FUN_0014e220(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 int param_5,unsigned short param_6)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  unsigned int in_s0;
  
  FUN_002e6354(param_1,0x8c);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[8] = in_s0;
  *(unsigned short *)(param_1 + 0xe) = param_6;
  param_1[9] = 0x3f800000;
  param_1[10] = 0x3f800000;
  param_1[0xb] = 0x3f800000;
  param_1[0x12] = param_5;
  param_1[0x13] = *(unsigned int *)(param_5 + 0xc);
  param_1[0x16] = *(unsigned int *)(param_5 + 0x10);
  param_1[0x19] = *(unsigned int *)(param_5 + 0x14);
  param_1[0x1c] = *(unsigned int *)(param_5 + 0x18);
  param_1[0x1e] = *(unsigned int *)(param_5 + 0x1c);
  *(unsigned char *)((int)param_1 + 0x86) = 1;
  *(unsigned char *)((int)param_1 + 0x87) = 1;
  *(unsigned char *)(param_1 + 0x22) = 1;
  *(unsigned char *)((int)param_1 + 0x89) = 1;
  *(unsigned char *)((int)param_1 + 0x8a) = 1;
  return;
}

} /* extern "C" */
