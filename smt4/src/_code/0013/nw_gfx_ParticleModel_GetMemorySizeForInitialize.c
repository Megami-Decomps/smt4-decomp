/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_ParticleModel_GetMemorySizeForInitialize` (_code @ 0x13daf0, 0x4d8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0013daf0_arg1 fn_0013daf0_arg1;
struct fn_0013daf0_arg1 {
    unsigned char pad_0x0[0x28];
    undefined4 field_0x28; /* +0x28 */
    int field_0x2c; /* +0x2c */
    unsigned char pad_0x30[0x84];
    int field_0xb4; /* +0xb4 */
    unsigned char pad_0xb8[0x4];
    int field_0xbc; /* +0xbc */
    int field_0xc0; /* +0xc0 */
    unsigned char pad_0xc4[0x8];
    int field_0xcc; /* +0xcc */
};

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

/* Supplied declaration required: FUN_0014b7a8. */
/* Supplied declaration required: nw_gfx_AnimGroup_GetMemorySizeForInitialize. */


void nw_gfx_ParticleModel_GetMemorySizeForInitialize
               (int *param_1,fn_0013daf0_arg1 *param_2,unsigned int *param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int *piVar3;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned char temp_v11;
  
  temp_v5 = *param_3;
  temp_v9 = param_3[1];
  temp_v2 = param_3[2];
  temp_v7 = param_3[3];
  temp_v6 = param_3[4];
  temp_v10 = param_3[5];
  temp_v3 = param_1[1];
  param_1[1] = 0x20;
  temp_v0 = param_1[2];
  if (temp_v0 < 0x20) {
    temp_v0 = 0x20;
  }
  param_1[2] = temp_v0;
  *param_1 = ((*param_1 + 0x1fU) & 0xffffffe0) + temp_v2 * 4;
  param_1[1] = temp_v3;
  if (temp_v3 <= (unsigned int)param_1[2]) {
    temp_v3 = param_1[2];
  }
  param_1[2] = temp_v3;
  temp_v0 = param_1[1] - 1;
  temp_v3 = (*param_1 + param_1[1]) - 1;
  if (temp_v9 == 0) {
    temp_v4 = (temp_v3 & ~temp_v0) + 0x14;
  }
  else {
    temp_v4 = (temp_v3 & ~temp_v0) + 0x14;
    *param_1 = temp_v4;
    temp_v3 = (temp_v4 + param_1[1]) - 1;
    temp_v4 = (temp_v3 & ~temp_v0) + temp_v9 * 4;
  }
  *param_1 = temp_v4;
  temp_v11 = (int)(((temp_v5 & 0xff) | ((((int)(temp_v5 << 0x10) >> 0x18) & 0xffU) << 8)) << 0x10) >> 0x18
           != 0;
  if (temp_v11 && param_2 != (fn_0013daf0_arg1 *)0x0) {
    temp_v3 = param_2->field_0x28;
  }
  if ((temp_v11 && param_2 != (fn_0013daf0_arg1 *)0x0) && temp_v3 != 0) {
    temp_v4 = (((*param_1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + 0x2c;
    *param_1 = temp_v4;
    temp_v4 = (((temp_v4 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + temp_v3 * 4;
    *param_1 = temp_v4;
    *param_1 = (((temp_v4 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + temp_v3 * temp_v7 * 4;
  }
  if (temp_v9 != 0) {
    temp_v4 = (((*param_1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + 0x14;
    *param_1 = temp_v4;
    temp_v4 = (((temp_v4 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + temp_v9 * 4;
  }
  else {
    temp_v4 = (((*param_1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + 0x14;
  }
  *param_1 = temp_v4;
  temp_v4 = param_2->field_0xb4;
  temp_v4 = ((((((temp_v4 + (((((((((*param_1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + temp_v4 * 4 +
                             param_1[1]) - 1) & ~(param_1[1] - 1U)) + temp_v4 * 0x88 + param_1[1]) - 1
                         ) & ~(param_1[1] - 1U)) + param_1[1]) - 1) & ~(param_1[1] - 1U)) +
             param_2->field_0xcc * 8 + param_1[1]) - 1) & ~(param_1[1] - 1U)) + param_2->field_0xcc;
  *param_1 = temp_v4;
  if (temp_v10 != 0) {
    *param_1 = (((temp_v4 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) +
               ((*(int *)(temp_v10 + 0x168) - *(int *)(temp_v10 + 0x164)) >> 2) * 4;
  }
  else {
    temp_v1 = param_2->field_0xbc;
    temp_v8 = 0;
    *param_1 = (((temp_v4 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + temp_v1 * 4;
    if (0 < temp_v1) {
      do {
        if (param_2->field_0xc0 != 0) {
          temp_v4 = (int)&param_2->field_0xc0 + param_2->field_0xc0;
        }
        else {
          temp_v4 = 0;
        }
        if (temp_v4 == 0) {
          temp_v4 = 0;
        }
        else {
          piVar3 = (int *)(temp_v4 + temp_v8 * 0x10 + 0x28);
          temp_v4 = *piVar3;
          if (temp_v4 != 0) {
            temp_v4 = temp_v4 + (int)piVar3;
          }
        }
        FUN_0014b7a8(param_1,temp_v4,temp_v6 != 0,temp_v6);
        temp_v8 = temp_v8 + 1;
      } while (temp_v8 < temp_v1);
    }
  }
  temp_v3 = ((*param_1 + param_1[1]) - 1U) & ~(param_1[1] - 1U);
  if (temp_v9 != 0) {
    temp_v4 = ((temp_v3 + param_1[1] + 0x13) & ~(param_1[1] - 1U)) + temp_v9 * 4;
    *param_1 = temp_v4;
    temp_v4 = (((temp_v4 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + 0x14;
    *param_1 = temp_v4;
    temp_v4 = temp_v9 * 4 + (((temp_v4 + param_1[1]) - 1U) & ~(param_1[1] - 1U));
  }
  else {
    temp_v4 = temp_v3 + 0x14;
    *param_1 = temp_v4;
    temp_v4 = (((temp_v4 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + 0x14;
  }
  *param_1 = temp_v4;
  if ((int)(temp_v5 << 0x10) >> 0x18 != 0) {
    temp_v8 = param_2->field_0x28;
    temp_v4 = 0;
    if (temp_v4 < temp_v8) {
      do {
        if (param_2->field_0x2c != 0) {
          temp_v1 = (int)&param_2->field_0x2c + param_2->field_0x2c;
        }
        else {
          temp_v1 = 0;
        }
        if (temp_v1 == 0) {
          temp_v1 = 0;
        }
        else {
          piVar3 = (int *)(temp_v1 + temp_v4 * 0x10 + 0x28);
          temp_v1 = *piVar3;
          if (temp_v1 != 0) {
            temp_v1 = temp_v1 + (int)piVar3;
          }
        }
        if (*(int *)(temp_v1 + 0xc) == 2 || *(int *)(temp_v1 + 0xc) == 3) {
          *param_1 = (((*param_1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + 0x68;
          nw_gfx_AnimGroup_GetMemorySizeForInitialize(param_1,temp_v1,1);
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < temp_v8);
    }
  }
  if (temp_v10 == 0) {
    *param_1 = (((*param_1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + 8;
  }
  temp_v4 = (((*param_1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + param_3[7] * 4;
  *param_1 = temp_v4;
  *param_1 = (((temp_v4 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + param_3[7] * 4;
  return;
}
