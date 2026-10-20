/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_Model_GetMemorySizeForInitialize` (_code @ 0x12e47c, 0x304 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014b7a8(...);
int nw_gfx_AnimGroup_GetMemorySizeForInitialize(...);
int nw_gfx_TransformNode_GetMemorySizeForInitialize(...);

typedef struct fn_0012e47c_arg1 fn_0012e47c_arg1;
struct fn_0012e47c_arg1 {
    unsigned char pad_0x0[0x28];
    int field_0x28; /* +0x28 */
    int field_0x2c; /* +0x2c */
    unsigned char pad_0x30[0x84];
    int field_0xb4; /* +0xb4 */
    unsigned char pad_0xb8[0x4];
    int field_0xbc; /* +0xbc */
    int field_0xc0; /* +0xc0 */
    unsigned char pad_0xc4[0x8];
    int field_0xcc; /* +0xcc */
};

/* stack frame of param_8: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_8_stack;

/* Supplied declaration required: FUN_0014b7a8. */
/* Supplied declaration required: nw_gfx_AnimGroup_GetMemorySizeForInitialize. */
/* Supplied declaration required: nw_gfx_TransformNode_GetMemorySizeForInitialize. */


void nw_gfx_Model_GetMemorySizeForInitialize
               (int *param_1,fn_0012e47c_arg1 *param_2,int param_3,int param_4,unsigned int param_5,
               unsigned int param_6,int param_7,int param_8)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  unsigned int temp_v2;
  int temp_v3;
  
  nw_gfx_TransformNode_GetMemorySizeForInitialize(param_1,param_2,param_3,param_4,param_5,param_6);
  temp_v0 = param_2->field_0xb4;
  temp_v0 = ((((((temp_v0 + (((((((((*param_1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + temp_v0 * 4 +
                             param_1[1]) - 1) & ~(param_1[1] - 1U)) + temp_v0 * 0x88 + param_1[1]) - 1
                         ) & ~(param_1[1] - 1U)) + param_1[1]) - 1) & ~(param_1[1] - 1U)) +
             param_2->field_0xcc * 8 + param_1[1]) - 1) & ~(param_1[1] - 1U)) + param_2->field_0xcc;
  *param_1 = temp_v0;
  if (param_8 != 0) {
    *param_1 = (((temp_v0 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) +
               ((*(int *)(param_8 + 0x168) - *(int *)(param_8 + 0x164)) >> 2) * 4;
  }
  else {
    temp_v1 = param_2->field_0xbc;
    temp_v2 = (unsigned int)(param_7 != 0);
    temp_v3 = 0;
    *param_1 = (((temp_v0 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + temp_v1 * 4;
    if (0 < temp_v1) {
      do {
        if (param_2->field_0xc0 != 0) {
          temp_v0 = (int)&param_2->field_0xc0 + param_2->field_0xc0;
        }
        else {
          temp_v0 = 0;
        }
        if (temp_v0 == 0) {
          temp_v0 = 0;
        }
        else {
          piVar3 = (int *)(temp_v0 + temp_v3 * 0x10 + 0x28);
          temp_v0 = *piVar3;
          if (temp_v0 != 0) {
            temp_v0 = temp_v0 + (int)piVar3;
          }
          else {
            temp_v0 = 0;
          }
        }
        FUN_0014b7a8(param_1,temp_v0,temp_v2,param_7);
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < temp_v1);
    }
  }
  temp_v0 = (((*param_1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + 0x14;
  *param_1 = temp_v0;
  if (param_4 != 0) {
    temp_v0 = ((((((temp_v0 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + param_4 * 4 + param_1[1]) - 1) &
            ~(param_1[1] - 1U)) + 0x14;
    *param_1 = temp_v0;
    temp_v0 = (((temp_v0 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + param_4 * 4;
  }
  else {
    temp_v0 = (((temp_v0 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + 0x14;
  }
  *param_1 = temp_v0;
  if ((param_3 << 0x10) >> 0x18 != 0) {
    temp_v3 = param_2->field_0x28;
    temp_v0 = 0;
    if (temp_v0 < temp_v3) {
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
          piVar3 = (int *)(temp_v1 + temp_v0 * 0x10 + 0x28);
          temp_v1 = *piVar3;
          if (temp_v1 != 0) {
            temp_v1 = temp_v1 + (int)piVar3;
          }
          else {
            temp_v1 = 0;
          }
        }
        if (*(int *)(temp_v1 + 0xc) == 2 || *(int *)(temp_v1 + 0xc) == 3) {
          *param_1 = (((*param_1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + 0x68;
          nw_gfx_AnimGroup_GetMemorySizeForInitialize(param_1,temp_v1,1);
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < temp_v3);
    }
  }
  if (param_8 == 0) {
    *param_1 = (((*param_1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + 8;
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
