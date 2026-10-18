/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0050c578` (_code @ 0x50c578, 0x1c4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001931d8. */


void FUN_0050c578(int *param_1,unsigned int *param_2,unsigned int *param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  switch(*(unsigned int *)(*param_1 + 0x14)) {
  case 0:
    temp_v0 = *param_3;
    temp_v1 = param_3[1];
    temp_v2 = param_3[2];
    param_2[3] = param_3[3];
    *param_2 = temp_v0;
    param_2[1] = temp_v1;
    param_2[2] = temp_v2;
    temp_v0 = FUN_001931d8(param_2);
    param_2[0x2c] = temp_v0;
    return;
  case 1:
    temp_v0 = param_3[1];
    temp_v1 = param_3[2];
    param_2[4] = *param_3;
    param_2[5] = temp_v0;
    param_2[6] = temp_v1;
    temp_v0 = FUN_001931d8();
    param_2[0x2d] = temp_v0;
    return;
  case 2:
    temp_v0 = *param_3;
    temp_v1 = param_3[1];
    temp_v2 = param_3[2];
    param_2[0xb] = param_3[3];
    param_2[8] = temp_v0;
    param_2[9] = temp_v1;
    param_2[10] = temp_v2;
    temp_v0 = FUN_001931d8(param_2 + 8);
    param_2[0x2e] = temp_v0;
    return;
  case 3:
    temp_v0 = *param_3;
    temp_v1 = param_3[1];
    temp_v2 = param_3[2];
    param_2[0xf] = param_3[3];
    param_2[0xc] = temp_v0;
    param_2[0xd] = temp_v1;
    param_2[0xe] = temp_v2;
    temp_v0 = FUN_001931d8(param_2 + 0xc);
    param_2[0x2f] = temp_v0;
    return;
  case 4:
    temp_v0 = *param_3;
    temp_v1 = param_3[1];
    temp_v2 = param_3[2];
    param_2[0x13] = param_3[3];
    param_2[0x10] = temp_v0;
    param_2[0x11] = temp_v1;
    param_2[0x12] = temp_v2;
    temp_v0 = FUN_001931d8(param_2 + 0x10);
    param_2[0x30] = temp_v0;
    return;
  case 5:
    temp_v0 = *param_3;
    temp_v1 = param_3[1];
    temp_v2 = param_3[2];
    param_2[0x17] = param_3[3];
    param_2[0x14] = temp_v0;
    param_2[0x15] = temp_v1;
    param_2[0x16] = temp_v2;
    temp_v0 = FUN_001931d8(param_2 + 0x14);
    param_2[0x31] = temp_v0;
    return;
  case 6:
    temp_v0 = *param_3;
    temp_v1 = param_3[1];
    temp_v2 = param_3[2];
    param_2[0x1b] = param_3[3];
    param_2[0x18] = temp_v0;
    param_2[0x19] = temp_v1;
    param_2[0x1a] = temp_v2;
    temp_v0 = FUN_001931d8(param_2 + 0x18);
    param_2[0x32] = temp_v0;
    return;
  case 7:
    temp_v0 = *param_3;
    temp_v1 = param_3[1];
    temp_v2 = param_3[2];
    param_2[0x1f] = param_3[3];
    param_2[0x1c] = temp_v0;
    param_2[0x1d] = temp_v1;
    param_2[0x1e] = temp_v2;
    temp_v0 = FUN_001931d8(param_2 + 0x1c);
    param_2[0x33] = temp_v0;
    return;
  case 8:
    temp_v0 = *param_3;
    temp_v1 = param_3[1];
    temp_v2 = param_3[2];
    param_2[0x23] = param_3[3];
    param_2[0x20] = temp_v0;
    param_2[0x21] = temp_v1;
    param_2[0x22] = temp_v2;
    temp_v0 = FUN_001931d8(param_2 + 0x20);
    param_2[0x34] = temp_v0;
    return;
  case 9:
    temp_v0 = *param_3;
    temp_v1 = param_3[1];
    temp_v2 = param_3[2];
    param_2[0x27] = param_3[3];
    param_2[0x24] = temp_v0;
    param_2[0x25] = temp_v1;
    param_2[0x26] = temp_v2;
    temp_v0 = FUN_001931d8(param_2 + 0x24);
    param_2[0x35] = temp_v0;
    return;
  case 10:
    temp_v0 = *param_3;
    temp_v1 = param_3[1];
    temp_v2 = param_3[2];
    param_2[0x2b] = param_3[3];
    param_2[0x28] = temp_v0;
    param_2[0x29] = temp_v1;
    param_2[0x2a] = temp_v2;
    temp_v0 = FUN_001931d8(param_2 + 0x28);
    param_2[0x36] = temp_v0;
    return;
  default:
    return;
  }
}
