/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041f5bc` (_code @ 0x41f5bc, 0x11c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00588e28; /* 0x588e28 */

/* Supplied declaration required: FUN_00184758. */
/* Supplied declaration required: FUN_00184c00. */
/* Supplied declaration required: FUN_00420a2c. */


void FUN_0041f5bc(int param_1)

{
/* irregular: 3 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  
  FUN_00184758(param_1 + 0x474,5,0);
  FUN_00184c00(param_1 + 0x474,0);
  temp_v1 = 0;
  if (temp_v1 < *(int *)(param_1 + 0x18)) {
    do {
      temp_v2 = param_1 + temp_v1 * 0x8c;
      FUN_00184758(temp_v2 + 0x500,5,0);
      FUN_00184c00(temp_v2 + 0x500,0);
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < *(int *)(param_1 + 0x18));
  }
  *(unsigned int *)(param_1 + 0x6ec) = 0;
  *(unsigned int *)(param_1 + 0x6f0) = 0;
  *(unsigned int *)(param_1 + 0x6f4) = 0;
  *(unsigned int *)(param_1 + 0x620) = 0;
  *(unsigned char *)(param_1 + 0xd) = *(unsigned char *)(param_1 + 7);
  *(unsigned char *)(param_1 + 7) = 0xf;
  *(unsigned int *)(param_1 + 8) = 0;
  FUN_00420a2c(param_1);
  if (*(char *)(param_1 + *(int *)(param_1 + 0x18) * 0x8c + 0x4fe) != '\0') {
    temp_v0 = *(char *)(param_1 + 0xc);
    *(unsigned char *)(param_1 + 0xd) = *(unsigned char *)(param_1 + 7);
    *(char *)(param_1 + 7) = temp_v0;
    *(unsigned int *)(param_1 + 8) = 0;
    *(unsigned char *)(param_1 + 0xc) = 0;
    if (temp_v0 == '\x16') {
      DAT_00588e28 = *(unsigned int *)(param_1 + 0x2f8);
      *(unsigned char *)(param_1 + 4) = 1;
    }
  }
  return;
}
