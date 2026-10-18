/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002693e4` (_code @ 0x2693e4, 0xf4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_003572d0; /* 0x3572d0 */
extern unsigned char LAB_003572dc; /* 0x3572dc */

/* Supplied declaration required: FUN_0023d304. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_002c5d5c. */


void FUN_002693e4(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned long long temp_v5;
  
  param_1 = param_1 + 0x1ac;
  FUN_002c5d5c(param_1,&LAB_003572dc,0x70,0xc);
  param_1 = param_1 + 0x540;
  FUN_002c5d5c(param_1,&LAB_003572d0,0x14,0xc);
  temp_v3 = param_1 - 0x6a0;
  *(unsigned int *)(param_1 - 0x6a0) = 0;
  FUN_002c4938(param_1 - 0x69c,0x150);
  temp_v5 = 0;
  temp_v1 = 0;
  do {
    *(unsigned char *)(temp_v3 + temp_v1 + 0x154) = 0;
    FUN_0023d304(temp_v3 + temp_v1 * 0x70 + 0x160);
    temp_v2 = temp_v1 + 1;
    temp_v0 = temp_v3 + temp_v1 * 0x14;
    *(unsigned char *)(temp_v0 + 0x6a0) = 0;
    temp_v4 = (unsigned int)temp_v5;
    *(unsigned int *)(temp_v0 + 0x6a4) = temp_v4;
    *(unsigned int *)(temp_v0 + 0x6a8) = temp_v4;
    *(unsigned int *)(temp_v0 + 0x6ac) = temp_v4;
    *(unsigned int *)(temp_v0 + 0x6b0) = temp_v4;
    temp_v1 = temp_v2;
  } while (temp_v2 < 0xc);
  *(unsigned int *)(param_1 + 0xf0) = 0;
  *(unsigned int *)(param_1 + 0xf4) = 0;
  *(unsigned char *)(param_1 + 0xf8) = 0;
  *(unsigned char *)(param_1 - 0x6ec) = 0;
  *(unsigned int *)(param_1 - 0x6e8) = 0;
  *(unsigned char *)(param_1 - 0x6e4) = 0xff;
  *(unsigned int *)(param_1 - 0x6e0) = 0;
  *(unsigned int *)(param_1 - 0x6d8) = 0;
  *(unsigned int *)(param_1 - 0x6d4) = 0;
  *(unsigned int *)(param_1 - 0x6cc) = 0x2010000;
  *(unsigned int *)(param_1 - 0x6c8) = 0;
  *(unsigned int *)(param_1 - 0x6c4) = 0;
  *(unsigned int *)(param_1 - 0x6bc) = 0;
  *(unsigned int *)(param_1 - 0x6b8) = 0;
  *(unsigned int *)(param_1 - 0x6b4) = 0;
  *(unsigned int *)(param_1 - 0x6b0) = 0;
  *(unsigned int *)(param_1 - 0x6ac) = 0;
  *(unsigned int *)(param_1 - 0x6a8) = 0;
  *(unsigned int *)(param_1 - 0x6a4) = 0;
  return;
}
