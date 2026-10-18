/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00193038` (_code @ 0x193038, 0x17c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

/* Supplied declaration required: FUN_0016e8c4. */
extern int ll_sdiv(int, int, unsigned int, unsigned int);


void FUN_00193038(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9 [2];
  
  temp_v2 = 86400000;
  temp_v1 = ll_sdiv(*param_2 + 0x7cfc8400,param_2[1] + 0x395f + (unsigned int)(0x83037bff < *param_2),86400000
                  ,0);
  FUN_0016e8c4(&temp_v7,&temp_v8,temp_v9,temp_v1 - 0xb2407);
  temp_v5 = temp_v1 - 0xb2401;
  temp_v1 = (int)(((long long)(int)temp_v5 * -0x6db6db6d + ((unsigned long long)temp_v5 << 0x20)) >> 0x20);
  temp_v6 = temp_v5 + ((temp_v1 >> 2) - (temp_v1 >> 0x1f)) * -7 + 7;
  temp_v1 = (int)(((long long)(int)temp_v6 * -0x6db6db6d + ((unsigned long long)temp_v6 << 0x20)) >> 0x20);
  temp_v5 = temp_v2 / 60000;
  temp_v3 = (int)(((long long)(int)temp_v5 * -0x77777777 + ((unsigned long long)temp_v5 << 0x20)) >> 0x20);
  temp_v0 = temp_v2 / 1000;
  temp_v4 = (int)(((long long)(int)temp_v0 * -0x77777777 + ((unsigned long long)temp_v0 << 0x20)) >> 0x20);
  param_1[2] = (((temp_v0 + ((temp_v4 >> 5) - (temp_v4 >> 0x1f)) * -0x3c) * 0x100) & 0xff00) |
               ((temp_v5 + ((temp_v3 >> 5) - (temp_v3 >> 0x1f)) * -0x3c) & 0xff) |
               ((temp_v2 % 1000) * 0x10000);
  *param_1 = temp_v7;
  param_1[1] = (((((temp_v1 >> 2) - (temp_v1 >> 0x1f)) * -7 + temp_v6) * 0x10000) & 0xff0000) |
               (temp_v8 & 0xff) | ((temp_v9[0] & 0xff) << 8) | ((temp_v2 / 3600000) * 0x1000000);
  return;
}
