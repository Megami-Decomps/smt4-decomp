/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019fb4c` (_code @ 0x19fb4c, 0xc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00465124; /* 0x465124 */

/* Unsupported intrinsic, declaration required: coprocessor_storelong (CALLOTHER). */
extern unsigned int FUN_002c34a4(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c4b84. */
/* Supplied declaration required: FUN_00349a5c. */


void FUN_0019fb4c(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 goto(s); irregular input(s): in_cr14, in_r12, in_s0; 4 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned char *pbVar9;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int *puVar12;
  int unaff_r9;
  unsigned int temp_v9;
  unsigned int in_r12;
  unsigned char temp_v10;
  unsigned int in_cr14;
  unsigned int in_s0;
  unsigned int *puStack_38;
  
  if (param_1 == 0 || param_2 == 0) {
    return;
  }
  temp_v1 = *(unsigned short *)(param_2 + 0x12);
  temp_v7 = (unsigned int)temp_v1;
  temp_v8 = (unsigned int)*(unsigned short *)(param_2 + 0x14);
  if (*(char *)(param_2 + 0x11) == '\0') {
    unaff_r9 = 4;
    *(unsigned int *)(param_1 + 0x28) = temp_v7 * temp_v8 * 4;
    puStack_38 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,*(unsigned int *)(param_1 + 0x28),1);
  }
  temp_v0 = *(unsigned char *)(param_2 + 0x16);
  param_2 = param_2 + 0x40;
  if (temp_v0 != 0x1b) {
    if (temp_v0 < 0x1c) {
      if (temp_v0 == 0x13) goto LAB_0019fc84;
      if (temp_v0 != 0x14) goto LAB_0019fd9c;
    }
    else if (temp_v0 != 0x24 && temp_v0 != 0x2c) goto LAB_0019fd9c;
    temp_v9 = 0;
    puVar12 = puStack_38;
    if (temp_v8 != 0) {
      do {
        if (temp_v7 != 0) {
          temp_v2 = 0;
          puVar5 = puVar12;
          temp_v6 = temp_v7;
          do {
            temp_v10 = (temp_v2 & 1) != 0;
            temp_v4 = ((temp_v8 - temp_v9) - 1) * temp_v7 + temp_v2;
            temp_v2 = temp_v2 + 1;
            temp_v0 = *(unsigned char *)(param_2 + unaff_r9 * 0x10 + (temp_v4 >> 1));
            if (temp_v10) {
              temp_v0 = temp_v0 >> 4;
            }
            temp_v5 = (unsigned int)temp_v0;
            if (!temp_v10) {
              temp_v5 = temp_v5 & 0xf;
            }
            temp_v5 = *(unsigned int *)(param_2 + temp_v5 * 4);
            in_r12 = temp_v5 >> 0x18;
            temp_v10 = in_r12 < 0x7f;
            if (temp_v10) {
              in_r12 = in_r12 << 0x19;
            }
            if (!temp_v10) {
              in_r12 = 0xff;
            }
            else {
              in_r12 = in_r12 >> 0x18;
            }
            temp_v6 = (temp_v6 - 1) & 0xffff;
            *puVar5 = (temp_v5 << 0x18) | (((temp_v5 >> 8) & 0xff) << 0x10) |
                      (((temp_v5 >> 0x10) & 0xff) << 8) | in_r12;
            puVar5 = puVar5 + 1;
          } while (temp_v6 != 0);
          puVar12 = puVar12 + temp_v7;
        }
        temp_v9 = (temp_v9 + 1) & 0xffff;
      } while (temp_v9 < temp_v8);
    }
  }
  else {
LAB_0019fc84:
    temp_v4 = FUN_002c4b84(0x100,0x100,0,0x400,1);
    temp_v9 = 0;
    do {
      temp_v2 = *(unsigned int *)(param_2 +
                       ((temp_v9 & 0xe7) | ((temp_v9 & 0x10) >> 1) | ((temp_v9 & 8) << 1)) * 4);
      temp_v6 = temp_v2 >> 0x18;
      temp_v10 = temp_v6 < 0x7f;
      if (temp_v10) {
        temp_v6 = temp_v6 << 0x19;
      }
      if (!temp_v10) {
        temp_v6 = 0xff;
      }
      else {
        temp_v6 = temp_v6 >> 0x18;
      }
      *(unsigned int *)(temp_v4 + temp_v9 * 4) =
           temp_v6 | (temp_v2 << 0x18) | (((temp_v2 & 0xff00) >> 8) << 0x10) |
                   (((temp_v2 & 0xff0000) >> 0x10) << 8);
      temp_v9 = temp_v9 + 1;
    } while (temp_v9 < 0x100);
    in_r12 = 0;
    if (temp_v8 != 0) {
      puVar12 = puStack_38;
      do {
        if (temp_v7 != 0) {
          pbVar9 = (unsigned char *)(((temp_v8 - in_r12) - 1) * temp_v7 + ((param_2 + unaff_r9 * 0x100) - 1));
          temp_v9 = (unsigned int)(temp_v1 >> 1);
          puVar5 = puVar12 + -1;
          if ((temp_v1 & 1) != 0) {
            pbVar9 = pbVar9 + 1;
            *puVar12 = *(unsigned int *)(temp_v4 + (unsigned int)*pbVar9 * 4);
            puVar5 = puVar12;
          }
          for (; temp_v9 != 0; temp_v9 = temp_v9 - 1) {
            puVar5[1] = *(unsigned int *)(temp_v4 + (unsigned int)pbVar9[1] * 4);
            pbVar9 = pbVar9 + 2;
            puVar5[2] = *(unsigned int *)(temp_v4 + (unsigned int)*pbVar9 * 4);
            puVar5 = puVar5 + 2;
          }
          puVar12 = puVar12 + temp_v7;
        }
        in_r12 = (in_r12 + 1) & 0xffff;
      } while (in_r12 < temp_v8);
    }
    FUN_002c4360(temp_v4);
  }
LAB_0019fd9c:
  *(unsigned int *)(param_1 + 8) = param_4;
  *(unsigned int *)(param_1 + 4) = 0xde1;
  *(unsigned int *)(param_1 + 0x1c) = 0x6752;
  *(unsigned int *)(param_1 + 0x20) = 0x1401;
  *(unsigned int *)(param_1 + 0x14) = temp_v7;
  *(unsigned int *)(param_1 + 0x18) = temp_v8;
  temp_v3 = FUN_002c34a4(0x10000,0x100,0,*(unsigned int *)(param_1 + 0x28),0x80,1);
  *(unsigned int *)(param_1 + 0x24) = temp_v3;
  FUN_00349a5c(*(unsigned int *)(param_1 + 0x14),*(unsigned int *)(param_1 + 0x18),puStack_38,temp_v3);
  coprocessor_storelong(0xb,in_cr14,in_r12 + 0x3fc);
  if (((unsigned int)puStack_38 & 0x1fffff) != 0) {
    *(unsigned int *)(DAT_00465124 + 0x28) = in_s0;
  }
  return;
}
