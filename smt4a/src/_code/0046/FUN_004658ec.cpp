/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004658ec` (_code @ 0x4658ec, 0xd4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00463230(void);

/* Supplied declaration required: FUN_00463230. */


void FUN_004658ec(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  FUN_00463230();
  *(unsigned char *)(param_1 + 0xd) = 0;
  *(unsigned char *)(param_1 + 0xe) = 0;
  *(unsigned char *)(param_1 + 0x5c) = 0;
  *(unsigned char *)(param_1 + 0xc) = 0;
  *(unsigned int *)(param_1 + 100) = 0x3f800000;
  *(unsigned int *)(param_1 + 0x68) = 0;
  *(unsigned int *)(param_1 + 0x6c) = 0;
  *(unsigned int *)(param_1 + 0x70) = 0;
  *(unsigned int *)(param_1 + 0x60) = 0x3f800000;
  *(unsigned int *)(param_1 + 0xf0) = 0;
  *(unsigned int *)(param_1 + 0x88) = 0;
  *(unsigned int *)(param_1 + 0x8c) = 0;
  *(unsigned short *)(param_1 + 0x76) = 0x78;
  *(unsigned char *)(param_1 + 0x75) = 0x30;
  *(unsigned char *)(param_1 + 0x78) = 0x7f;
  *(unsigned char *)(param_1 + 0x79) = 0x7f;
  *(unsigned short *)(param_1 + 0x7a) = 0;
  *(unsigned short *)(param_1 + 0x7c) = 0;
  *(unsigned char *)(param_1 + 0x74) = 0x40;
  temp_v0 = 0;
  *(unsigned int *)(param_1 + 0x80) = 0;
  do {
    temp_v2 = param_1 + temp_v0 * 2;
    temp_v0 = temp_v0 + 2;
    *(unsigned short *)(temp_v2 + 0xd0) = 0xffff;
    *(unsigned short *)(temp_v2 + 0xd2) = 0xffff;
  } while (temp_v0 < 0x10);
  temp_v2 = 0;
  temp_v0 = 0;
  do {
    temp_v1 = temp_v2 + 1;
    temp_v0 = temp_v0 + 2;
    *(unsigned int *)(param_1 + temp_v2 * 4 + 0x90) = 0;
    temp_v2 = temp_v2 + 2;
    *(unsigned int *)(param_1 + temp_v1 * 4 + 0x90) = 0;
  } while (temp_v0 < 0x10);
  *(unsigned char *)(param_1 + 0x166) = 0;
  *(unsigned char *)(param_1 + 0x165) = 1;
  return;
}

} /* extern "C" */
