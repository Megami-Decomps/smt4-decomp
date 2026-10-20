/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fa434` (_code @ 0x2fa434, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9520(...);

extern unsigned char DAT_00558b2c; /* 0x558b2c */

/* Supplied declaration required: FUN_002e9520. */


void FUN_002fa434(unsigned int *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_00558b2c;
  temp_v0 = FUN_002e9520(param_1 + 1,param_2 + 0xe0);
  *(unsigned short *)(temp_v0 + 8) = *(unsigned short *)(param_2 + 0xe8);
  temp_v0 = FUN_002e9520(temp_v0 + 0xc,param_2 + 0xec);
  *(unsigned short *)(temp_v0 + 8) = *(unsigned short *)(param_2 + 0xf4);
  *(unsigned char *)(temp_v0 + 10) = *(unsigned char *)(param_2 + 0xf6);
  *(unsigned char *)(temp_v0 + 0xb) = *(unsigned char *)(param_2 + 0xf7);
  *(unsigned int *)(temp_v0 + 0xc) = *(unsigned int *)(param_2 + 0xf8);
  *(unsigned char *)(temp_v0 + 0x10) = *(unsigned char *)(param_2 + 0xfc);
  return;
}

} /* extern "C" */
