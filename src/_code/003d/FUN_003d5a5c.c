/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d5a5c` (_code @ 0x3d5a5c, 0x2a4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

/* Supplied declaration required: FUN_00249f34. */
/* Supplied declaration required: FUN_0024df00. */
/* Supplied declaration required: FUN_00298fec. */
/* Supplied declaration required: FUN_002c1740. */
/* Supplied declaration required: FUN_002c1ffc. */
/* Supplied declaration required: FUN_002c20a8. */
/* Supplied declaration required: FUN_002c2210. */
/* Supplied declaration required: FUN_003d8704. */


void FUN_003d5a5c(unsigned int *param_1)

{
/* irregular: 8 native warning(s); review required */
  float temp_v0;
  unsigned int temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  
  FUN_003d8704(param_1,0);
  temp_v1 = 0;
  param_1[0x1e5] = 0;
  param_1[0x1eb] = 0;
  param_1[500] = 0;
  param_1[0x1f1] = 0;
  param_1[0x1fc] = 0;
  param_1[0x1fb] = 0;
  param_1[0x1fa] = 0;
  param_1[0x208] = 0;
  param_1[0x207] = 0;
  param_1[0x206] = 0;
  param_1[0x1e9] = 0;
  param_1[0x1ef] = 0;
  param_1[0x1f8] = 0;
  param_1[0x204] = 0;
  param_1[0x210] = 0;
  temp_v5 = 0;
  temp_v6 = 0x3f800000;
  temp_v7 = 0;
  temp_v0 = (float)param_1[0x166];
  temp_v2 = (float)param_1[0x15a] + (float)param_1[0x160] * temp_v0;
  temp_v3 = (float)param_1[0x15b] + (float)param_1[0x161] * temp_v0;
  temp_v4 = (float)param_1[0x15c] + (float)param_1[0x162] * temp_v0;
  param_1[0x169] = 0;
  param_1[0x158] = 0x40a00000;
  param_1[0x159] = 0x3f4ccccd;
  FUN_002c2210(param_1 + 0x16,1);
  FUN_002c20a8(param_1 + 0x16,param_1 + 0x15a,&temp_v2,&temp_v5);
  FUN_002c1ffc(param_1 + 0x16,1);
  FUN_00298fec(param_1 + 0x16);
  FUN_002c1740(param_1 + 0x16);
  param_1[0x192] = temp_v1;
  param_1[0x191] = temp_v1;
  param_1[400] = temp_v1;
  param_1[0x1a4] = temp_v1;
  param_1[0x1a3] = temp_v1;
  param_1[0x1a2] = temp_v1;
  param_1[0x18d] = param_1[0x18d] | 0x80;
  param_1[0x19c] = temp_v1;
  param_1[0x1a6] = temp_v1;
  param_1[0x1aa] = temp_v1;
  param_1[0x1ae] = temp_v1;
  param_1[0x169] = temp_v1;
  param_1[2] = temp_v1;
  param_1[1] = temp_v1;
  *param_1 = temp_v1;
  param_1[0x198] = temp_v1;
  param_1[0x197] = temp_v1;
  param_1[0x196] = temp_v1;
  param_1[0x1b5] = temp_v1;
  param_1[0x1b4] = temp_v1;
  param_1[0x1b3] = temp_v1;
  param_1[0x1bb] = temp_v1;
  param_1[0x1ba] = temp_v1;
  param_1[0x1b9] = temp_v1;
  param_1[5] = temp_v1;
  param_1[4] = temp_v1;
  param_1[3] = temp_v1;
  param_1[8] = temp_v1;
  param_1[7] = temp_v1;
  param_1[6] = temp_v1;
  param_1[9] = 0;
  param_1[0x1d0] = temp_v1;
  param_1[0x1cf] = temp_v1;
  param_1[0x1ce] = temp_v1;
  param_1[0x1db] = temp_v1;
  param_1[0x1da] = temp_v1;
  param_1[0x1d9] = temp_v1;
  param_1[0x1de] = temp_v1;
  param_1[0x1dd] = temp_v1;
  param_1[0x1dc] = temp_v1;
  param_1[0x1e1] = temp_v1;
  param_1[0x1e0] = temp_v1;
  param_1[0x1df] = temp_v1;
  param_1[0x1e4] = temp_v1;
  param_1[0x1e3] = temp_v1;
  param_1[0x1e2] = temp_v1;
  param_1[0x1a8] = 0;
  param_1[0x1ac] = 0;
  param_1[0x1b0] = 0;
  param_1[0x1b7] = 0;
  temp_v1 = 0xffffffff;
  param_1[0x1bd] = 0;
  param_1[0x1d7] = 0xffffffff;
  param_1[0x1ca] = 0;
  param_1[0x1d8] = 0xffffffff;
  FUN_00249f34();
  param_1[0xb] = temp_v1;
  FUN_0024df00();
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[10] = 1;
  param_1[0x15] = 0;
  return;
}
