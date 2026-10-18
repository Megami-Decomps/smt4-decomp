/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037f480` (_code @ 0x37f480, 0xbc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0037e8cc. */


void FUN_0037f480(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  FUN_0037e8cc();
  *(unsigned char *)(param_1 + 0xd) = 0;
  *(unsigned char *)(param_1 + 0xe) = 0;
  *(unsigned char *)(param_1 + 0x5c) = 0;
  *(unsigned char *)(param_1 + 0xc) = 0;
  *(unsigned int *)(param_1 + 100) = 0x3f800000;
  *(unsigned int *)(param_1 + 0x68) = 0;
  *(unsigned int *)(param_1 + 0x6c) = 0;
  *(unsigned int *)(param_1 + 0x70) = 0;
  *(unsigned int *)(param_1 + 0x60) = 0x3f800000;
  *(unsigned int *)(param_1 + 0xec) = 0;
  *(unsigned int *)(param_1 + 0x84) = 0;
  *(unsigned int *)(param_1 + 0x88) = 0;
  *(unsigned short *)(param_1 + 0x78) = 0x78;
  *(unsigned char *)(param_1 + 0x76) = 0x30;
  *(unsigned char *)(param_1 + 0x74) = 0x7f;
  *(unsigned char *)(param_1 + 0x75) = 0x40;
  temp_v0 = 0;
  *(unsigned int *)(param_1 + 0x7c) = 0;
  do {
    temp_v2 = param_1 + temp_v0 * 2;
    temp_v0 = temp_v0 + 2;
    *(unsigned short *)(temp_v2 + 0xcc) = 0xffff;
    *(unsigned short *)(temp_v2 + 0xce) = 0xffff;
  } while (temp_v0 < 0x10);
  temp_v2 = 0;
  temp_v0 = 0;
  do {
    temp_v1 = temp_v2 + 1;
    temp_v0 = temp_v0 + 2;
    *(unsigned int *)(param_1 + temp_v2 * 4 + 0x8c) = 0;
    temp_v2 = temp_v2 + 2;
    *(unsigned int *)(param_1 + temp_v1 * 4 + 0x8c) = 0;
  } while (temp_v0 < 0x10);
  return;
}
