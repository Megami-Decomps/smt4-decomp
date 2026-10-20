/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00444650` (_code @ 0x444650, 0x450 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00454548(...);
int FUN_00502774(unsigned int, int, unsigned int, int *);
int FUN_00515e14(...);
int FUN_00522934(int **, int, int *);
int FUN_00523a44(...);
int FUN_00524494(...);
int nw_gfx_SceneHelper_CalculateDepth(int, int *, int *);

typedef struct fn_00444650_arg0 fn_00444650_arg0;
struct fn_00444650_arg0 {
    unsigned char pad_0x0[0x8];
    undefined4 field_0x8; /* +0x8 */
    unsigned char pad_0xc[0xc];
    undefined4 field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0x4];
    byte field_0x20; /* +0x20 */
};

typedef int romwright_code(...);
/* stack frame of param_8: 18 slot(s), 72 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
} param_8_stack;

/* Supplied declaration required: FUN_00454548. */
/* Supplied declaration required: FUN_00502774. */
/* Supplied declaration required: FUN_00515e14. */
/* Supplied declaration required: FUN_00522934. */
/* Supplied declaration required: FUN_00523a44. */
/* Supplied declaration required: FUN_00524494. */
extern int nw_gfx_Model_IsMeshVisible(int *);
/* Supplied declaration required: nw_gfx_SceneHelper_CalculateDepth. */


void FUN_00444650(fn_00444650_arg0 *param_1,int param_2,int param_3,int *param_4,unsigned int param_5,
                 int **param_6,unsigned int *param_7,int param_8)

{
/* irregular: 1 goto(s); 7 native warning(s); review required */
  unsigned char temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int *piVar7;
  int temp_v5;
  unsigned int *puVar9;
  int temp_v6;
  int **ppiVar11;
  int *piVar12;
  int *piVar13;
  unsigned int *puVar14;
  unsigned char temp_v7 [8];
  int *temp_v8;
  int temp_v9;
  int temp_v10;
  int *temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  int temp_v14;
  unsigned int *temp_v15;
  unsigned int temp_v16;
  unsigned int uStack_40;
  int temp_v17;
  unsigned int temp_v18;
  int temp_v19;
  int *temp_v20;
  
  temp_v16 = param_1->field_0x8;
  uStack_40 = param_1->field_0x18;
  if (param_1->field_0x20 != 1) {
    if (param_8 == 1) {
      FUN_00524494(temp_v7,*(unsigned int *)(param_3 + 0x2c),*(unsigned int *)(param_3 + 0x30),
                   temp_v16,uStack_40,param_2,param_4,
                   (param_5 & 0xffff00ff) | (((unsigned int)param_6 & 0xff) << 8),param_7);
      return;
    }
    puVar14 = *(unsigned int **)(param_3 + 0x2c);
    puVar9 = *(unsigned int **)(param_3 + 0x30);
    temp_v15 = param_7;
    temp_v13 = (param_5 & 0xffff00ff) | (((unsigned int)param_6 & 0xff) << 8);
    temp_v14 = param_2;
    if (puVar14 != puVar9) {
      do {
        piVar12 = (int *)*puVar14;
        piVar7 = piVar12;
        if (piVar12 != (int *)0x0) {
          piVar2 = (int *)(**(romwright_code **)(*piVar12 + 8))(piVar12);
          do {
            if (piVar2 == (int *)0x5c0f34) {
              if (piVar12 != (int *)0x0) {
                *(unsigned char *)(piVar12[0x88] + 0x18) = 0;
              }
              goto LAB_00444704;
            }
            piVar2 = (int *)*piVar2;
          } while (piVar2 != (int *)0x0);
          piVar7 = (int *)0x0;
        }
LAB_00444704:
        temp_v1 = (**(romwright_code **)*temp_v15)(temp_v15,piVar12);
        if (temp_v1 != 0) {
          if (piVar7 != (int *)0x0) {
            if ((char)piVar7[0x8c] == '\0') {
              FUN_00502774(temp_v16,piVar7[0x88],uStack_40,param_4);
            }
            FUN_00454548(piVar12,param_4 + 0x52);
            piVar2 = (int *)piVar7[0x5c];
            piVar13 = (int *)piVar7[0x5d];
            if (piVar2 == piVar13) {
              temp_v1 = piVar7[2];
              if (*(int *)(temp_v1 + 0xb8) != 0) {
                piVar2 = (int *)(*(int *)(temp_v1 + 0xb8) + temp_v1 + 0xb8);
              }
              else {
                piVar2 = (int *)0x0;
              }
              piVar13 = piVar2 + *(int *)(temp_v1 + 0xb4);
            }
            temp_v9 = piVar7[2];
            temp_v12 = (temp_v13 & 0xff) | (unsigned int)*(unsigned char *)(piVar12 + 0x7d) |
                       ((unsigned int)param_6 & 0xffffff00);
            temp_v10 = temp_v14;
            temp_v8 = piVar7;
            temp_v11 = param_4;
            if (piVar2 != piVar13) {
              do {
                param_6 = &temp_v8;
                temp_v1 = 0;
                if (*piVar2 != 0) {
                  temp_v1 = *piVar2 + (int)piVar2;
                }
                temp_v2 = nw_gfx_Model_IsMeshVisible(temp_v8);
                if (temp_v2 != 0) {
                  FUN_00522934(param_6,temp_v1,temp_v11);
                  param_6 = (int **)0x0;
                  temp_v20 = temp_v8;
                  temp_v17 = 0;
                  temp_v18 = 0;
                  temp_v19 = temp_v1;
                  FUN_00515e14(temp_v10,&temp_v17,
                               *(unsigned int *)(*(int *)(*(int *)(temp_v8[0x59] +
                                                          *(int *)(temp_v1 + 0x1c) * 4) + 0x2c) + 0x20
                                        ) & 0xff,temp_v12 & 0xff);
                }
                piVar2 = piVar2 + 1;
              } while (piVar2 != piVar13);
            }
          }
          else {
            FUN_00454548(piVar12,param_4 + 0x52,0);
            if ((piVar12 != (int *)0x0) &&
               (temp_v1 = (**(romwright_code **)(*piVar12 + 8))(), temp_v1 == 0x5c1ce8)) {
              temp_v3 = (temp_v13 & 0xffff) >> 8;
            }
            else {
              temp_v3 = temp_v13 & 0xff;
            }
            temp_v1 = temp_v14;
            temp_v0 = *(unsigned char *)(piVar12 + 0x7d);
            ppiVar11 = (int **)piVar12[0x5c];
            param_6 = (int **)piVar12[0x5d];
            if (ppiVar11 == param_6) {
              temp_v2 = piVar12[2];
              temp_v6 = *(int *)(temp_v2 + 0xb8);
              if (temp_v6 != 0) {
                ppiVar11 = (int **)(temp_v6 + temp_v2 + 0xb8);
              }
              if (temp_v6 == 0) {
                ppiVar11 = (int **)0x0;
              }
              param_6 = ppiVar11 + *(int *)(temp_v2 + 0xb4);
            }
            temp_v2 = piVar12[2];
            for (; ppiVar11 != param_6; ppiVar11 = ppiVar11 + 1) {
              if (*ppiVar11 != (int *)0x0) {
                temp_v6 = (int)*ppiVar11 + (int)ppiVar11;
              }
              else {
                temp_v6 = 0;
              }
              temp_v4 = nw_gfx_Model_IsMeshVisible(piVar12);
              if (temp_v4 != 0) {
                temp_v4 = *(int *)(temp_v2 + 200);
                if (temp_v4 != 0) {
                  temp_v4 = temp_v2 + 200 + temp_v4;
                }
                else {
                  temp_v4 = 0;
                }
                piVar7 = (int *)(temp_v4 + *(int *)(temp_v6 + 0x18) * 4);
                temp_v4 = *piVar7;
                if (temp_v4 != 0) {
                  temp_v4 = (int)piVar7 + temp_v4;
                }
                else {
                  temp_v4 = 0;
                }
                temp_v5 = *(int *)(temp_v4 + 0x1c);
                if (temp_v5 != 0) {
                  temp_v5 = temp_v4 + 0x1c + temp_v5;
                }
                else {
                  temp_v5 = 0;
                }
                nw_gfx_SceneHelper_CalculateDepth(temp_v5 + 4,piVar12 + 0x23,param_4);
                temp_v8 = (int *)0x0;
                temp_v9 = 0;
                temp_v10 = temp_v6;
                temp_v11 = piVar12;
                FUN_00515e14(temp_v1,&temp_v8,
                             *(unsigned int *)(*(int *)(*(int *)(piVar12[0x59] + *(int *)(temp_v6 + 0x1c) * 4
                                                        ) + 0x2c) + 0x20) & 0xff,temp_v3 | temp_v0);
              }
            }
          }
        }
        puVar14 = puVar14 + 1;
        if (puVar14 == puVar9) {
          return;
        }
      } while( 1 );
    }
  }
  else {
    if (param_8 == 1) {
      FUN_00524494(temp_v7,*(unsigned int *)(param_3 + 0x2c),*(unsigned int *)(param_3 + 0x30),
                   temp_v16,uStack_40,param_2,param_4,
                   (param_5 & 0xffff00ff) | (((unsigned int)param_6 & 0xff) << 8),param_7);
      return;
    }
    FUN_00523a44(&temp_v8,*(unsigned int *)(param_3 + 0x2c),*(unsigned int *)(param_3 + 0x30),temp_v16,
                 uStack_40,param_2,param_4,(param_5 & 0xffff00ff) | (((unsigned int)param_6 & 0xff) << 8),
                 param_7);
  }
  return;
}

} /* extern "C" */
