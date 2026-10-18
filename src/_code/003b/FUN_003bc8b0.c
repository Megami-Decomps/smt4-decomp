/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bc8b0` (_code @ 0x3bc8b0, 0x1e4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003bc8b0_arg2 fn_003bc8b0_arg2;
struct fn_003bc8b0_arg2 {
    unsigned char pad_0x0[0x2];
    byte field_0x2; /* +0x2 */
    byte field_0x3; /* +0x3 */
    undefined4 field_0x4; /* +0x4 */
};

extern unsigned int *DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_0022add0. */
extern int FUN_002ba9d8(fn_003bc8b0_arg2 *, unsigned int);
extern unsigned int FUN_002c0e4c(unsigned int);
extern unsigned int *FUN_002c0e9c(void);
extern unsigned int FUN_002c0ec4(unsigned int);
/* Supplied declaration required: FUN_002c4b30. */


void FUN_003bc8b0(unsigned int *param_1,unsigned int param_2,fn_003bc8b0_arg2 *param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  unsigned int temp_v4;
  unsigned int *puVar7;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  
  FUN_002c4b30(param_1,0x74);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0xc] = 0x3f800000;
  param_1[0xd] = 0x3f800000;
  temp_v2 = FUN_002ba9d8(param_3,param_4);
  temp_v3 = FUN_002c0ec4(2);
  puVar5 = (unsigned int *)FUN_002c0e9c();
  puVar7 = puVar5;
  if (((-1 < (int)param_2) && (temp_v4 = FUN_002c0e4c(temp_v3), param_2 < temp_v4)) &&
     (puVar7 = DAT_00433158, FUN_0022add0(DAT_00433158,param_2), puVar7 == (unsigned int *)0x0)) {
    puVar7 = puVar5 + param_2 * 7;
  }
  temp_v4 = *puVar7;
  temp_v1 = (unsigned short)puVar7[1];
  temp_v5 = puVar7[2];
  temp_v6 = puVar7[3];
  temp_v9 = puVar7[4];
  temp_v8 = puVar7[5];
  temp_v7 = puVar7[6];
  if ((puVar7[1] & 0xff) == 0) {
    temp_v1 = *(unsigned short *)(temp_v2 + 2);
  }
  temp_v0 = param_5;
  if (0 < (int)param_5) {
    temp_v0 = param_6;
  }
  if (0 < (int)temp_v0) {
    temp_v1 = ((unsigned short)param_5 & 0xff) | (unsigned short)((param_6 & 0xff) << 8);
  }
  if (temp_v5 == 0) {
    temp_v5 = *(unsigned int *)(temp_v2 + 4);
  }
  *(short *)(param_1 + 6) = (short)param_2;
  *param_1 = temp_v6 & 0xffff;
  param_1[1] = temp_v6 >> 0x10;
  param_1[2] = temp_v9 & 0xffff;
  param_1[3] = temp_v9 >> 0x10;
  param_1[4] = temp_v8 & 0xffff;
  param_1[5] = temp_v8 >> 0x10;
  *(unsigned char *)(param_1 + 0xe) = 0;
  *(char *)((int)param_1 + 0x1f) = (char)temp_v1;
  *(char *)(param_1 + 8) = (char)(temp_v1 >> 8);
  param_1[9] = temp_v5;
  temp_v5 = param_1[6];
  temp_v6 = temp_v5 | 0x40000000;
  param_1[6] = temp_v6;
  *(unsigned char *)((int)param_1 + 0x1e) = (unsigned char)((temp_v4 << 0x1b) >> 0x1d) - 1;
  if ((temp_v4 & 1) != 0) {
    temp_v6 = temp_v5 | 0x40010000;
    param_1[6] = temp_v6;
  }
  if ((temp_v4 & 2) != 0) {
    param_1[6] = temp_v6 | 0x20000;
  }
  *(short *)(param_1 + 0x14) = (short)temp_v7;
  *(short *)((int)param_1 + 0x52) = (short)(temp_v7 >> 0x10);
  *(unsigned short *)(param_1 + 10) = 0;
  *(unsigned short *)((int)param_1 + 0x2a) = 0;
  param_1[7] = param_1[7] & 0xffffffc3;
  *(unsigned char *)(param_1 + 0xb) = 0;
  *(unsigned char *)((int)param_1 + 0x2d) = 0;
  *(unsigned char *)((int)param_1 + 0x2e) = 0;
  *(unsigned char *)((int)param_1 + 0x2f) = 0;
  param_1[6] = param_1[6] | 0x100000;
  return;
}
