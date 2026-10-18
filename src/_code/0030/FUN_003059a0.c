/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003059a0` (_code @ 0x3059a0, 0xcc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0021a610. */
/* Supplied declaration required: FUN_0024f800. */
/* Supplied declaration required: FUN_0024f9e8. */
/* Supplied declaration required: FUN_0024fa94. */
/* Supplied declaration required: FUN_0024faa4. */
/* Supplied declaration required: FUN_00267fb0. */


void FUN_003059a0(int *param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4 [16];
  unsigned char temp_v5 [24];
  
  FUN_0021a610();
  if ((*param_1 != 0) && (temp_v0 = param_1[0xc], *(int *)(temp_v0 + 0x10) >= 2)) {
    temp_v2 = param_1[10];
    temp_v3 = *(int *)(temp_v0 + 0x20);
    if ((*(unsigned int *)(temp_v0 + 0xc) & 1) != 0) {
      FUN_0024faa4(temp_v0,temp_v5);
      FUN_0024fa94(param_1[0xc],temp_v4);
      FUN_0024f9e8(*(unsigned int *)(temp_v2 + 0x10),temp_v4,temp_v5);
      FUN_0024f9e8(*(unsigned int *)(temp_v2 + 0x14),temp_v4,temp_v5);
    }
    if (param_1[0xb] != 0) {
      FUN_00267fb0();
    }
    temp_v1 = *(unsigned int *)(temp_v3 + 0x54);
    FUN_0024f800(*(unsigned int *)(temp_v2 + 0x10),temp_v1);
    FUN_0024f800(*(unsigned int *)(temp_v2 + 0x14),temp_v1);
  }
  return;
}
