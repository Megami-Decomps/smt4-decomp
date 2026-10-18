/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004577d4` (_code @ 0x4577d4, 0x5a0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_004577d4_arg0 fn_004577d4_arg0;
struct fn_004577d4_arg0 {
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

extern int *DAT_005b40e0; /* 0x5b40e0 */

/* Supplied declaration required: nw_gfx_internal_NWCopyVec1Reverse. */
/* Supplied declaration required: nw_gfx_internal_NWCopyVec2Reverse. */
/* Supplied declaration required: nw_gfx_internal_NWCopyVec3Reverse. */
/* Supplied declaration required: nw_gfx_internal_NWCopyVec4Reverse. */


void FUN_004577d4(fn_004577d4_arg0 *param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  int *piVar1;
  void *pvVar2;
  int temp_v0;
  int *piVar4;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int *piVar8;
  int *unaff_r5;
  int *piVar9;
  int *piVar10;
  int temp_v4;
  unsigned char temp_v5;
  int temp_v6;
  unsigned int temp_v7;
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
  
  pvVar2 = param_1->field_0x8;
  temp_v6 = 0;
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
  piVar9 = *(int **)((int)pvVar2 + 0x14);
  temp_v0 = *(int *)(param_2 + 0x294);
  if (*(int *)((int)pvVar2 + 0x18) != 0) {
    temp_v4 = (int)pvVar2 + *(int *)((int)pvVar2 + 0x18) + 0x18;
  }
  else {
    temp_v4 = 0;
  }
  temp_v5 = temp_v0 != 0;
  if (temp_v5) {
    temp_v0 = temp_v0 + param_2 + 0x294;
  }
  if (!temp_v5) {
    temp_v0 = 0;
  }
  piVar10 = (int *)(temp_v0 + *(int *)(param_2 + 0x290) * 4);
  temp_v0 = *(int *)(param_2 + 0x294);
  if (temp_v0 != 0) {
    piVar8 = (int *)(temp_v0 + param_2 + 0x294);
  }
  else {
    piVar8 = (int *)0x0;
  }
  for (; piVar1 = DAT_005b40e0, piVar8 != piVar10; piVar8 = piVar8 + 1) {
    if (*piVar8 != 0) {
      temp_v0 = *piVar8 + (int)piVar8;
    }
    else {
      temp_v0 = 0;
    }
    unaff_r5 = *(int **)(temp_v0 + 4);
    temp_v5 = unaff_r5 == (int *)0x0;
    if (-1 < (int)unaff_r5) {
      temp_v5 = piVar9 == unaff_r5;
    }
    if (!temp_v5 && (-1 < (int)unaff_r5 && (int)unaff_r5 <= (int)piVar9)) {
      piVar4 = (int *)(temp_v4 + (int)unaff_r5 * 4);
      temp_v0 = *piVar4;
      if (temp_v0 != 0) {
        temp_v0 = temp_v0 + (int)piVar4;
      }
      else {
        temp_v0 = 0;
      }
      if ((*(char *)(temp_v0 + 4) != '\0') && (temp_v1 = *(unsigned int *)(temp_v0 + 8), -1 < (int)temp_v1)) {
        temp_v2 = *piVar8;
        if (*(char *)(temp_v0 + 5) != '\0') {
          if (temp_v2 != 0) {
            temp_v2 = temp_v2 + (int)piVar8;
          }
          else {
            temp_v2 = 0;
          }
          if ((*(unsigned int *)(temp_v2 + 8) & 0xff) != 0) {
            temp_v3 = *(unsigned int *)(temp_v2 + 8) & 0xff;
            if (temp_v3 != 1) {
              if (temp_v3 != 2) {
                if (temp_v3 != 3) {
                  if (temp_v3 == 4) {
                    *DAT_005b40e0 = temp_v1 + 0x80000000;
                    piVar1[1] = -0x7fb0fd70;
                    nw_gfx_internal_NWCopyVec4Reverse(piVar1 + 2,temp_v2 + 0xc);
                    DAT_005b40e0 = DAT_005b40e0 + 6;
                  }
                }
                else {
                  *DAT_005b40e0 = temp_v1 + 0x80000000;
                  piVar1[1] = -0x7fb0fd70;
                  nw_gfx_internal_NWCopyVec3Reverse(piVar1 + 2,temp_v2 + 0xc);
                  DAT_005b40e0 = DAT_005b40e0 + 6;
                }
              }
              else {
                *DAT_005b40e0 = temp_v1 + 0x80000000;
                piVar1[1] = -0x7fb0fd70;
                nw_gfx_internal_NWCopyVec2Reverse(piVar1 + 2,temp_v2 + 0xc);
                DAT_005b40e0 = DAT_005b40e0 + 6;
              }
            }
            else {
              *DAT_005b40e0 = temp_v1 + 0x80000000;
              piVar1[1] = -0x7fb0fd70;
              nw_gfx_internal_NWCopyVec1Reverse(piVar1 + 2,temp_v2 + 0xc);
              DAT_005b40e0 = DAT_005b40e0 + 6;
            }
          }
          else {
            temp_v1 = 1 << (temp_v1 & 0xff);
            if (*(int *)(temp_v2 + 0xc) != 0) {
              temp_v1 = param_1->field_0x2c | temp_v1;
            }
            else {
              temp_v1 = param_1->field_0x2c & ~temp_v1;
            }
            param_1->field_0x2c = temp_v1;
          }
        }
        else {
          if (temp_v2 != 0) {
            temp_v2 = temp_v2 + (int)piVar8;
          }
          else {
            temp_v2 = 0;
          }
          if ((*(unsigned int *)(temp_v2 + 8) & 0xff) != 0) {
            temp_v3 = *(unsigned int *)(temp_v2 + 8) & 0xff;
            if (temp_v3 != 1) {
              if (temp_v3 != 2) {
                if (temp_v3 != 3) {
                  if (temp_v3 == 4) {
                    piVar4 = DAT_005b40e0 + 2;
                    *DAT_005b40e0 = temp_v1 + 0x80000000;
                    piVar1[1] = -0x7fb0fd40;
                    nw_gfx_internal_NWCopyVec4Reverse(piVar4,temp_v2 + 0xc);
                    DAT_005b40e0 = DAT_005b40e0 + 6;
                  }
                }
                else {
                  piVar4 = DAT_005b40e0 + 2;
                  *DAT_005b40e0 = temp_v1 + 0x80000000;
                  piVar1[1] = -0x7fb0fd40;
                  nw_gfx_internal_NWCopyVec3Reverse(piVar4,temp_v2 + 0xc);
                  DAT_005b40e0 = DAT_005b40e0 + 6;
                }
              }
              else {
                piVar4 = DAT_005b40e0 + 2;
                *DAT_005b40e0 = temp_v1 + 0x80000000;
                piVar1[1] = -0x7fb0fd40;
                nw_gfx_internal_NWCopyVec2Reverse(piVar4,temp_v2 + 0xc);
                DAT_005b40e0 = DAT_005b40e0 + 6;
              }
            }
            else {
              piVar4 = DAT_005b40e0 + 2;
              *DAT_005b40e0 = temp_v1 + 0x80000000;
              piVar1[1] = -0x7fb0fd40;
              nw_gfx_internal_NWCopyVec1Reverse(piVar4,temp_v2 + 0xc);
              DAT_005b40e0 = DAT_005b40e0 + 6;
            }
          }
          else {
            temp_v1 = 1 << (temp_v1 & 0xff);
            if (*(int *)(temp_v2 + 0xc) != 0) {
              temp_v1 = param_1->field_0x14 | temp_v1;
            }
            else {
              temp_v1 = param_1->field_0x14 & ~temp_v1;
            }
            param_1->field_0x14 = temp_v1;
          }
        }
      }
      *(unsigned char *)((int)&temp_v6 + (int)unaff_r5) = 1;
    }
  }
  if (0 < (int)piVar9) {
    piVar10 = (int *)0x804f02c0;
    unaff_r5 = (int *)&DAT_005b40e0;
  }
  temp_v0 = 0;
  if (temp_v0 < (int)piVar9) {
    do {
      if (*(char *)((int)&temp_v6 + temp_v0) == '\0') {
        piVar8 = (int *)(temp_v4 + temp_v0 * 4);
        temp_v2 = *piVar8;
        if (temp_v2 != 0) {
          temp_v2 = (int)piVar8 + temp_v2;
        }
        else {
          temp_v2 = 0;
        }
        if ((*(char *)(temp_v2 + 4) != '\0') && (temp_v1 = *(unsigned int *)(temp_v2 + 8), -1 < (int)temp_v1)) {
          temp_v3 = *(unsigned int *)(temp_v2 + 0xc);
          if (*(char *)(temp_v2 + 5) != '\0') {
            if ((temp_v3 & 0xff) != 0) {
              temp_v3 = temp_v3 & 0xff;
              if (temp_v3 != 1) {
                if (temp_v3 != 2) {
                  if (temp_v3 != 3) {
                    if (temp_v3 == 4) {
                      piVar8 = (int *)*unaff_r5;
                      *piVar8 = temp_v1 + 0x80000000;
                      piVar8[1] = -0x7fb0fd70;
                      nw_gfx_internal_NWCopyVec4Reverse(piVar8 + 2,temp_v2 + 0x10);
                      *unaff_r5 = *unaff_r5 + 0x18;
                    }
                  }
                  else {
                    piVar8 = (int *)*unaff_r5;
                    *piVar8 = temp_v1 + 0x80000000;
                    piVar8[1] = -0x7fb0fd70;
                    nw_gfx_internal_NWCopyVec3Reverse(piVar8 + 2,temp_v2 + 0x10);
                    *unaff_r5 = *unaff_r5 + 0x18;
                  }
                }
                else {
                  piVar8 = (int *)*unaff_r5;
                  *piVar8 = temp_v1 + 0x80000000;
                  piVar8[1] = -0x7fb0fd70;
                  nw_gfx_internal_NWCopyVec2Reverse(piVar8 + 2,temp_v2 + 0x10);
                  *unaff_r5 = *unaff_r5 + 0x18;
                }
              }
              else {
                piVar8 = (int *)*unaff_r5;
                *piVar8 = temp_v1 + 0x80000000;
                piVar8[1] = -0x7fb0fd70;
                nw_gfx_internal_NWCopyVec1Reverse(piVar8 + 2,temp_v2 + 0x10);
                *unaff_r5 = *unaff_r5 + 0x18;
              }
            }
            else {
              temp_v1 = 1 << (temp_v1 & 0xff);
              if (*(int *)(temp_v2 + 0x10) != 0) {
                temp_v1 = param_1->field_0x2c | temp_v1;
              }
              else {
                temp_v1 = param_1->field_0x2c & ~temp_v1;
              }
              param_1->field_0x2c = temp_v1;
            }
          }
          else if ((temp_v3 & 0xff) != 0) {
            temp_v3 = temp_v3 & 0xff;
            if (temp_v3 != 1) {
              if (temp_v3 != 2) {
                if (temp_v3 != 3) {
                  if (temp_v3 == 4) {
                    piVar8 = (int *)*unaff_r5;
                    *piVar8 = temp_v1 + 0x80000000;
                    piVar8[1] = (int)piVar10;
                    nw_gfx_internal_NWCopyVec4Reverse(piVar8 + 2,temp_v2 + 0x10);
                    *unaff_r5 = *unaff_r5 + 0x18;
                  }
                }
                else {
                  piVar8 = (int *)*unaff_r5;
                  *piVar8 = temp_v1 + 0x80000000;
                  piVar8[1] = (int)piVar10;
                  nw_gfx_internal_NWCopyVec3Reverse(piVar8 + 2,temp_v2 + 0x10);
                  *unaff_r5 = *unaff_r5 + 0x18;
                }
              }
              else {
                piVar8 = (int *)*unaff_r5;
                *piVar8 = temp_v1 + 0x80000000;
                piVar8[1] = (int)piVar10;
                nw_gfx_internal_NWCopyVec2Reverse(piVar8 + 2,temp_v2 + 0x10);
                *unaff_r5 = *unaff_r5 + 0x18;
              }
            }
            else {
              piVar8 = (int *)*unaff_r5;
              *piVar8 = temp_v1 + 0x80000000;
              piVar8[1] = (int)piVar10;
              nw_gfx_internal_NWCopyVec1Reverse(piVar8 + 2,temp_v2 + 0x10);
              *unaff_r5 = *unaff_r5 + 0x18;
            }
          }
          else {
            temp_v1 = 1 << (temp_v1 & 0xff);
            if (*(int *)(temp_v2 + 0x10) != 0) {
              temp_v1 = param_1->field_0x14 | temp_v1;
            }
            else {
              temp_v1 = param_1->field_0x14 & ~temp_v1;
            }
            param_1->field_0x14 = temp_v1;
          }
        }
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < (int)piVar9);
  }
  return;
}
