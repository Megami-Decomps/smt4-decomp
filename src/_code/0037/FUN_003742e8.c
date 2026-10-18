/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003742e8` (_code @ 0x3742e8, 0x3c4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_3_stack;

extern unsigned int *DAT_004652a0; /* 0x4652a0 */

/* Supplied declaration required: FUN_002a1768. */
/* Supplied declaration required: FUN_002a22d0. */


void FUN_003742e8(int *param_1,unsigned int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  
  puVar1 = DAT_004652a0;
  *DAT_004652a0 = 0x80000015;
  puVar1[1] = 0x804f02c0;
  FUN_002a1768(puVar1 + 2,param_3 + 0x20);
  puVar1 = DAT_004652a0;
  DAT_004652a0 = DAT_004652a0 + 6;
  *DAT_004652a0 = 0x80000014;
  puVar1[7] = 0x804f02c0;
  FUN_002a1768(puVar1 + 8,param_3 + 0x10);
  temp_v0 = 0;
  temp_v3 = param_1[0x29];
  if ((int)temp_v3 >= 9) {
    temp_v3 = 8;
  }
  if ((int)temp_v3 >= 1) {
    temp_v7 = temp_v3 - 1;
    temp_v1 = (unsigned int)((temp_v3 & 1) != 0);
    for (temp_v4 = (int)temp_v3 >> 1; temp_v4 != 0; temp_v4 = temp_v4 - 1) {
      temp_v0 = temp_v0 | (temp_v1 << ((temp_v1 * 4) & 0xff)) | ((temp_v1 + 1) << ((temp_v1 * 4 + 4) & 0xff));
      temp_v1 = temp_v1 + 2;
    }
  }
  else {
    temp_v7 = 0;
  }
  DAT_004652a0[8] = temp_v0;
  DAT_004652a0[9] = 0xf01d9;
  DAT_004652a0[6] = temp_v7;
  DAT_004652a0[7] = 0x101c2;
  if (*param_1 != 0) {
    temp_v6 = *(unsigned int *)(*(int *)(*param_1 + 8) + 200);
    temp_v0 = *(unsigned int *)(param_3 + 0xb4);
    temp_v1 = *(unsigned int *)(param_3 + 0xb0);
    temp_v2 = ((unsigned int)((int)(short)(((unsigned short)temp_v6 & 0xff) * 2 + 1) *
                   (int)(short)(((unsigned short)temp_v0 & 0xff) * 2 + 1)) >> 10) + (temp_v1 & 0xff);
    temp_v5 = ((temp_v1 & 0xffff) >> 8) +
            ((unsigned int)((int)(short)((short)((temp_v6 & 0xff00) >> 7) + 1) *
                   (int)(short)((short)((temp_v0 & 0xff00) >> 7) + 1)) >> 10);
    if (temp_v2 >= 0x100) {
      temp_v2 = 0xff;
    }
    if (temp_v5 >= 0x100) {
      temp_v5 = 0xff;
    }
    temp_v0 = ((temp_v1 & 0xffffff) >> 0x10) +
            ((unsigned int)((int)(short)((short)((temp_v6 & 0xff0000) >> 0xf) + 1) *
                   (int)(short)((short)((temp_v0 & 0xff0000) >> 0xf) + 1)) >> 10);
    if (temp_v0 >= 0x100) {
      temp_v0 = 0xff;
    }
    temp_v0 = temp_v0 | (temp_v2 << 0x14) | (temp_v5 << 10);
  }
  else {
    temp_v0 = *(unsigned int *)(param_3 + 0xb0);
    temp_v0 = ((temp_v0 & 0xff) << 0x14) | (((temp_v0 & 0xffff) >> 8) << 10) |
            ((temp_v0 & 0xffffff) >> 0x10);
  }
  DAT_004652a0[10] = temp_v0;
  DAT_004652a0[0xb] = 0xf01c0;
  DAT_004652a0 = DAT_004652a0 + 0xc;
  temp_v4 = 0;
  if (temp_v4 < (int)temp_v3) {
    do {
      FUN_002a22d0();
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < (int)temp_v3);
  }
  return;
}
