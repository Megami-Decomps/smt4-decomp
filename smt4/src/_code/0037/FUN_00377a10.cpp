/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00377a10` (_code @ 0x377a10, 0x188 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b4ee4(...);
int FUN_003795b0(...);
int FUN_0037bf4c(...);
int FUN_00380444(...);
int FUN_0038048c(...);
int FUN_00380594(...);
int FUN_003806a0(...);
int VectorSignedToFloat(...);
int nw_snd_internal_BasicSound_SetInitialVolume(...);

typedef struct fn_00377a10_arg1 fn_00377a10_arg1;
struct fn_00377a10_arg1 {
    int field_0x0; /* +0x0 */
    int field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x94];
    undefined4 field_0x9c; /* +0x9c */
};

/* stack frame of param_6: 9 slot(s), 33 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned char sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_6_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002b4ee4. */
/* Supplied declaration required: FUN_003795b0. */
/* Supplied declaration required: FUN_0037bf4c. */
/* Supplied declaration required: FUN_00380444. */
/* Supplied declaration required: FUN_0038048c. */
/* Supplied declaration required: FUN_00380594. */
/* Supplied declaration required: FUN_003806a0. */
extern int vcallSlot5(unsigned int, unsigned int);
/* Supplied declaration required: nw_snd_internal_BasicSound_SetInitialVolume. */


void FUN_00377a10(int param_1,fn_00377a10_arg1 *param_2,unsigned int *param_3,unsigned int *param_4,
                 int param_5,unsigned int param_6)

{
/* irregular: irregular input(s): in_fpscr; 9 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int in_fpscr;
  int temp_v5;
  unsigned char temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  int iStack_34;
  int temp_v11;
  unsigned int temp_v12;
  unsigned int *temp_v13;
  
  temp_v0 = 0;
  temp_v4 = param_2->field_0x4;
  temp_v10 = 0xffffffff;
  iStack_34 = 0;
  temp_v1 = vcallSlot5(*(unsigned int *)(param_1 + 0xbc),*param_3);
  temp_v10 = param_2->field_0x9c;
  temp_v3 = 0;
  iStack_34 = temp_v1;
  if (temp_v1 != 0) {
    temp_v2 = *(int *)(param_1 + 0xbc);
    if (temp_v2 != 0) {
      temp_v2 = temp_v2 + 0xc;
    }
    temp_v3 = temp_v1;
    FUN_0037bf4c(temp_v1,*param_4,*(unsigned int *)(param_1 + 4),temp_v2);
    if (temp_v3 == 0) {
      if (temp_v4 == 0) {
        return;
      }
      temp_v0 = 1;
    }
  }
  else {
    if (temp_v4 == 0) {
      return;
    }
    temp_v0 = 1;
  }
  if (param_5 == 0) {
    temp_v6 = 1;
  }
  else if ((param_5 != 1) && (param_5 == 2)) {
    temp_v6 = 0;
  }
  else {
    temp_v6 = 0;
    param_6 = 0;
  }
  temp_v5 = *param_4;
  temp_v8 = param_1 + 0x10;
  temp_v9 = *param_3;
  temp_v7 = param_6;
  if (temp_v0) {
    temp_v11 = *(unsigned int *)(param_1 + 4);
    temp_v12 = *(unsigned int *)(param_1 + 0xbc);
    temp_v13 = (unsigned int *)&temp_v10;
    FUN_0038048c(param_2,&temp_v11,&temp_v5);
  }
  else {
    FUN_003806a0(param_2,temp_v1,temp_v3,&temp_v5);
  }
  VectorSignedToFloat(param_3[4],(unsigned char)(in_fpscr >> 0x16) & 3);
  nw_snd_internal_BasicSound_SetInitialVolume(param_2);
  FUN_003795b0(param_2,*(unsigned char *)(param_3 + 5));
  FUN_002b4ee4(param_2,*(unsigned char *)((int)param_3 + 0x15));
  FUN_00380444(param_2,*(unsigned char *)(param_4 + 2));
  FUN_00380594(param_2,(int)*(char *)((int)param_4 + 9));
  return;
}

} /* extern "C" */
