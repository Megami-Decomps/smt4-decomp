/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022bcc4` (_code @ 0x22bcc4, 0x1a8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0022bcc4_arg0 fn_0022bcc4_arg0;
struct fn_0022bcc4_arg0 {
    uint field_0x0; /* +0x0 */
    int field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x4];
    undefined4 field_0xc; /* +0xc */
};

/* Supplied declaration required: FUN_0022b92c. */


void FUN_0022bcc4(fn_0022bcc4_arg0 *param_1,unsigned int param_2,unsigned char *param_3)

{
/* irregular: 2 goto(s); 1 native warning(s); review required */
  fn_0022bcc4_arg0 *pfVar1;
  unsigned char *puVar2;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char *puVar6;
  int temp_v3;
  unsigned int temp_v4;
  unsigned char *puVar9;
  unsigned char *puVar10;
  unsigned int temp_v5;
  unsigned int temp_v6;
  fn_0022bcc4_arg0 *pfVar13;
  
  temp_v6 = param_1->field_0xc;
  temp_v2 = param_1->field_0x4;
  temp_v3 = temp_v2 + temp_v6;
  if (temp_v6 < param_2) {
    pfVar13 = (fn_0022bcc4_arg0 *)(param_2 - temp_v6);
    if (pfVar13 == (fn_0022bcc4_arg0 *)0x0) {
      return;
    }
    temp_v3 = temp_v3 - temp_v2;
    pfVar1 = param_1;
    FUN_0022b92c(param_1,temp_v3,pfVar13);
    while (pfVar1 != (fn_0022bcc4_arg0 *)0x0) {
      puVar2 = (unsigned char *)(param_1->field_0x4 + temp_v3);
      if (puVar2 != (unsigned char *)0x0) {
        *puVar2 = *param_3;
      }
      temp_v3 = temp_v3 + 1;
      pfVar13 = (fn_0022bcc4_arg0 *)((int)&pfVar13[-1].field_0xc + 3);
      pfVar1 = pfVar13;
    }
    return;
  }
  temp_v0 = param_2 + temp_v2;
  if (temp_v0 == temp_v3) {
    return;
  }
  temp_v5 = temp_v3 - temp_v2;
  temp_v4 = temp_v0 - temp_v2;
  temp_v1 = temp_v6 - temp_v5;
  temp_v3 = temp_v6 - (temp_v3 - temp_v0);
  if (temp_v1 != 0) {
    if (temp_v5 >= temp_v4) {
      puVar9 = (unsigned char *)(temp_v4 + temp_v2);
      puVar2 = (unsigned char *)(temp_v2 + temp_v5);
      if (temp_v1 >= 0x80000000) {
        do {
          temp_v1 = temp_v1 - 1;
          *puVar9 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar9 = puVar9 + 1;
        } while (temp_v1 != 0);
      }
      else {
        if ((int)temp_v1 < 2) {
          temp_v1 = 1;
        }
        else if ((int)temp_v1 < 1) goto LAB_0022be38;
        puVar6 = puVar2 + -1;
        puVar10 = puVar9 + -1;
        if ((temp_v1 & 1) != 0) {
          *puVar9 = *puVar2;
          puVar6 = puVar2;
          puVar10 = puVar9;
        }
        for (temp_v2 = (int)temp_v1 >> 1; temp_v2 != 0; temp_v2 = temp_v2 - 1) {
          puVar10[1] = puVar6[1];
          puVar6 = puVar6 + 2;
          puVar10 = puVar10 + 2;
          *puVar10 = *puVar6;
        }
      }
    }
    else {
      puVar9 = (unsigned char *)(temp_v4 + temp_v1 + temp_v2);
      puVar2 = (unsigned char *)(temp_v2 + temp_v5 + temp_v1);
      if (temp_v1 >= 0x80000000) {
        do {
          puVar2 = puVar2 + -1;
          temp_v1 = temp_v1 - 1;
          puVar9 = puVar9 + -1;
          *puVar9 = *puVar2;
        } while (temp_v1 != 0);
      }
      else {
        if ((int)temp_v1 < 2) {
          temp_v1 = 1;
        }
        else if ((int)temp_v1 < 1) goto LAB_0022be38;
        if ((temp_v1 & 1) != 0) {
          puVar2 = puVar2 + -1;
          puVar9 = puVar9 + -1;
          *puVar9 = *puVar2;
        }
        for (temp_v2 = (int)temp_v1 >> 1; temp_v2 != 0; temp_v2 = temp_v2 - 1) {
          puVar9[-1] = puVar2[-1];
          puVar2 = puVar2 + -2;
          puVar9 = puVar9 + -2;
          *puVar9 = *puVar2;
        }
      }
    }
  }
LAB_0022be38:
  temp_v2 = param_1->field_0xc - temp_v3;
  if (0 < temp_v2) {
    for (temp_v2 = temp_v2 >> 1; temp_v2 != 0; temp_v2 = temp_v2 - 1) {
    }
  }
  param_1->field_0xc = temp_v3;
  return;
}
