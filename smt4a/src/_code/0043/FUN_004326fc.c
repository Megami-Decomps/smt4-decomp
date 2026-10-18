/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004326fc` (_code @ 0x4326fc, 0xfc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001038b0. */
/* Supplied declaration required: FUN_0010ccc4. */


int FUN_004326fc(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  *(unsigned int *)(param_1 + 4) = *(unsigned int *)(param_2 + 4);
  *(unsigned char *)(param_1 + 8) = *(unsigned char *)(param_2 + 8);
  *(unsigned int *)(param_1 + 0xc) = *(unsigned int *)(param_2 + 0xc);
  *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_2 + 0x10);
  *(unsigned int *)(param_1 + 0x14) = *(unsigned int *)(param_2 + 0x14);
  FUN_0010ccc4(param_1 + 0x18,param_2 + 0x18);
  *(unsigned int *)(param_1 + 0x68) = *(unsigned int *)(param_2 + 0x68);
  *(unsigned int *)(param_1 + 0x6c) = *(unsigned int *)(param_2 + 0x6c);
  *(unsigned char *)(param_1 + 0x70) = *(unsigned char *)(param_2 + 0x70);
  *(unsigned int *)(param_1 + 0x74) = *(unsigned int *)(param_2 + 0x74);
  *(unsigned int *)(param_1 + 0x78) = *(unsigned int *)(param_2 + 0x78);
  *(unsigned int *)(param_1 + 0x7c) = *(unsigned int *)(param_2 + 0x7c);
  *(unsigned int *)(param_1 + 0x80) = *(unsigned int *)(param_2 + 0x80);
  *(unsigned int *)(param_1 + 0x84) = *(unsigned int *)(param_2 + 0x84);
  *(unsigned int *)(param_1 + 0x88) = *(unsigned int *)(param_2 + 0x88);
  *(unsigned int *)(param_1 + 0x8c) = *(unsigned int *)(param_2 + 0x8c);
  *(unsigned int *)(param_1 + 0x90) = *(unsigned int *)(param_2 + 0x90);
  *(unsigned int *)(param_1 + 0x94) = *(unsigned int *)(param_2 + 0x94);
  *(unsigned int *)(param_1 + 0x98) = *(unsigned int *)(param_2 + 0x98);
  *(unsigned char *)(param_1 + 0x9c) = *(unsigned char *)(param_2 + 0x9c);
  *(unsigned char *)(param_1 + 0x9d) = *(unsigned char *)(param_2 + 0x9d);
  *(unsigned char *)(param_1 + 0x9e) = *(unsigned char *)(param_2 + 0x9e);
  *(unsigned char *)(param_1 + 0x9f) = *(unsigned char *)(param_2 + 0x9f);
  *(unsigned char *)(param_1 + 0xa0) = *(unsigned char *)(param_2 + 0xa0);
  *(unsigned char *)(param_1 + 0xa1) = *(unsigned char *)(param_2 + 0xa1);
  *(unsigned int *)(param_1 + 0xa4) = *(unsigned int *)(param_2 + 0xa4);
  *(unsigned char *)(param_1 + 0xa8) = *(unsigned char *)(param_2 + 0xa8);
  FUN_001038b0(param_1 + 0xac,param_2 + 0xac);
  return param_1;
}
