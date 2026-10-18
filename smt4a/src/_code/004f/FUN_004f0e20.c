/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f0e20` (_code @ 0x4f0e20, 0x2e8 bytes) from smt4a.cxi.
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

extern int DAT_0056fcc0; /* 0x56fcc0 */
extern int DAT_00589144; /* 0x589144 */

/* Supplied declaration required: FUN_0013c884. */
/* Supplied declaration required: FUN_00140e38. */
/* Supplied declaration required: FUN_0014f0dc. */
/* Supplied declaration required: FUN_001523b8. */
/* Supplied declaration required: FUN_00203a6c. */
/* Supplied declaration required: FUN_00208b84. */
/* Supplied declaration required: FUN_00348c50. */
/* Supplied declaration required: FUN_0036b824. */
/* Supplied declaration required: FUN_004f3fe8. */


void FUN_004f0e20(unsigned int *param_1)

{
/* irregular: 9 native warning(s); review required */
  unsigned int temp_v0;
  float temp_v1;
  unsigned int temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  
  FUN_004f3fe8(param_1,0);
  temp_v2 = 0;
  param_1[0x200] = 0;
  param_1[0x206] = 0;
  param_1[0x20f] = 0;
  param_1[0x20c] = 0;
  param_1[0x217] = 0;
  param_1[0x216] = 0;
  param_1[0x215] = 0;
  param_1[0x223] = 0;
  param_1[0x222] = 0;
  param_1[0x221] = 0;
  param_1[0x204] = 0;
  param_1[0x20a] = 0;
  param_1[0x213] = 0;
  param_1[0x21f] = 0;
  param_1[0x22b] = 0;
  temp_v6 = 0;
  temp_v7 = 0x3f800000;
  temp_v8 = 0;
  temp_v1 = (float)param_1[0x16c];
  temp_v3 = (float)param_1[0x160] + (float)param_1[0x166] * temp_v1;
  temp_v4 = (float)param_1[0x161] + (float)param_1[0x167] * temp_v1;
  temp_v5 = (float)param_1[0x162] + (float)param_1[0x168] * temp_v1;
  param_1[0x16f] = 0;
  param_1[0x15e] = 0x40a00000;
  param_1[0x15f] = 0x3f4ccccd;
  FUN_0013c884(param_1 + 0x1b,1);
  FUN_0014f0dc(param_1 + 0x1b,param_1 + 0x160,&temp_v3,&temp_v6);
  FUN_001523b8(param_1 + 0x1b,1);
  FUN_0036b824(param_1 + 0x1b);
  FUN_00140e38(param_1 + 0x1b);
  *(unsigned int **)(DAT_0056fcc0 + 0xc) = param_1 + 0x1b;
  param_1[0x1ad] = temp_v2;
  param_1[0x1ac] = temp_v2;
  param_1[0x1ab] = temp_v2;
  param_1[0x1bf] = temp_v2;
  param_1[0x1be] = temp_v2;
  param_1[0x1bd] = temp_v2;
  param_1[0x193] = param_1[0x193] | 0x80;
  param_1[0x1b7] = temp_v2;
  param_1[0x1c1] = temp_v2;
  param_1[0x1c5] = temp_v2;
  param_1[0x1c9] = temp_v2;
  param_1[0x16f] = temp_v2;
  param_1[2] = temp_v2;
  param_1[1] = temp_v2;
  *param_1 = temp_v2;
  param_1[0x1b3] = temp_v2;
  param_1[0x1b2] = temp_v2;
  param_1[0x1b1] = temp_v2;
  param_1[0x1d0] = temp_v2;
  param_1[0x1cf] = temp_v2;
  param_1[0x1ce] = temp_v2;
  param_1[0x1d6] = temp_v2;
  param_1[0x1d5] = temp_v2;
  param_1[0x1d4] = temp_v2;
  param_1[9] = temp_v2;
  param_1[8] = temp_v2;
  param_1[7] = temp_v2;
  param_1[0xc] = temp_v2;
  param_1[0xb] = temp_v2;
  param_1[10] = temp_v2;
  param_1[0xd] = 0;
  param_1[0x1eb] = temp_v2;
  param_1[0x1ea] = temp_v2;
  param_1[0x1e9] = temp_v2;
  param_1[0x1f6] = temp_v2;
  param_1[0x1f5] = temp_v2;
  param_1[500] = temp_v2;
  param_1[0x1f9] = temp_v2;
  param_1[0x1f8] = temp_v2;
  param_1[0x1f7] = temp_v2;
  param_1[0x1fc] = temp_v2;
  param_1[0x1fb] = temp_v2;
  param_1[0x1fa] = temp_v2;
  param_1[0x1ff] = temp_v2;
  param_1[0x1fe] = temp_v2;
  param_1[0x1fd] = temp_v2;
  param_1[0x1c3] = 0;
  param_1[0x1c7] = 0;
  param_1[0x1cb] = 0;
  param_1[0x1d2] = 0;
  param_1[0x1d8] = 0;
  param_1[0x1e5] = 0;
  param_1[3] = temp_v2;
  param_1[4] = temp_v2;
  param_1[5] = temp_v2;
  temp_v0 = 0xffffffff;
  param_1[6] = temp_v2;
  param_1[0x1f2] = 0xffffffff;
  param_1[499] = 0xffffffff;
  *(unsigned char *)(param_1 + 0x1aa) = 0;
  FUN_00208b84();
  param_1[0x10] = temp_v0;
  FUN_00203a6c();
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  FUN_00348c50(0);
  *(unsigned int **)(DAT_00589144 + 0x10) = param_1 + 0x1b;
  param_1[0xe] = 1;
  param_1[0xf] = 0;
  return;
}
