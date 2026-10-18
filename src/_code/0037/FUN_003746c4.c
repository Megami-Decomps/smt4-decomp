/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003746c4` (_code @ 0x3746c4, 0x580 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003746c4_arg0 fn_003746c4_arg0;
struct fn_003746c4_arg0 {
    unsigned char pad_0x0[0x8];
    void *field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x8];
    uint field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x14];
    uint field_0x2c; /* +0x2c */
};

/* stack frame of param_2: 16 slot(s), 64 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_2_stack;

extern int *DAT_004652a0; /* 0x4652a0 */

/* Supplied declaration required: FUN_002a1768. */
/* Supplied declaration required: FUN_002a18f8. */
/* Supplied declaration required: FUN_002a1aa8. */
/* Supplied declaration required: FUN_002a1c58. */


void FUN_003746c4(fn_003746c4_arg0 *param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  int *piVar1;
  void *pvVar2;
  int *piVar3;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int *piVar10;
  int *unaff_r5;
  int *piVar11;
  int unaff_r8;
  unsigned char temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  
  pvVar2 = param_1->field_0x8;
  temp_v7 = 0;
  temp_v8 = 0;
  temp_v9 = 0;
  temp_v10 = 0;
  temp_v11 = 0;
  temp_v12 = 0;
  temp_v13 = 0;
  temp_v14 = 0;
  temp_v15 = 0;
  temp_v16 = 0;
  temp_v17 = 0;
  temp_v18 = 0;
  temp_v19 = 0;
  temp_v20 = 0;
  temp_v21 = 0;
  temp_v22 = 0;
  temp_v5 = *(int *)((int)pvVar2 + 0x18);
  piVar11 = *(int **)((int)pvVar2 + 0x14);
  if (temp_v5 != 0) {
    unaff_r8 = (int)pvVar2 + temp_v5 + 0x18;
  }
  temp_v2 = *(int *)(param_2 + 0x294);
  if (temp_v5 == 0) {
    unaff_r8 = 0;
  }
  temp_v5 = param_2 + 0x294;
  if (temp_v2 != 0) {
    temp_v5 = temp_v5 + temp_v2;
  }
  temp_v3 = *(int *)(param_2 + 0x290);
  if (temp_v2 == 0) {
    temp_v5 = 0;
  }
  temp_v2 = *(int *)(param_2 + 0x294);
  if (temp_v2 != 0) {
    piVar10 = (int *)(temp_v2 + param_2 + 0x294);
  }
  else {
    piVar10 = (int *)0x0;
  }
  for (; piVar1 = DAT_004652a0, piVar10 != (int *)(temp_v5 + temp_v3 * 4); piVar10 = piVar10 + 1) {
    if (*piVar10 != 0) {
      temp_v2 = *piVar10 + (int)piVar10;
    }
    else {
      temp_v2 = 0;
    }
    unaff_r5 = *(int **)(temp_v2 + 4);
    temp_v6 = unaff_r5 == (int *)0x0;
    if (-1 < (int)unaff_r5) {
      temp_v6 = piVar11 == unaff_r5;
    }
    if (!temp_v6 && (-1 < (int)unaff_r5 && (int)unaff_r5 <= (int)piVar11)) {
      piVar3 = (int *)(unaff_r8 + (int)unaff_r5 * 4);
      temp_v2 = *piVar3;
      if (temp_v2 != 0) {
        temp_v2 = (int)piVar3 + temp_v2;
      }
      else {
        temp_v2 = 0;
      }
      if ((*(char *)(temp_v2 + 4) != '\0') && (temp_v4 = *(unsigned int *)(temp_v2 + 8), -1 < (int)temp_v4)) {
        temp_v1 = *piVar10;
        if (*(char *)(temp_v2 + 5) != '\0') {
          if (temp_v1 != 0) {
            temp_v1 = temp_v1 + (int)piVar10;
          }
          else {
            temp_v1 = 0;
          }
          if ((*(unsigned int *)(temp_v1 + 8) & 0xff) != 0) {
            temp_v0 = *(unsigned int *)(temp_v1 + 8) & 0xff;
            if (temp_v0 != 1) {
              if (temp_v0 != 2) {
                if (temp_v0 != 3) {
                  if (temp_v0 == 4) {
                    DAT_004652a0[1] = -0x7fb0fd70;
                    *piVar1 = temp_v4 + 0x80000000;
                    FUN_002a1768(piVar1 + 2,temp_v1 + 0xc);
                    DAT_004652a0 = DAT_004652a0 + 6;
                  }
                }
                else {
                  DAT_004652a0[1] = -0x7fb0fd70;
                  *piVar1 = temp_v4 + 0x80000000;
                  FUN_002a18f8(piVar1 + 2,temp_v1 + 0xc);
                  DAT_004652a0 = DAT_004652a0 + 6;
                }
              }
              else {
                DAT_004652a0[1] = -0x7fb0fd70;
                *piVar1 = temp_v4 + 0x80000000;
                FUN_002a1aa8(piVar1 + 2,temp_v1 + 0xc);
                DAT_004652a0 = DAT_004652a0 + 6;
              }
            }
            else {
              DAT_004652a0[1] = -0x7fb0fd70;
              *piVar1 = temp_v4 + 0x80000000;
              FUN_002a1c58(piVar1 + 2,temp_v1 + 0xc);
              DAT_004652a0 = DAT_004652a0 + 6;
            }
          }
          else {
            temp_v4 = 1 << (temp_v4 & 0xff);
            if (*(int *)(temp_v1 + 0xc) != 0) {
              temp_v4 = temp_v4 | param_1->field_0x2c;
            }
            else {
              temp_v4 = param_1->field_0x2c & ~temp_v4;
            }
            param_1->field_0x2c = temp_v4;
          }
        }
        else {
          if (temp_v1 != 0) {
            temp_v1 = temp_v1 + (int)piVar10;
          }
          else {
            temp_v1 = 0;
          }
          if ((*(unsigned int *)(temp_v1 + 8) & 0xff) != 0) {
            temp_v0 = *(unsigned int *)(temp_v1 + 8) & 0xff;
            if (temp_v0 != 1) {
              if (temp_v0 != 2) {
                if (temp_v0 != 3) {
                  if (temp_v0 == 4) {
                    piVar3 = DAT_004652a0 + 1;
                    *DAT_004652a0 = temp_v4 + 0x80000000;
                    *piVar3 = -0x7fb0fd40;
                    FUN_002a1768(piVar1 + 2,temp_v1 + 0xc);
                    DAT_004652a0 = DAT_004652a0 + 6;
                  }
                }
                else {
                  piVar3 = DAT_004652a0 + 1;
                  *DAT_004652a0 = temp_v4 + 0x80000000;
                  *piVar3 = -0x7fb0fd40;
                  FUN_002a18f8(piVar1 + 2,temp_v1 + 0xc);
                  DAT_004652a0 = DAT_004652a0 + 6;
                }
              }
              else {
                piVar3 = DAT_004652a0 + 1;
                *DAT_004652a0 = temp_v4 + 0x80000000;
                *piVar3 = -0x7fb0fd40;
                FUN_002a1aa8(piVar1 + 2,temp_v1 + 0xc);
                DAT_004652a0 = DAT_004652a0 + 6;
              }
            }
            else {
              piVar3 = DAT_004652a0 + 1;
              *DAT_004652a0 = temp_v4 + 0x80000000;
              *piVar3 = -0x7fb0fd40;
              FUN_002a1c58(piVar1 + 2,temp_v1 + 0xc);
              DAT_004652a0 = DAT_004652a0 + 6;
            }
          }
          else {
            temp_v4 = 1 << (temp_v4 & 0xff);
            if (*(int *)(temp_v1 + 0xc) != 0) {
              temp_v4 = temp_v4 | param_1->field_0x14;
            }
            else {
              temp_v4 = param_1->field_0x14 & ~temp_v4;
            }
            param_1->field_0x14 = temp_v4;
          }
        }
      }
      *(unsigned char *)((int)&temp_v7 + (int)unaff_r5) = 1;
    }
  }
  if (0 < (int)piVar11) {
    unaff_r5 = (int *)&DAT_004652a0;
  }
  temp_v5 = 0;
  if (temp_v5 < (int)piVar11) {
    do {
      if (*(char *)((int)&temp_v7 + temp_v5) == '\0') {
        piVar10 = (int *)(unaff_r8 + temp_v5 * 4);
        temp_v2 = *piVar10;
        if (temp_v2 != 0) {
          temp_v2 = (int)piVar10 + temp_v2;
        }
        else {
          temp_v2 = 0;
        }
        if ((*(char *)(temp_v2 + 4) != '\0') && (temp_v4 = *(unsigned int *)(temp_v2 + 8), -1 < (int)temp_v4)) {
          temp_v0 = *(unsigned int *)(temp_v2 + 0xc);
          if (*(char *)(temp_v2 + 5) != '\0') {
            if ((temp_v0 & 0xff) != 0) {
              temp_v0 = temp_v0 & 0xff;
              if (temp_v0 != 1) {
                if (temp_v0 != 2) {
                  if (temp_v0 != 3) {
                    if (temp_v0 == 4) {
                      temp_v3 = -0x7fb0fd70;
                      piVar10 = (int *)*unaff_r5;
                      *piVar10 = temp_v4 + 0x80000000;
                      piVar10[1] = temp_v3;
                      FUN_002a1768(piVar10 + 2,temp_v2 + 0x10);
                      *unaff_r5 = *unaff_r5 + 0x18;
                    }
                  }
                  else {
                    temp_v3 = -0x7fb0fd70;
                    piVar10 = (int *)*unaff_r5;
                    *piVar10 = temp_v4 + 0x80000000;
                    piVar10[1] = temp_v3;
                    FUN_002a18f8(piVar10 + 2,temp_v2 + 0x10);
                    *unaff_r5 = *unaff_r5 + 0x18;
                  }
                }
                else {
                  temp_v3 = -0x7fb0fd70;
                  piVar10 = (int *)*unaff_r5;
                  *piVar10 = temp_v4 + 0x80000000;
                  piVar10[1] = temp_v3;
                  FUN_002a1aa8(piVar10 + 2,temp_v2 + 0x10);
                  *unaff_r5 = *unaff_r5 + 0x18;
                }
              }
              else {
                temp_v3 = -0x7fb0fd70;
                piVar10 = (int *)*unaff_r5;
                *piVar10 = temp_v4 + 0x80000000;
                piVar10[1] = temp_v3;
                FUN_002a1c58(piVar10 + 2,temp_v2 + 0x10);
                *unaff_r5 = *unaff_r5 + 0x18;
              }
            }
            else {
              temp_v4 = 1 << (temp_v4 & 0xff);
              if (*(int *)(temp_v2 + 0x10) != 0) {
                temp_v4 = param_1->field_0x2c | temp_v4;
              }
              else {
                temp_v4 = param_1->field_0x2c & ~temp_v4;
              }
              param_1->field_0x2c = temp_v4;
            }
          }
          else if ((temp_v0 & 0xff) != 0) {
            temp_v0 = temp_v0 & 0xff;
            if (temp_v0 != 1) {
              if (temp_v0 != 2) {
                if (temp_v0 != 3) {
                  if (temp_v0 == 4) {
                    temp_v3 = -0x7fb0fd40;
                    piVar10 = (int *)*unaff_r5;
                    *piVar10 = temp_v4 + 0x80000000;
                    piVar10[1] = temp_v3;
                    FUN_002a1768(piVar10 + 2,temp_v2 + 0x10);
                    *unaff_r5 = *unaff_r5 + 0x18;
                  }
                }
                else {
                  temp_v3 = -0x7fb0fd40;
                  piVar10 = (int *)*unaff_r5;
                  *piVar10 = temp_v4 + 0x80000000;
                  piVar10[1] = temp_v3;
                  FUN_002a18f8(piVar10 + 2,temp_v2 + 0x10);
                  *unaff_r5 = *unaff_r5 + 0x18;
                }
              }
              else {
                temp_v3 = -0x7fb0fd40;
                piVar10 = (int *)*unaff_r5;
                *piVar10 = temp_v4 + 0x80000000;
                piVar10[1] = temp_v3;
                FUN_002a1aa8(piVar10 + 2,temp_v2 + 0x10);
                *unaff_r5 = *unaff_r5 + 0x18;
              }
            }
            else {
              temp_v3 = -0x7fb0fd40;
              piVar10 = (int *)*unaff_r5;
              *piVar10 = temp_v4 + 0x80000000;
              piVar10[1] = temp_v3;
              FUN_002a1c58(piVar10 + 2,temp_v2 + 0x10);
              *unaff_r5 = *unaff_r5 + 0x18;
            }
          }
          else {
            temp_v4 = 1 << (temp_v4 & 0xff);
            if (*(int *)(temp_v2 + 0x10) != 0) {
              temp_v4 = param_1->field_0x14 | temp_v4;
            }
            else {
              temp_v4 = param_1->field_0x14 & ~temp_v4;
            }
            param_1->field_0x14 = temp_v4;
          }
        }
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < (int)piVar11);
  }
  return;
}
