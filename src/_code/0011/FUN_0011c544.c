/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011c544` (_code @ 0x11c544, 0x88 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00128708. */
/* Supplied declaration required: FUN_001287b0. */
/* Supplied declaration required: FUN_00128bcc. */


unsigned int * FUN_0011c544(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0 [8];
  unsigned char temp_v1 [4];
  
  *param_1 = param_2;
  *(unsigned short *)(param_1 + 1) = 0;
  *(unsigned short *)((int)param_1 + 6) = 0x80;
  *(unsigned char *)(param_1 + 0x12) = 0;
  *(unsigned char *)((int)param_1 + 0x49) = 0;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  FUN_00128bcc();
  *(unsigned short *)(param_1 + 2) = 0;
  *(unsigned short *)((int)param_1 + 10) = 0;
  *(unsigned short *)(param_1 + 3) = 0;
  *(unsigned short *)((int)param_1 + 0xe) = 0;
  *(unsigned short *)(param_1 + 4) = 0;
  *(unsigned short *)((int)param_1 + 0x12) = 0;
  FUN_00128708(param_1);
  *(unsigned char *)(param_1 + 0x12) = 0;
  *(unsigned char *)((int)param_1 + 0x49) = 0;
  FUN_001287b0(param_1,temp_v0,temp_v1,1);
  return param_1;
}
