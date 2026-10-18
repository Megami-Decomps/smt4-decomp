/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00377080` (_code @ 0x377080, 0x1ec bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00377080_arg1 fn_00377080_arg1;
struct fn_00377080_arg1 {
    unsigned char pad_0x0[0xc];
    uint field_0xc; /* +0xc */
    void *field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x8];
    int field_0x1c; /* +0x1c */
    unsigned char pad_0x20[0x8];
    float field_0x28; /* +0x28 */
};

/* stack frame of param_6: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} param_6_stack;

/* Supplied declaration required: FUN_00377924. */
/* Supplied declaration required: FUN_00377968. */
/* Supplied declaration required: FUN_00377a28. */
/* Supplied declaration required: FUN_00377a8c. */


void FUN_00377080(int param_1,fn_00377080_arg1 *param_2,float *param_3,unsigned int param_4,
                 unsigned int param_5,float *param_6)

{
/* irregular: 4 native warning(s); review required */
  float *pfVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  float temp_v0;
  float **ppfVar5;
  unsigned int **temp_v1;
  float *temp_v2 [2];
  unsigned int *temp_v3 [3];
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  unsigned int *temp_v8 [4];
  
  if ((param_5 & 1) != 0) {
    *param_6 = 0.0f;
  }
  if ((param_5 & 2) != 0) {
    param_6[8] = (float)-param_2->field_0x1c;
  }
  if ((param_5 & 0x10) != 0) {
    param_6[6] = 0.0f;
  }
  if (param_2->field_0xc >= 2) {
    param_5 = param_5 & 0xffffffd3;
  }
  puVar2 = param_2->field_0x10;
  if ((void **)puVar2 != &param_2->field_0x10) {
    do {
      puVar3 = puVar2 + -0x19;
      if ((param_5 & 0x33) != 0) {
        temp_v4 = *param_3 - (float)puVar2[-0xd];
        temp_v5 = param_3[1] - (float)puVar2[-0xc];
        temp_v6 = param_3[2] - (float)puVar2[-0xb];
      }
      if ((param_5 & 3) != 0) {
        temp_v1 = (unsigned int **)temp_v2;
        FUN_00377968(param_2,puVar3,param_3,&temp_v7);
        if ((param_5 & 1) != 0) {
          temp_v0 = *param_6;
          if (*param_6 <= temp_v7) {
            temp_v0 = temp_v7;
          }
          *param_6 = temp_v0;
        }
        if ((param_5 & 2) != 0) {
          pfVar1 = (float *)param_6[8];
          if ((int)param_6[8] <= (int)temp_v2[0]) {
            pfVar1 = temp_v2[0];
          }
          param_6[8] = (float)pfVar1;
        }
      }
      if ((param_5 & 0xc) != 0) {
        temp_v2[0] = &temp_v7;
        temp_v1 = temp_v3;
        FUN_00377a28(param_2,puVar3,param_3,param_1 + 4);
        if ((param_5 & 4) != 0) {
          param_6[2] = (float)temp_v3[0];
        }
        if ((param_5 & 8) != 0) {
          param_6[3] = temp_v7;
        }
      }
      if ((param_5 & 0x20) != 0) {
        temp_v1 = temp_v8;
        FUN_00377a8c(param_2,puVar3,param_3,&temp_v4);
        param_6[1] = (float)temp_v8[0];
      }
      if ((param_5 & 0x10) != 0) {
        FUN_00377924(param_2,puVar3,param_3,&temp_v1);
        param_6[7] = param_2->field_0x28;
        ppfVar5 = (float **)temp_v1;
        if ((float)temp_v1 < param_6[6]) {
          ppfVar5 = (float **)param_6[6];
        }
        param_6[6] = (float)ppfVar5;
      }
      puVar2 = (unsigned int *)*puVar2;
    } while ((void **)puVar2 != &param_2->field_0x10);
  }
  return;
}
