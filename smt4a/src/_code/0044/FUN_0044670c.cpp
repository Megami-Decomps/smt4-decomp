/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0044670c` (_code @ 0x44670c, 0x3a4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001c3fc8(...);
int wstrlen(...);
int FUN_00458a68(...);
int nw_ut_ResDicPatricia_Get(...);

typedef struct fn_0044670c_arg0 fn_0044670c_arg0;
typedef struct fn_0044670c_arg0_p8 fn_0044670c_arg0_p8;
struct fn_0044670c_arg0 {
    unsigned char pad_0x0[0x1];
    unsigned char field_0x1; /* +0x1 */
    unsigned char pad_0x2[0x2];
    unsigned char field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x3];
    fn_0044670c_arg0_p8 *field_0x8; /* +0x8 */
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
struct fn_0044670c_arg0_p8 {
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

/* Supplied declaration required: FUN_001c3fc8. */
/* Supplied declaration required: wstrlen. */
/* Supplied declaration required: FUN_00458a68. */
extern unsigned int *_ZN9Obj55bcccC1Ejjj(int, int, fn_0044670c_arg0 *, int *);
/* Supplied declaration required: nw_ut_ResDicPatricia_Get. */


int FUN_0044670c(fn_0044670c_arg0 *param_1,int *param_2)

{
/* irregular: 4 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int *piVar12;
  fn_0044670c_arg0_p8 *pfVar13;
  fn_0044670c_arg0_p8 *pfVar14;
  int **ppiVar15;
  int unaff_r11;
  int temp_v8;
  int temp_v9;
  int *temp_v10;
  
  temp_v8 = 0;
  temp_v3 = param_1->field_0x28;
  if (temp_v3 == 0) {
    return 0;
  }
  pfVar13 = param_1->field_0x8;
  temp_v4 = pfVar13->field_0xe0;
  if (temp_v4 != 0) {
    unaff_r11 = (int)&pfVar13->field_0xe0 + temp_v4;
  }
  if (temp_v4 == 0) {
    unaff_r11 = 0;
  }
  (**(romwright_code **)(*(int *)param_1->field_0x220 + 0xc))();
  piVar1 = (int *)(**(romwright_code **)(*(int *)param_1->field_0x220 + 0x2c))();
  pfVar14 = (fn_0044670c_arg0_p8 *)0x0;
  if ((int)pfVar13->field_0x28 < 1) {
    return 0;
  }
  temp_v0 = pfVar13->field_0x2c;
  while( 1 ) {
    if (temp_v0 != 0) {
      temp_v4 = (int)&pfVar13->field_0x2c + temp_v0;
    }
    else {
      temp_v4 = 0;
    }
    if (temp_v4 == 0) {
      temp_v4 = 0;
    }
    else {
      piVar12 = (int *)(temp_v4 + (int)pfVar14 * 0x10 + 0x28);
      temp_v4 = *piVar12;
      if (temp_v4 != 0) {
        temp_v4 = temp_v4 + (int)piVar12;
      }
      else {
        temp_v4 = 0;
      }
    }
    if (((*(unsigned int *)(temp_v4 + 4) & 1) != 0) && (*(int *)(temp_v4 + 0xc) == 1)) break;
    pfVar14 = (fn_0044670c_arg0_p8 *)&pfVar14->field_0x1;
    if ((int)pfVar13->field_0x28 <= (int)pfVar14) {
      return 0;
    }
  }
  ppiVar15 = (int **)((temp_v0 & 0xffffff00) | 1);
  temp_v1 = (**(romwright_code **)(*param_2 + 8))(param_2,0x68,4);
  if (temp_v1 != 0) {
    puVar4 = (unsigned int *)_ZN9Obj55bcccC1Ejjj(temp_v1,temp_v4,param_1,param_2);
    puVar5 = puVar4;
    FUN_00458a68(puVar4,1);
    if ((int)puVar5 >= 0) {
      if (puVar4 == (unsigned int *)0x0) {
        temp_v8 = -0x80000000;
      }
    }
    else {
      if (puVar4 != (unsigned int *)0x0) {
        (**(romwright_code **)*puVar4)(puVar4);
        (**(romwright_code **)(*(int *)puVar4[1] + 0xc))((int *)puVar4[1],puVar4);
      }
      puVar4 = (unsigned int *)0x0;
      temp_v8 = -0x80000000;
    }
  }
  else {
    puVar4 = (unsigned int *)0x0;
    temp_v8 = -0x80000000;
  }
  if (temp_v8 < 0) {
    return temp_v8;
  }
  temp_v4 = 0;
  temp_v1 = *(int *)(puVar4[2] + 0x10);
  if (0 < temp_v1) {
    do {
      temp_v5 = *(int *)(puVar4[2] + 0x14);
      if (temp_v5 != 0) {
        temp_v5 = puVar4[2] + 0x14 + temp_v5;
      }
      else {
        temp_v5 = 0;
      }
      if (temp_v5 != 0) {
        piVar12 = (int *)(temp_v5 + temp_v4 * 0x10 + 0x28);
        temp_v5 = *piVar12;
        if (temp_v5 != 0) {
          temp_v5 = temp_v5 + (int)piVar12;
        }
        else {
          temp_v5 = 0;
        }
      }
      else {
        temp_v5 = 0;
      }
      temp_v6 = *(int *)(temp_v5 + 4);
      if (temp_v6 != 0) {
        ppiVar15 = (int **)(temp_v6 + temp_v5 + 4);
      }
      if (temp_v6 == 0) {
        ppiVar15 = (int **)0x0;
      }
      if (*(int *)(unaff_r11 + 0x1c) != 0) {
        temp_v9 = unaff_r11 + 0x1c + *(int *)(unaff_r11 + 0x1c);
      }
      else {
        temp_v9 = 0;
      }
      temp_v10 = &temp_v9;
      if (!(temp_v9 == 0 || ppiVar15 == (int **)0x0)) {
        temp_v2 = wstrlen(ppiVar15);
        temp_v6 = nw_ut_ResDicPatricia_Get(temp_v10,ppiVar15,temp_v2);
        if (temp_v6 != 0) {
          temp_v7 = *(int *)(temp_v6 + 0xc);
          if (temp_v7 != 0) {
            temp_v7 = temp_v6 + 0xc + temp_v7;
          }
          else {
            temp_v7 = 0;
          }
        }
        else {
          temp_v7 = 0;
        }
      }
      else {
        temp_v7 = 0;
      }
      temp_v6 = *(int *)(temp_v7 + 8);
      *(int *)(puVar4[9] + temp_v4 * 4) = temp_v6;
      temp_v7 = *(int *)(*piVar1 + 0x1c);
      if (temp_v7 != 0) {
        temp_v7 = *piVar1 + 0x1c + temp_v7;
      }
      else {
        temp_v7 = 0;
      }
      if (temp_v7 != 0) {
        piVar12 = (int *)(temp_v7 + temp_v6 * 0x10 + 0x28);
        temp_v6 = *piVar12;
        if (temp_v6 != 0) {
          temp_v6 = (int)piVar12 + temp_v6;
        }
        else {
          temp_v6 = 0;
        }
      }
      else {
        temp_v6 = 0;
      }
      *(int *)(puVar4[0x15] + temp_v4 * 4) = temp_v6 + 0x20;
      if (*(int *)(temp_v5 + 0x10) != 0) {
        temp_v5 = 0;
      }
      else {
        piVar12 = (int *)(temp_v5 + 0x1c);
        temp_v5 = *piVar12;
        if (temp_v5 != 0) {
          piVar12 = (int *)((int)piVar12 + temp_v5);
        }
        pfVar13 = param_1->field_0x8;
        if (temp_v5 == 0) {
          piVar12 = (int *)0x0;
        }
        if ((pfVar13 != (fn_0044670c_arg0_p8 *)0x0) && ((~*(unsigned int *)pfVar13 & 0x40000092) != 0)) {
          pfVar13 = (fn_0044670c_arg0_p8 *)0x0;
        }
        ppiVar15 = &temp_v10;
        temp_v5 = pfVar13->field_0xe0;
        if (temp_v5 != 0) {
          temp_v5 = (int)&pfVar13->field_0xe0 + temp_v5;
        }
        else {
          temp_v5 = 0;
        }
        temp_v6 = *(int *)(temp_v5 + 0x1c);
        if (temp_v6 != 0) {
          temp_v10 = (int *)(temp_v5 + 0x1c + temp_v6);
        }
        else {
          temp_v10 = (int *)0x0;
        }
        if (!(temp_v10 == (int *)0x0 || piVar12 == (int *)0x0)) {
          temp_v2 = wstrlen(piVar12);
          temp_v5 = nw_ut_ResDicPatricia_Get(ppiVar15,piVar12,temp_v2);
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
        temp_v6 = *(int *)(temp_v6 + 8);
        temp_v5 = (**(romwright_code **)(*(int *)param_1->field_0x220 + 0xc))();
        temp_v5 = *(int *)(temp_v5 + 4) + temp_v6 * 0x40;
      }
      *(int *)(puVar4[0xd] + temp_v4 * 4) = temp_v5;
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < temp_v1);
  }
  *(unsigned int **)(*(int *)(temp_v3 + 0xc) + (int)pfVar14 * 4) = puVar4;
  *(unsigned int **)&param_1[1].field_0x4 = puVar4;
  param_1[1].field_0x8 = pfVar14;
  FUN_001c3fc8(param_1,puVar4,(int)(char)param_1[1].field_0xd);
  return temp_v8;
}

} /* extern "C" */
