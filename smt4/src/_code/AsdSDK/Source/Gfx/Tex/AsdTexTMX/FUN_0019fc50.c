/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019fc50` (_code @ 0x19fc50, 0xc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int *DAT_00465124; /* 0x465124 */
extern unsigned int DAT_00465144; /* 0x465144 */
extern unsigned int DAT_00465148; /* 0x465148 */
extern int DAT_00465154; /* 0x465154 */
extern int DAT_00465158; /* 0x465158 */
extern unsigned int DAT_00471b58; /* 0x471b58 */

/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Supplied declaration required: FUN_001245c4. */
extern unsigned int *FUN_001246cc(unsigned int *);
/* Supplied declaration required: FUN_002a8554. */
/* Supplied declaration required: FUN_002c32a0. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_00349804. */
extern void nn_os_CriticalSection_Enter(unsigned int);


void FUN_0019fc50(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 goto(s); irregular input(s): in_lr; 7 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  int *piVar3;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int *puVar7;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned char *pbVar12;
  unsigned int unaff_r4;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int *puVar15;
  int unaff_r9;
  unsigned int temp_v11;
  unsigned int in_lr;
  unsigned char temp_v12;
  unsigned int *puStack_38;
  
  if (param_1 == 0 || param_2 == 0) {
    return;
  }
  temp_v1 = *(unsigned short *)(param_2 + 0x12);
  temp_v9 = (unsigned int)temp_v1;
  temp_v10 = (unsigned int)*(unsigned short *)(param_2 + 0x14);
  if (*(char *)(param_2 + 0x11) == '\0') {
    unaff_r9 = 4;
    *(unsigned int *)(param_1 + 0x28) = temp_v9 * temp_v10 * 4;
    puStack_38 = (unsigned int *)0x100;
    FUN_002c498c(0x100,0x100,0,*(unsigned int *)(param_1 + 0x28),1);
  }
  temp_v0 = *(unsigned char *)(param_2 + 0x16);
  param_2 = param_2 + 0x40;
  if (temp_v0 != 0x1b) {
    if (temp_v0 < 0x1c) {
      if (temp_v0 == 0x13) goto LAB_0019fd88;
      if (temp_v0 != 0x14) goto LAB_0019fea0;
    }
    else if (temp_v0 != 0x24 && temp_v0 != 0x2c) goto LAB_0019fea0;
    temp_v11 = 0;
    puVar15 = puStack_38;
    if (temp_v10 != 0) {
      do {
        if (temp_v9 != 0) {
          temp_v2 = 0;
          puVar7 = puVar15;
          temp_v8 = temp_v9;
          do {
            temp_v12 = (temp_v2 & 1) != 0;
            temp_v5 = ((temp_v10 - temp_v11) - 1) * temp_v9 + temp_v2;
            temp_v2 = temp_v2 + 1;
            temp_v0 = *(unsigned char *)(param_2 + unaff_r9 * 0x10 + (temp_v5 >> 1));
            if (temp_v12) {
              temp_v0 = temp_v0 >> 4;
            }
            temp_v6 = (unsigned int)temp_v0;
            if (!temp_v12) {
              temp_v6 = temp_v6 & 0xf;
            }
            temp_v7 = *(unsigned int *)(param_2 + temp_v6 * 4);
            temp_v6 = temp_v7 >> 0x18;
            temp_v12 = temp_v6 < 0x7f;
            if (temp_v12) {
              temp_v6 = temp_v6 << 0x19;
            }
            if (!temp_v12) {
              temp_v6 = 0xff;
            }
            else {
              temp_v6 = temp_v6 >> 0x18;
            }
            temp_v8 = (temp_v8 - 1) & 0xffff;
            *puVar7 = (temp_v7 << 0x18) | (((temp_v7 >> 8) & 0xff) << 0x10) |
                      (((temp_v7 >> 0x10) & 0xff) << 8) | temp_v6;
            puVar7 = puVar7 + 1;
          } while (temp_v8 != 0);
          puVar15 = puVar15 + temp_v9;
        }
        temp_v11 = (temp_v11 + 1) & 0xffff;
      } while (temp_v11 < temp_v10);
    }
  }
  else {
LAB_0019fd88:
    temp_v5 = 0x100;
    FUN_002c498c(0x100,0x100,0,0x400,1);
    temp_v11 = 0;
    do {
      temp_v2 = *(unsigned int *)(param_2 +
                       ((temp_v11 & 0xe7) | ((temp_v11 & 0x10) >> 1) | ((temp_v11 & 8) << 1)) * 4);
      temp_v8 = temp_v2 >> 0x18;
      temp_v12 = temp_v8 < 0x7f;
      if (temp_v12) {
        temp_v8 = temp_v8 << 0x19;
      }
      if (!temp_v12) {
        temp_v8 = 0xff;
      }
      else {
        temp_v8 = temp_v8 >> 0x18;
      }
      *(unsigned int *)(temp_v5 + temp_v11 * 4) =
           temp_v8 | (temp_v2 << 0x18) | (((temp_v2 & 0xff00) >> 8) << 0x10) |
                    (((temp_v2 & 0xff0000) >> 0x10) << 8);
      temp_v11 = temp_v11 + 1;
    } while (temp_v11 < 0x100);
    temp_v11 = 0;
    if (temp_v10 != 0) {
      puVar15 = puStack_38;
      do {
        if (temp_v9 != 0) {
          pbVar12 = (unsigned char *)(((temp_v10 - temp_v11) - 1) * temp_v9 + ((param_2 + unaff_r9 * 0x100) - 1));
          temp_v8 = (unsigned int)(temp_v1 >> 1);
          puVar7 = puVar15 + -1;
          if ((temp_v1 & 1) != 0) {
            pbVar12 = pbVar12 + 1;
            *puVar15 = *(unsigned int *)(temp_v5 + (unsigned int)*pbVar12 * 4);
            puVar7 = puVar15;
          }
          for (; temp_v8 != 0; temp_v8 = temp_v8 - 1) {
            puVar7[1] = *(unsigned int *)(temp_v5 + (unsigned int)pbVar12[1] * 4);
            pbVar12 = pbVar12 + 2;
            puVar7[2] = *(unsigned int *)(temp_v5 + (unsigned int)*pbVar12 * 4);
            puVar7 = puVar7 + 2;
          }
          puVar15 = puVar15 + temp_v9;
        }
        temp_v11 = (temp_v11 + 1) & 0xffff;
      } while (temp_v11 < temp_v10);
    }
    FUN_002c415c(temp_v5);
  }
LAB_0019fea0:
  *(unsigned int *)(param_1 + 8) = param_4;
  *(unsigned int *)(param_1 + 4) = 0xde1;
  *(unsigned int *)(param_1 + 0x1c) = 0x6752;
  *(unsigned int *)(param_1 + 0x20) = 0x1401;
  *(unsigned int *)(param_1 + 0x14) = temp_v9;
  *(unsigned int *)(param_1 + 0x18) = temp_v10;
  temp_v3 = 0x10000;
  FUN_002c32a0(0x10000,0x100,0,*(unsigned int *)(param_1 + 0x28),0x80,1);
  *(unsigned int *)(param_1 + 0x24) = temp_v3;
  FUN_00349804(*(unsigned int *)(param_1 + 0x14),*(unsigned int *)(param_1 + 0x18),puStack_38,temp_v3);
  nn_os_CriticalSection_Enter((unsigned int)DAT_00465124);
  if ((((unsigned int)puStack_38 < DAT_00465144) || ((unsigned int *)(DAT_00465154 + (int)DAT_00465144) < puStack_38)) &&
     (((unsigned int)puStack_38 < DAT_00465148 || ((unsigned int *)((int)DAT_00465148 + DAT_00465158) < puStack_38)))) {
    puStack_38 = (unsigned int *)FUN_001246cc(puStack_38);
  }
  FUN_001245c4(puStack_38);
  piVar3 = DAT_00465124;
  temp_v5 = DAT_00465124[2];
  DAT_00465124[2] = temp_v5 - 1;
  if (temp_v5 - 1 == 0) {
    piVar3[1] = 0;
    do {
      temp_v4 = *piVar3;
      temp_v5 = -temp_v4;
      temp_v12 = (unsigned char)hasExclusiveAccess(piVar3);
    } while (!temp_v12);
    *piVar3 = temp_v5;
    if (temp_v4 != -1 && 0 < temp_v5) {
      FUN_002a8554(DAT_00471b58,piVar3,0,1,0,0,unaff_r4,in_lr);
    }
    return;
  }
  return;
}
