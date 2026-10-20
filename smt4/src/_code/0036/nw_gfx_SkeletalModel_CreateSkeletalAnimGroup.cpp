/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_SkeletalModel_CreateSkeletalAnimGroup` (_code @ 0x3653dc, 0x3a4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002367c0(...);
int libc_strlen(...);
int nw_gfx_SkeletalModel_SetupAnimGroup(...);
int nw_ut_ResDicPatricia_Get(...);

typedef struct fn_003653dc_arg0 fn_003653dc_arg0;
typedef struct fn_003653dc_arg0_p8 fn_003653dc_arg0_p8;
struct fn_003653dc_arg0 {
    unsigned char pad_0x0[0x1];
    unsigned char field_0x1; /* +0x1 */
    unsigned char pad_0x2[0x2];
    unsigned char field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x3];
    fn_003653dc_arg0_p8 *field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x1];
    unsigned char field_0xd; /* +0xd */
    unsigned char pad_0xe[0x1a];
    int field_0x28; /* +0x28 */
    unsigned char field_0x2c; /* +0x2c */
    unsigned char pad_0x2d[0xb3];
    unsigned char field_0xe0; /* +0xe0 */
    unsigned char pad_0xe1[0x13f];
    void *field_0x220; /* +0x220 */
};
struct fn_003653dc_arg0_p8 {
    unsigned char pad_0x0[0x1];
    unsigned char field_0x1; /* +0x1 */
    unsigned char pad_0x2[0x2];
    unsigned char field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x3];
    unsigned char field_0x8; /* +0x8 */
    unsigned char pad_0x9[0x4];
    unsigned char field_0xd; /* +0xd */
    unsigned char pad_0xe[0x1a];
    undefined4 field_0x28; /* +0x28 */
    undefined4 field_0x2c; /* +0x2c */
    unsigned char pad_0x30[0xb0];
    undefined4 field_0xe0; /* +0xe0 */
};

typedef int romwright_code(...);
/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

/* Supplied declaration required: FUN_002367c0. */
extern unsigned int *FUN_002375a0(int, int, fn_003653dc_arg0 *, int *);
/* Supplied declaration required: libc_strlen. */
/* Supplied declaration required: nw_gfx_SkeletalModel_SetupAnimGroup. */
/* Supplied declaration required: nw_ut_ResDicPatricia_Get. */


int nw_gfx_SkeletalModel_CreateSkeletalAnimGroup(fn_003653dc_arg0 *param_1,int *param_2)

{
/* irregular: 4 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  int temp_v0;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  fn_003653dc_arg0_p8 *pfVar12;
  fn_003653dc_arg0_p8 *pfVar13;
  int **ppiVar14;
  int unaff_r11;
  int temp_v7;
  int temp_v8;
  int *temp_v9;
  
  temp_v7 = 0;
  temp_v2 = param_1->field_0x28;
  if (temp_v2 == 0) {
    return 0;
  }
  pfVar12 = param_1->field_0x8;
  temp_v3 = pfVar12->field_0xe0;
  if (temp_v3 != 0) {
    unaff_r11 = (int)&pfVar12->field_0xe0 + temp_v3;
  }
  if (temp_v3 == 0) {
    unaff_r11 = 0;
  }
  (**(romwright_code **)(*(int *)param_1->field_0x220 + 0xc))();
  piVar1 = (int *)(**(romwright_code **)(*(int *)param_1->field_0x220 + 0x2c))();
  pfVar13 = (fn_003653dc_arg0_p8 *)0x0;
  if ((int)pfVar12->field_0x28 < 1) {
    return 0;
  }
  while( 1 ) {
    if (pfVar12->field_0x2c != 0) {
      temp_v3 = (int)&pfVar12->field_0x2c + pfVar12->field_0x2c;
    }
    else {
      temp_v3 = 0;
    }
    if (temp_v3 == 0) {
      temp_v3 = 0;
    }
    else {
      piVar2 = (int *)(temp_v3 + (int)pfVar13 * 0x10 + 0x28);
      temp_v3 = *piVar2;
      if (temp_v3 != 0) {
        temp_v3 = temp_v3 + (int)piVar2;
      }
      else {
        temp_v3 = 0;
      }
    }
    if (((*(unsigned int *)(temp_v3 + 4) & 1) != 0) && (*(int *)(temp_v3 + 0xc) == 1)) break;
    pfVar13 = (fn_003653dc_arg0_p8 *)&pfVar13->field_0x1;
    if ((int)pfVar12->field_0x28 <= (int)pfVar13) {
      return 0;
    }
  }
  ppiVar14 = (int **)0x1;
  temp_v0 = (**(romwright_code **)(*param_2 + 8))(param_2,0x68,4);
  if (temp_v0 != 0) {
    puVar4 = (unsigned int *)FUN_002375a0(temp_v0,temp_v3,param_1,param_2);
    puVar5 = puVar4;
    FUN_002367c0(puVar4,1);
    if ((int)puVar5 >= 0) {
      if (puVar4 == (unsigned int *)0x0) {
        temp_v7 = -0x80000000;
      }
    }
    else {
      if (puVar4 != (unsigned int *)0x0) {
        (**(romwright_code **)*puVar4)(puVar4);
        (**(romwright_code **)(*(int *)puVar4[1] + 0xc))((int *)puVar4[1],puVar4);
      }
      puVar4 = (unsigned int *)0x0;
      temp_v7 = -0x80000000;
    }
  }
  else {
    puVar4 = (unsigned int *)0x0;
    temp_v7 = -0x80000000;
  }
  if (temp_v7 < 0) {
    return temp_v7;
  }
  temp_v3 = 0;
  temp_v0 = *(int *)(puVar4[2] + 0x10);
  if (0 < temp_v0) {
    do {
      temp_v4 = *(int *)(puVar4[2] + 0x14);
      if (temp_v4 != 0) {
        temp_v4 = puVar4[2] + 0x14 + temp_v4;
      }
      else {
        temp_v4 = 0;
      }
      if (temp_v4 != 0) {
        piVar2 = (int *)(temp_v4 + temp_v3 * 0x10 + 0x28);
        temp_v4 = *piVar2;
        if (temp_v4 != 0) {
          temp_v4 = temp_v4 + (int)piVar2;
        }
        else {
          temp_v4 = 0;
        }
      }
      else {
        temp_v4 = 0;
      }
      temp_v5 = *(int *)(temp_v4 + 4);
      if (temp_v5 != 0) {
        ppiVar14 = (int **)(temp_v5 + temp_v4 + 4);
      }
      if (temp_v5 == 0) {
        ppiVar14 = (int **)0x0;
      }
      if (*(int *)(unaff_r11 + 0x1c) != 0) {
        temp_v8 = unaff_r11 + 0x1c + *(int *)(unaff_r11 + 0x1c);
      }
      else {
        temp_v8 = 0;
      }
      temp_v9 = &temp_v8;
      if (!(temp_v8 == 0 || ppiVar14 == (int **)0x0)) {
        temp_v1 = libc_strlen(ppiVar14);
        temp_v5 = nw_ut_ResDicPatricia_Get(temp_v9,ppiVar14,temp_v1);
        if (temp_v5 != 0) {
          temp_v6 = *(int *)(temp_v5 + 0xc);
          if (temp_v6 != 0) {
            temp_v6 = temp_v5 + 0xc + temp_v6;
          }
          else {
            temp_v6 = 0;
          }
        }
        else {
          temp_v6 = 0;
        }
      }
      else {
        temp_v6 = 0;
      }
      temp_v5 = *(int *)(temp_v6 + 8);
      *(int *)(puVar4[9] + temp_v3 * 4) = temp_v5;
      temp_v6 = *(int *)(*piVar1 + 0x1c);
      if (temp_v6 != 0) {
        temp_v6 = *piVar1 + 0x1c + temp_v6;
      }
      else {
        temp_v6 = 0;
      }
      if (temp_v6 != 0) {
        piVar2 = (int *)(temp_v6 + temp_v5 * 0x10 + 0x28);
        temp_v5 = *piVar2;
        if (temp_v5 != 0) {
          temp_v5 = (int)piVar2 + temp_v5;
        }
        else {
          temp_v5 = 0;
        }
      }
      else {
        temp_v5 = 0;
      }
      *(int *)(puVar4[0x15] + temp_v3 * 4) = temp_v5 + 0x20;
      if (*(int *)(temp_v4 + 0x10) != 0) {
        temp_v4 = 0;
      }
      else {
        piVar2 = (int *)(temp_v4 + 0x1c);
        temp_v4 = *piVar2;
        if (temp_v4 != 0) {
          piVar2 = (int *)((int)piVar2 + temp_v4);
        }
        pfVar12 = param_1->field_0x8;
        if (temp_v4 == 0) {
          piVar2 = (int *)0x0;
        }
        if ((pfVar12 != (fn_003653dc_arg0_p8 *)0x0) && ((~*(unsigned int *)pfVar12 & 0x40000092) != 0)) {
          pfVar12 = (fn_003653dc_arg0_p8 *)0x0;
        }
        ppiVar14 = &temp_v9;
        temp_v4 = pfVar12->field_0xe0;
        if (temp_v4 != 0) {
          temp_v4 = (int)&pfVar12->field_0xe0 + temp_v4;
        }
        else {
          temp_v4 = 0;
        }
        temp_v5 = *(int *)(temp_v4 + 0x1c);
        if (temp_v5 != 0) {
          temp_v9 = (int *)(temp_v4 + 0x1c + temp_v5);
        }
        else {
          temp_v9 = (int *)0x0;
        }
        if (!(temp_v9 == (int *)0x0 || piVar2 == (int *)0x0)) {
          temp_v1 = libc_strlen(piVar2);
          temp_v4 = nw_ut_ResDicPatricia_Get(ppiVar14,piVar2,temp_v1);
          if (temp_v4 != 0) {
            temp_v5 = *(int *)(temp_v4 + 0xc);
            if (temp_v5 != 0) {
              temp_v5 = temp_v4 + 0xc + temp_v5;
            }
            else {
              temp_v5 = 0;
            }
          }
          else {
            temp_v5 = 0;
          }
        }
        else {
          temp_v5 = 0;
        }
        temp_v5 = *(int *)(temp_v5 + 8);
        temp_v4 = (**(romwright_code **)(*(int *)param_1->field_0x220 + 0xc))();
        temp_v4 = *(int *)(temp_v4 + 4) + temp_v5 * 0x40;
      }
      *(int *)(puVar4[0xd] + temp_v3 * 4) = temp_v4;
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < temp_v0);
  }
  *(unsigned int **)(*(int *)(temp_v2 + 0xc) + (int)pfVar13 * 4) = puVar4;
  *(unsigned int **)&param_1[1].field_0x4 = puVar4;
  param_1[1].field_0x8 = pfVar13;
  nw_gfx_SkeletalModel_SetupAnimGroup(param_1,puVar4,(int)(char)param_1[1].field_0xd);
  return temp_v7;
}

} /* extern "C" */
