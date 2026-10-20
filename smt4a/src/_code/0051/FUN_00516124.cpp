/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00516124` (_code @ 0x516124, 0x554 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00162330(...);
int FUN_00199f84(...);
int FUN_00502774(unsigned int, int, unsigned int, int);
int FUN_00515e14(...);
int FUN_00522934(int **, int, int);
int FUN_00523ef8(...);
int FUN_005249a8(...);
int nn_math_ARMv6_MTX34CopyAsm(...);
int nn_math_ARMv6_MTX34InvTransposeAsm(unsigned char [56], int *);
int nn_math_ARMv6_MTX34MultAsm(...);
int nw_gfx_SceneHelper_CalculateDepth(...);

typedef struct fn_00516124_arg3 fn_00516124_arg3;
struct fn_00516124_arg3 {
    unsigned char pad_0x0[0x2c];
    void *field_0x2c; /* +0x2c */
    void *field_0x30; /* +0x30 */
    unsigned char pad_0x34[0x28];
    undefined4 field_0x5c; /* +0x5c */
};

typedef int romwright_code(...);
/* stack frame of param_10: 22 slot(s), 88 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int sp12C; /* 0x12c: local_12c */
    unsigned int sp134; /* 0x134: local_134 */
    unsigned int sp138; /* 0x138: local_138 */
    unsigned int sp1A4; /* 0x1a4: local_1a4 */
    unsigned int sp1A8; /* 0x1a8: local_1a8 */
    unsigned int sp1AC; /* 0x1ac: local_1ac */
    unsigned int sp1B0; /* 0x1b0: local_1b0 */
    unsigned int sp1B4; /* 0x1b4: local_1b4 */
    unsigned int sp1B8; /* 0x1b8: local_1b8 */
    unsigned int sp1BC; /* 0x1bc: local_1bc */
    unsigned int sp1C8; /* 0x1c8: local_1c8 */
    unsigned int sp1E8; /* 0x1e8: local_1e8 */
    unsigned int sp1EC; /* 0x1ec: local_1ec */
    unsigned int sp1F0; /* 0x1f0: local_1f0 */
    unsigned int sp1F8; /* 0x1f8: local_1f8 */
} param_10_stack;

/* Supplied declaration required: FUN_00162330. */
/* Supplied declaration required: FUN_00199f84. */
/* Supplied declaration required: FUN_00502774. */
/* Supplied declaration required: FUN_00515e14. */
/* Supplied declaration required: FUN_00522934. */
/* Supplied declaration required: FUN_00523ef8. */
/* Supplied declaration required: FUN_005249a8. */
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */
/* Supplied declaration required: nn_math_ARMv6_MTX34InvTransposeAsm. */
/* Supplied declaration required: nn_math_ARMv6_MTX34MultAsm. */
extern int nw_gfx_Model_IsMeshVisible(int *);
/* Supplied declaration required: nw_gfx_SceneHelper_CalculateDepth. */


void FUN_00516124(unsigned int param_1,unsigned int param_2,unsigned int param_3,fn_00516124_arg3 *param_4
                 ,int param_5,unsigned int param_6,unsigned int param_7,unsigned int param_8,unsigned int param_9,
                 unsigned int param_10)

{
/* irregular: 1 goto(s); 11 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int *piVar3;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  unsigned int *puVar13;
  int temp_v8;
  unsigned int uStack_1f4;
  int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned char temp_v12 [8];
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int *temp_v20;
  unsigned char temp_v21 [56];
  unsigned char temp_v22 [48];
  int temp_v23;
  unsigned int temp_v24;
  int iStack_130;
  int *temp_v25;
  unsigned char temp_v26 [48];
  unsigned char temp_v27 [48];
  int *temp_v28;
  int temp_v29;
  unsigned int temp_v30;
  int temp_v31;
  unsigned int temp_v32;
  unsigned int temp_v33;
  unsigned char temp_v34 [48];
  unsigned char temp_v35 [48];
  unsigned int temp_v36;
  
  temp_v8 = param_2;
  uStack_1f4 = param_3;
  if (param_9 != 1) {
    if (param_8 == 1) {
      temp_v10 = ((param_6 | (param_8 & 0xffffff00)) & 0xffff00ff) | ((param_7 & 0xff) << 8);
      temp_v9 = param_5;
      temp_v11 = param_10;
      FUN_005249a8(temp_v12,param_4->field_0x2c,param_4->field_0x30,param_1);
      return;
    }
    puVar13 = (unsigned int *)param_4->field_0x2c;
    temp_v20 = (unsigned int *)param_4->field_0x30;
    temp_v18 = ((param_6 | (param_9 & 0xffffff00)) & 0xffff00ff) | ((param_7 & 0xff) << 8);
    temp_v17 = param_5;
    temp_v19 = param_10;
    temp_v14 = param_1;
    temp_v15 = param_2;
    temp_v16 = param_3;
    if (puVar13 != temp_v20) {
      do {
        piVar11 = (int *)*puVar13;
        if (piVar11 != (int *)0x0) {
          piVar3 = (int *)(**(romwright_code **)(*piVar11 + 8))(piVar11);
          do {
            if (piVar3 == (int *)0x5c0f34) {
              piVar3 = piVar11;
              if (piVar11 != (int *)0x0) {
                *(unsigned char *)(piVar11[0x88] + 0x18) = 0;
              }
              goto LAB_005161e8;
            }
            piVar3 = (int *)*piVar3;
          } while (piVar3 != (int *)0x0);
        }
        piVar3 = (int *)0x0;
LAB_005161e8:
        temp_v1 = temp_v13;
        if ((*(char *)((int)piVar11 + 0x1f6) != '\0') && ((~piVar11[0xe] & 1U) == 0)) {
          if (piVar3 != (int *)0x0) {
            if ((char)piVar3[0x8c] == '\0') {
              FUN_00502774(temp_v14,piVar3[0x88],temp_v15,temp_v17);
            }
            temp_v5 = temp_v17 + 0x148;
            temp_v2 = temp_v17 + 0x148;
            if ((~*(unsigned int *)(*(int *)(piVar3[0x88] + 8) + 0x28) & 1) == 0) {
              nn_math_ARMv6_MTX34InvTransposeAsm(temp_v21,piVar11 + 0x23);
              nn_math_ARMv6_MTX34MultAsm(piVar11 + 0x6f,temp_v2,temp_v21);
            }
            else if ((piVar11[0x3e] & 0x200U) != 0) {
              nn_math_ARMv6_MTX34CopyAsm(piVar11 + 0x6f,temp_v5);
            }
            else {
              FUN_00199f84(&temp_v8,piVar11 + 0x23);
              FUN_00162330(temp_v35,&temp_v8);
              nn_math_ARMv6_MTX34MultAsm(temp_v26,temp_v35,&temp_v8);
              nn_math_ARMv6_MTX34MultAsm(piVar11 + 0x6f,temp_v5,temp_v26);
            }
            piVar10 = (int *)piVar3[0x5c];
            piVar12 = (int *)piVar3[0x5d];
            if (piVar10 == piVar12) {
              temp_v5 = piVar3[2];
              if (*(int *)(temp_v5 + 0xb8) != 0) {
                piVar10 = (int *)(*(int *)(temp_v5 + 0xb8) + temp_v5 + 0xb8);
              }
              else {
                piVar10 = (int *)0x0;
              }
              piVar12 = piVar10 + *(int *)(temp_v5 + 0xb4);
            }
            temp_v32 = (unsigned int)((unsigned char)temp_v18 | *(unsigned char *)(piVar11 + 0x7d)) | (temp_v36 & 0xffffff00)
            ;
            temp_v29 = piVar3[2];
            temp_v30 = temp_v16;
            temp_v31 = temp_v17;
            temp_v1 = temp_v13;
            temp_v28 = piVar3;
            temp_v36 = temp_v32;
            if (piVar10 != piVar12) {
              do {
                if (*piVar10 != 0) {
                  temp_v5 = *piVar10 + (int)piVar10;
                }
                else {
                  temp_v5 = 0;
                }
                temp_v2 = nw_gfx_Model_IsMeshVisible(temp_v28);
                if (temp_v2 != 0) {
                  FUN_00522934(&temp_v28,temp_v5,temp_v31);
                  temp_v25 = temp_v28;
                  temp_v23 = 0;
                  temp_v24 = 0;
                  iStack_130 = temp_v5;
                  FUN_00515e14(temp_v30,&temp_v23,
                               *(unsigned int *)(*(int *)(*(int *)(temp_v28[0x59] +
                                                          *(int *)(temp_v5 + 0x1c) * 4) + 0x2c) + 0x20
                                        ) & 0xff,temp_v32 & 0xff);
                }
                piVar10 = piVar10 + 1;
                temp_v1 = temp_v13;
              } while (piVar10 != piVar12);
            }
          }
          else {
            temp_v5 = temp_v17 + 0x148;
            if ((piVar11[0x3e] & 0x200U) != 0) {
              nn_math_ARMv6_MTX34CopyAsm(piVar11 + 0x6f,temp_v5);
            }
            else {
              FUN_00199f84(temp_v22,piVar11 + 0x23);
              FUN_00162330(temp_v27,temp_v22);
              nn_math_ARMv6_MTX34MultAsm(temp_v34,temp_v27,temp_v22);
              nn_math_ARMv6_MTX34MultAsm(piVar11 + 0x6f,temp_v5,temp_v34);
            }
            temp_v1 = temp_v18;
            if ((piVar11 != (int *)0x0) &&
               (temp_v5 = (**(romwright_code **)(*piVar11 + 8))(), temp_v1 = temp_v18, temp_v5 == 0x5c1ce8)) {
              temp_v1 = temp_v18 >> 8;
            }
            temp_v5 = temp_v17;
            temp_v0 = temp_v16;
            piVar3 = (int *)piVar11[0x5c];
            piVar10 = (int *)piVar11[0x5d];
            temp_v3 = (unsigned int)*(unsigned char *)(piVar11 + 0x7d) | (temp_v1 & 0xff);
            if (piVar3 == piVar10) {
              temp_v2 = piVar11[2];
              if (*(int *)(temp_v2 + 0xb8) != 0) {
                piVar3 = (int *)(*(int *)(temp_v2 + 0xb8) + temp_v2 + 0xb8);
              }
              else {
                piVar3 = (int *)0x0;
              }
              piVar10 = piVar3 + *(int *)(temp_v2 + 0xb4);
            }
            temp_v2 = piVar11[2];
            temp_v33 = temp_v3 | (temp_v33 & 0xffffff00);
            temp_v1 = temp_v13;
            for (; temp_v13 = temp_v3, piVar3 != piVar10; piVar3 = piVar3 + 1) {
              if (*piVar3 != 0) {
                temp_v6 = *piVar3 + (int)piVar3;
              }
              else {
                temp_v6 = 0;
              }
              temp_v4 = nw_gfx_Model_IsMeshVisible(piVar11);
              if (temp_v4 != 0) {
                temp_v4 = *(int *)(temp_v2 + 200);
                if (temp_v4 != 0) {
                  temp_v4 = temp_v2 + 200 + temp_v4;
                }
                else {
                  temp_v4 = 0;
                }
                piVar12 = (int *)(temp_v4 + *(int *)(temp_v6 + 0x18) * 4);
                temp_v4 = *piVar12;
                if (temp_v4 != 0) {
                  temp_v4 = temp_v4 + (int)piVar12;
                }
                temp_v7 = *(int *)(temp_v4 + 0x1c);
                if (temp_v7 != 0) {
                  temp_v7 = temp_v4 + 0x1c + temp_v7;
                }
                else {
                  temp_v7 = 0;
                }
                nw_gfx_SceneHelper_CalculateDepth(temp_v7 + 4,piVar11 + 0x23,temp_v5);
                temp_v23 = 0;
                temp_v24 = 0;
                iStack_130 = temp_v6;
                temp_v25 = piVar11;
                FUN_00515e14(temp_v0,&temp_v23,
                             *(unsigned int *)(*(int *)(*(int *)(piVar11[0x59] + *(int *)(temp_v6 + 0x1c) * 4)
                                               + 0x2c) + 0x20) & 0xff,temp_v13);
              }
              temp_v3 = temp_v13;
              temp_v1 = temp_v13;
            }
          }
        }
        temp_v13 = temp_v1;
        puVar13 = puVar13 + 1;
        if (puVar13 == temp_v20) {
          return;
        }
      } while( 1 );
    }
  }
  else {
    if (param_8 == 1) {
      temp_v10 = ((param_6 | (param_8 & 0xffffff00)) & 0xffff00ff) | ((param_7 & 0xff) << 8);
      temp_v9 = param_5;
      temp_v11 = param_10;
      FUN_005249a8(temp_v12,param_4->field_0x2c,param_4->field_0x30,param_1);
      return;
    }
    temp_v10 = ((param_6 | (param_8 & 0xffffff00)) & 0xffff00ff) | ((param_7 & 0xff) << 8);
    temp_v9 = param_5;
    temp_v11 = param_10;
    FUN_00523ef8(temp_v12,param_4->field_0x2c,param_4->field_0x30,param_1);
  }
  return;
}

} /* extern "C" */
