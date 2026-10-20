/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00344158` (_code @ 0x344158, 0x4a0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023cc00(...);
int FUN_0023cd08(unsigned int *, int, int);
int FUN_00282924(unsigned int *, int);
int FUN_0028a0d0(...);
int FUN_00296d6c(int, int);
int FUN_003adb34(void);
int VectorSignedToFloat(...);

typedef struct fn_00344158_arg1 fn_00344158_arg1;
struct fn_00344158_arg1 {
    unsigned char pad_0x0[0x2];
    undefined2 field_0x2; /* +0x2 */
    unsigned char field_0x4; /* +0x4 */
    byte field_0x5; /* +0x5 */
    unsigned char pad_0x6[0xe];
    void *field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x4];
    unsigned char field_0x1c; /* +0x1c */
    unsigned char pad_0x1d[0x3];
    char field_0x20; /* +0x20 */
    unsigned char pad_0x21[0x1];
    byte field_0x22; /* +0x22 */
    unsigned char pad_0x23[0x1];
    short field_0x24; /* +0x24 */
    short field_0x26; /* +0x26 */
    int field_0x28; /* +0x28 */
    unsigned char pad_0x2c[0x18];
    byte field_0x44; /* +0x44 */
};

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_2_stack;

extern short DAT_00439a50; /* 0x439a50 */
extern short DAT_00439a52; /* 0x439a52 */
extern short DAT_00439a54; /* 0x439a54 */
extern short DAT_00439a56; /* 0x439a56 */
extern short DAT_00439a58; /* 0x439a58 */
extern short DAT_00439a5a; /* 0x439a5a */
extern short DAT_00439a5c; /* 0x439a5c */
extern short DAT_00439a5e; /* 0x439a5e */
extern short DAT_00439a60; /* 0x439a60 */
extern short DAT_00439a62; /* 0x439a62 */
extern short DAT_00439a64; /* 0x439a64 */
extern short DAT_00439a66; /* 0x439a66 */
extern short DAT_00439a68; /* 0x439a68 */
extern short DAT_00439a6a; /* 0x439a6a */
extern short DAT_00439a6c; /* 0x439a6c */
extern short DAT_00439a6e; /* 0x439a6e */
extern int DAT_00439ca8; /* 0x439ca8 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0023cc00. */
/* Supplied declaration required: FUN_0023cd08. */
/* Supplied declaration required: FUN_00282924. */
/* Supplied declaration required: FUN_0028a0d0. */
extern unsigned int *FUN_002939f4(void);
/* Supplied declaration required: FUN_00296d6c. */
/* Supplied declaration required: FUN_003adb34. */


void FUN_00344158(unsigned int param_1,fn_00344158_arg1 *param_2)

{
/* irregular: irregular input(s): in_fpscr; 7 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int in_fpscr;
  float temp_v8;
  float temp_v9;
  unsigned int temp_v10;
  
  puVar3 = (unsigned int *)FUN_002939f4();
  puVar4 = puVar3;
  FUN_00282924(puVar3,(int)*(short *)((int)param_2->field_0x14 + 0x62));
  if (puVar4 == (unsigned int *)0x0) {
    param_2->field_0x2 = 0;
    return;
  }
  if (param_2->field_0x20 != '\0') {
    if ((param_2->field_0x20 == '\x01') &&
       ((param_2->field_0x26 < 0 || (temp_v4 = DAT_00439ca8, FUN_003adb34(), temp_v4 == 0)))) {
      param_2->field_0x2 = 0;
      return;
    }
  }
  else {
    temp_v2 = *puVar4;
    if ((temp_v2 & 0x10) != 0) {
      FUN_0023cd08(puVar3,(int)*(short *)((int)param_2->field_0x14 + 0x62),0);
      if (0 < param_2->field_0x24) {
        temp_v9 = 0.01f;
        temp_v10 = 0;
        if ((*puVar4 & 0x100) != 0) {
          temp_v3 = FUN_00296d6c((int)DAT_00439a58,(int)DAT_00439a5a);
          temp_v8 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
          *(float *)((int)param_2->field_0x14 + 0x30) = temp_v8 * temp_v9;
          temp_v3 = FUN_00296d6c((int)DAT_00439a5c,(int)DAT_00439a5e);
          temp_v8 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
          *(float *)((int)param_2->field_0x14 + 0x34) = temp_v8 * temp_v9;
          *(unsigned int *)((int)param_2->field_0x14 + 0x38) = temp_v10;
        }
        else {
          temp_v3 = FUN_00296d6c((int)DAT_00439a50,(int)DAT_00439a52);
          temp_v8 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
          *(float *)((int)param_2->field_0x14 + 0x30) = temp_v8 * temp_v9;
          temp_v3 = FUN_00296d6c((int)DAT_00439a54,(int)DAT_00439a56);
          temp_v8 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
          *(float *)((int)param_2->field_0x14 + 0x34) = temp_v8 * temp_v9;
          *(unsigned int *)((int)param_2->field_0x14 + 0x38) = temp_v10;
        }
      }
      temp_v4 = param_2->field_0x28;
      if ((temp_v4 != 0) && (temp_v4 != 2)) {
        if ((temp_v4 != 1) && (temp_v4 != 3)) {
          if (temp_v4 == 4) {
            temp_v10 = 0;
          }
          else {
            if (temp_v4 != 5) {
              param_2->field_0x2 = 0;
              return;
            }
            temp_v10 = 1;
          }
          temp_v4 = DAT_00439ca8;
          FUN_0028a0d0(DAT_00439ca8,*(unsigned int *)&param_2[1].field_0x4,temp_v10,0,
                       param_2->field_0x44 != 0,1);
          param_2->field_0x26 = (short)temp_v4;
          temp_v4 = DAT_00439ca8;
          FUN_0028a0d0(DAT_00439ca8,*(unsigned int *)&param_2->field_0x1c,temp_v10,1,
                       param_2->field_0x44 != 0,1);
          param_2->field_0x26 = (short)temp_v4;
        }
        else {
          temp_v4 = DAT_00439ca8;
          FUN_0028a0d0(DAT_00439ca8,*(unsigned int *)&param_2[1].field_0x4);
          param_2->field_0x26 = (short)temp_v4;
        }
      }
      else {
        temp_v4 = DAT_00439ca8;
        FUN_0028a0d0(DAT_00439ca8,*(unsigned int *)&param_2[1].field_0x4);
        param_2->field_0x26 = (short)temp_v4;
      }
    }
    else {
      if ((temp_v2 & 0x2a) == 0) {
        param_2->field_0x2 = 0;
        return;
      }
      temp_v4 = (int)*(short *)((int)puVar4 + 0x6e);
      if ((temp_v2 & 0x20) != 0) {
        temp_v4 = 4;
      }
      temp_v6 = 0;
      temp_v7 = 0;
      if (0 < param_2->field_0x24) {
        if (temp_v4 != 4) {
          temp_v0 = FUN_00296d6c((int)DAT_00439a60,(int)DAT_00439a62);
          temp_v1 = FUN_00296d6c((int)DAT_00439a64,(int)DAT_00439a66);
        }
        else {
          temp_v0 = FUN_00296d6c((int)DAT_00439a68,(int)DAT_00439a6a);
          temp_v1 = FUN_00296d6c((int)DAT_00439a6c,(int)DAT_00439a6e);
        }
        temp_v7 = (int)temp_v1;
        temp_v6 = (int)temp_v0;
        temp_v10 = VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v3 = VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)((int)param_2->field_0x14 + 0x30) = temp_v10;
        *(unsigned int *)((int)param_2->field_0x14 + 0x34) = temp_v3;
      }
      temp_v5 = param_2->field_0x28;
      if ((temp_v5 != 0) && (temp_v5 != 2)) {
        if ((temp_v5 != 1) && (temp_v5 != 3)) {
          if (temp_v5 == 4) {
            temp_v10 = 0;
          }
          else {
            if (temp_v5 != 5) {
              param_2->field_0x2 = 0;
              return;
            }
            temp_v10 = 1;
          }
          temp_v5 = DAT_00439ca8;
          FUN_0023cc00(DAT_00439ca8,temp_v4,*(unsigned int *)&param_2[1].field_0x4,temp_v10,0,
                       param_2->field_0x44 != 0,temp_v6,temp_v7);
          param_2->field_0x26 = (short)temp_v5;
          temp_v5 = DAT_00439ca8;
          FUN_0023cc00(DAT_00439ca8,temp_v4,*(unsigned int *)&param_2->field_0x1c,temp_v10,1,
                       param_2->field_0x44 != 0,temp_v6,temp_v7);
          param_2->field_0x26 = (short)temp_v5;
        }
        else {
          temp_v6 = DAT_00439ca8;
          FUN_0023cc00(DAT_00439ca8,temp_v4,*(unsigned int *)&param_2[1].field_0x4);
          param_2->field_0x26 = (short)temp_v6;
        }
      }
      else {
        temp_v6 = DAT_00439ca8;
        FUN_0023cc00(DAT_00439ca8,temp_v4,*(unsigned int *)&param_2[1].field_0x4);
        param_2->field_0x26 = (short)temp_v6;
      }
      if (param_2->field_0x22 == 0) {
        param_2->field_0x5 = param_2->field_0x5 | 4;
      }
    }
    param_2->field_0x20 = '\x01';
  }
  param_2->field_0x2 = 1;
  return;
}

} /* extern "C" */
