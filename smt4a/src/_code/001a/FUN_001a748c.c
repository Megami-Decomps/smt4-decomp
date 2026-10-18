/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a748c` (_code @ 0x1a748c, 0x258 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern unsigned char LAB_00200080; /* 0x200080 */


unsigned int * FUN_001a748c(unsigned char *param_1,unsigned int *param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned char *pbVar4;
  unsigned int temp_v2;
  unsigned char *pbVar6;
  unsigned char *pbVar7;
  unsigned char *pbVar8;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  
  pbVar6 = param_1 + 0x17c;
  temp_v3 = 0;
  temp_v4 = 8;
  if (param_1[0x191] == 0) {
    temp_v5 = 7;
  }
  else {
    temp_v5 = 0;
  }
  temp_v0 = ((unsigned int)(param_1[399] == 0) << 0x10) | ((unsigned int)(param_1[400] == 0) << 0x11) |
          ((unsigned int)(param_1[0x185] == 0) << 0x13) | (temp_v5 << 0x14) | 0xff04ffff;
  temp_v6 = 0;
  pbVar7 = param_1 + 0x16c;
  pbVar8 = param_1 + 0x174;
  temp_v2 = 0;
  pbVar4 = param_1 + 0x164;
  do {
    temp_v1 = temp_v2;
    if (*pbVar4 != 0) {
      if (*pbVar6 != 0) {
        temp_v0 = temp_v0 & ~(1 << (temp_v6 & 0xff));
      }
      if (*pbVar7 != 0) {
        temp_v0 = temp_v0 & ~(1 << ((temp_v6 + 8) & 0xff));
      }
      if (*pbVar8 != 0) {
        temp_v0 = temp_v0 & ~(1 << ((temp_v6 + 0x18) & 0xff));
      }
      temp_v1 = temp_v2 + 1;
      temp_v3 = temp_v3 | (temp_v6 << ((temp_v2 & 0x3f) << 2));
    }
    temp_v4 = temp_v4 - 1;
    pbVar6 = pbVar6 + 1;
    pbVar7 = pbVar7 + 1;
    pbVar8 = pbVar8 + 1;
    temp_v6 = temp_v6 + 1;
    temp_v2 = temp_v1;
    pbVar4 = pbVar4 + 1;
  } while (temp_v4 != 0);
  if (param_3 != 0) {
    *param_2 = 0;
    param_2[1] = (unsigned int)&LAB_00200080;
    puVar1 = param_2 + 3;
    param_2[2] = 0;
    param_2 = param_2 + 4;
    *puVar1 = 0;
  }
  *param_2 = (unsigned int)(temp_v1 != 0);
  param_2[1] = 0xf008f;
  param_2[2] = ((unsigned int)param_1[1] << 10) | ((unsigned int)*param_1 << 0x14) | (unsigned int)param_1[2];
  param_2[3] = 0xf01c0;
  if ((int)temp_v1 >= 1) {
    temp_v2 = temp_v1 - 1;
  }
  else {
    temp_v2 = 0;
  }
  param_2[4] = temp_v2;
  param_2[5] = 0xf01c2;
  param_2[6] = (unsigned int)((param_1[0x189] != 0 || param_1[0x18a] != 0) || param_1[0x18b] != 0) |
               ((unsigned int)param_1[0x185] << 2) | ((unsigned int)param_1[0x184] << 4) |
               ((unsigned int)(param_1[0x189] != 0) << 0x10) | ((unsigned int)(param_1[0x18a] != 0) << 0x11) |
               ((unsigned int)(param_1[0x18c] != 0) << 0x12) | ((unsigned int)(param_1[0x18b] != 0) << 0x13) |
               ((unsigned int)param_1[0x188] << 0x16) | ((unsigned int)param_1[0x186] << 0x18) |
               ((unsigned int)(param_1[0x18e] != 0) << 0x1b) | ((unsigned int)param_1[0x187] << 0x1c) |
               ((unsigned int)(param_1[0x187] != 0 && param_1[0x18d] == 0) << 0x1e) | 0x80000400;
  param_2[7] = 0xf01c3;
  param_2[8] = temp_v0;
  param_2[9] = 0xf01c4;
  param_2[10] = (unsigned int)(temp_v1 == 0);
  param_2[0xb] = 0xf01c6;
  param_2[0xc] = temp_v3;
  param_2[0xd] = 0xf01d9;
  return param_2 + 0xe;
}
