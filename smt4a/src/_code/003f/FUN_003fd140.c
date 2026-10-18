/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fd140` (_code @ 0x3fd140, 0x308 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003fd140_arg0 fn_003fd140_arg0;
struct fn_003fd140_arg0 {
    unsigned char pad_0x0[0x10];
    void *field_0x10; /* +0x10 */
    unsigned char pad_0x14[0xc];
    int field_0x20; /* +0x20 */
    int field_0x24; /* +0x24 */
};

/* stack frame of param_7: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} param_7_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Supplied declaration required: FUN_003fad14. */
/* Supplied declaration required: FUN_004ff058. */


void FUN_003fd140(fn_003fd140_arg0 *param_1,int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,int param_6,unsigned int param_7)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr, in_s0; 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  unsigned char temp_v12;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  fn_003fd140_arg0 *pfStack_34;
  int iStack_30;
  unsigned int temp_v19;
  unsigned int uStack_28;
  
  if (param_2 < (int)(unsigned int)*(unsigned short *)((int)param_1->field_0x10 + 0xe)) {
    temp_v4 = (unsigned int)*(unsigned short *)(param_1->field_0x24 + param_2 * 4);
    temp_v11 = (unsigned int)*(unsigned short *)(param_1->field_0x24 + param_2 * 4 + 2) + (temp_v4 - 1);
    if ((int)temp_v4 < temp_v11 + 1) {
      temp_v9 = param_1->field_0x20;
      temp_v6 = temp_v4;
      do {
        temp_v13 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v9 + temp_v6 * 0x18 + 4),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v0 = in_fpscr & 0xfffffff;
        in_fpscr = temp_v0 | ((unsigned int)(in_s0 == temp_v13) << 0x1e) | ((unsigned int)(temp_v13 <= in_s0) << 0x1d);
        temp_v1 = (unsigned char)(in_fpscr >> 0x18);
        if (!(unsigned char)((temp_v1 >> 5) & 1) || (unsigned char)(temp_v1 >> 6)) {
          temp_v2 = *(int *)(temp_v9 + temp_v6 * 0x18 + 4);
          temp_v13 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v0 = temp_v0 | ((unsigned int)(temp_v13 == in_s0) << 0x1e);
          temp_v12 = romwright_subpiece_4_1_0(temp_v0 >> 0x1e,0);
          if (!temp_v12) {
            temp_v12 = temp_v4 == temp_v6;
          }
          if (temp_v12) {
            temp_v3 = *(int *)(temp_v9 + temp_v6 * 0x18);
            temp_v17 = *(float *)(temp_v9 + temp_v6 * 0x18 + 8);
            temp_v18 = *(float *)(temp_v6 * 0x18 + 0xc + temp_v9);
            temp_v15 = *(float *)(param_1->field_0x20 + temp_v6 * 0x18 + 0x10);
            temp_v16 = *(float *)(param_1->field_0x20 + temp_v6 * 0x18 + 0x14);
          }
          else {
            temp_v7 = *(int *)(temp_v9 + (temp_v6 * 0x18 - 0x14));
            temp_v5 = temp_v6 * 0x18 - 0x10;
            temp_v14 = (float)VectorSignedToFloat(temp_v7,(unsigned char)(temp_v0 >> 0x16) & 3);
            temp_v3 = *(int *)(temp_v9 + (temp_v6 * 0x18 - 0x18));
            temp_v8 = temp_v6 * 0x18 - 0xc;
            temp_v13 = (float)VectorSignedToFloat(temp_v2 - temp_v7,(unsigned char)(temp_v0 >> 0x16) & 3);
            temp_v2 = temp_v6 * 0x18 - 8;
            temp_v13 = (in_s0 - temp_v14) / temp_v13;
            temp_v7 = temp_v6 * 0x18 - 4;
            temp_v10 = param_1->field_0x20;
            temp_v17 = *(float *)(temp_v5 + param_1->field_0x20) +
                       temp_v13 * (*(float *)(temp_v6 * 0x18 + 8 + temp_v9) - *(float *)(temp_v9 + temp_v5))
            ;
            temp_v18 = *(float *)(param_1->field_0x20 + temp_v8) +
                       temp_v13 * (*(float *)(temp_v6 * 0x18 + 0xc + temp_v9) -
                                *(float *)(temp_v9 + temp_v8));
            temp_v15 = *(float *)(param_1->field_0x20 + temp_v2) +
                       temp_v13 * (*(float *)(temp_v6 * 0x18 + 0x10 + temp_v10) -
                                *(float *)(temp_v10 + temp_v2));
            temp_v16 = *(float *)(param_1->field_0x20 + temp_v7) +
                       temp_v13 * (*(float *)(temp_v6 * 0x18 + 0x14 + temp_v10) -
                                *(float *)(temp_v10 + temp_v7));
          }
          if (-1 < temp_v3) goto LAB_003fd3d0;
          break;
        }
        temp_v6 = temp_v6 + 1;
      } while ((int)temp_v6 < temp_v11 + 1);
    }
    temp_v9 = param_1->field_0x20;
    temp_v17 = *(float *)(temp_v9 + temp_v11 * 0x18 + 8);
    temp_v3 = *(int *)(temp_v9 + temp_v11 * 0x18);
    temp_v18 = *(float *)(temp_v11 * 0x18 + 0xc + temp_v9);
    temp_v15 = *(float *)(param_1->field_0x20 + temp_v11 * 0x18 + 0x10);
    temp_v16 = *(float *)(param_1->field_0x20 + temp_v11 * 0x18 + 0x14);
LAB_003fd3d0:
    temp_v15 = temp_v15 * 0.01f;
    temp_v16 = temp_v16 * 0.01f;
    pfStack_34 = param_1;
    iStack_30 = param_2;
    temp_v19 = param_3;
    uStack_28 = param_4;
    if (param_6 == 0) {
      FUN_004ff058(param_1,temp_v3,param_3,param_4,param_5);
      return;
    }
    FUN_003fad14(param_1,temp_v3,param_3,param_4,param_5,&temp_v17,&temp_v15,param_7);
  }
  return;
}
