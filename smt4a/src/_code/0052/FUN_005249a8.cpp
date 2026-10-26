/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_005249a8` (_code @ 0x5249a8, 0x60c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00162330(...);
int nn_math_ARMv6_MTX34InverseAsm(...);
int FUN_00502774(unsigned int, int, unsigned int, int);
int FUN_00515e14(...);
int FUN_00522934(int **, int, int);
int nn_math_ARMv6_MTX34CopyAsm(...);
int nn_math_ARMv6_MTX34InvTransposeAsm(unsigned char [48], int *);
int nn_math_ARMv6_MTX34MultAsm(...);
int nn_math_ARMv6_VEC3TransformAsm_2AD44C(...);
int nw_gfx_SceneHelper_CalculateDepth(...);

typedef int romwright_code(...);
/* stack frame of param_9: 21 slot(s), 84 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp104; /* 0x104: local_104 */
    unsigned int sp10C; /* 0x10c: local_10c */
    unsigned int sp110; /* 0x110: local_110 */
    unsigned int sp118; /* 0x118: local_118 */
    unsigned int sp11C; /* 0x11c: local_11c */
    unsigned int sp120; /* 0x120: local_120 */
    unsigned int sp1EC; /* 0x1ec: local_1ec */
    unsigned int sp1F0; /* 0x1f0: local_1f0 */
    unsigned int sp1F4; /* 0x1f4: local_1f4 */
    unsigned int sp1F8; /* 0x1f8: local_1f8 */
    unsigned int sp1FC; /* 0x1fc: local_1fc */
    unsigned int sp200; /* 0x200: local_200 */
    unsigned int sp204; /* 0x204: local_204 */
} param_9_stack;

/* Supplied declaration required: FUN_00162330. */
/* Supplied declaration required: nn_math_ARMv6_MTX34InverseAsm. */
/* Supplied declaration required: FUN_00502774. */
/* Supplied declaration required: FUN_00515e14. */
/* Supplied declaration required: FUN_00522934. */
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */
/* Supplied declaration required: nn_math_ARMv6_MTX34InvTransposeAsm. */
/* Supplied declaration required: nn_math_ARMv6_MTX34MultAsm. */
/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2AD44C. */
extern int nw_gfx_Model_IsMeshVisible(int *);
/* Supplied declaration required: nw_gfx_SceneHelper_CalculateDepth. */


void FUN_005249a8(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6,int param_7,unsigned int param_8,unsigned int param_9)

{
/* irregular: 1 goto(s); 11 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  unsigned int temp_v3;
  unsigned char temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int *temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  float temp_v11;
  unsigned int temp_v12;
  unsigned char temp_v13 [48];
  unsigned char temp_v14 [56];
  unsigned char temp_v15 [48];
  unsigned char temp_v16 [48];
  float temp_v17;
  int temp_v18;
  int temp_v19;
  int temp_v20;
  unsigned int temp_v21;
  int iStack_108;
  int *temp_v22;
  float temp_v23;
  float fStack_f8;
  float fStack_f4;
  unsigned char temp_v24 [48];
  unsigned char temp_v25 [48];
  unsigned char temp_v26 [48];
  unsigned int temp_v27;
  int temp_v28;
  int temp_v29;
  
  do {
    if (param_2 == param_3) {
      *param_1 = param_4;
      param_1[1] = param_5;
      param_1[2] = param_6;
      param_1[3] = param_7;
      param_1[4] = param_8;
      param_1[5] = param_9;
                    /* WARNING: Treating indirect jump as return */
      return;
    }
    piVar6 = (int *)*param_2;
    if (piVar6 != (int *)0x0) {
      piVar1 = (int *)(**(romwright_code **)(*piVar6 + 8))(piVar6);
      do {
        if (piVar1 == (int *)0x5c0f34) {
          piVar1 = piVar6;
          if (piVar6 != (int *)0x0) {
            *(unsigned char *)(piVar6[0x88] + 0x18) = 0;
          }
          goto LAB_00524a08;
        }
        piVar1 = (int *)*piVar1;
      } while (piVar1 != (int *)0x0);
    }
    piVar1 = (int *)0x0;
LAB_00524a08:
    if ((*(char *)((int)piVar6 + 0x1f6) != '\0') && ((~piVar6[0xe] & 1U) == 0)) {
      if (piVar1 != (int *)0x0) {
        if ((char)piVar1[0x8c] == '\0') {
          FUN_00502774(param_4,piVar1[0x88],param_5,param_7);
        }
        if ((~*(unsigned int *)(*(int *)(piVar1[0x88] + 8) + 0x28) & 1) == 0) {
          nn_math_ARMv6_MTX34InvTransposeAsm(temp_v15,piVar6 + 0x23);
          nn_math_ARMv6_MTX34MultAsm(piVar6 + 0x6f,param_7 + 0x148,temp_v15);
        }
        else if ((piVar6[0x3e] & 0x200U) != 0) {
          nn_math_ARMv6_MTX34CopyAsm(piVar6 + 0x6f,param_7 + 0x148);
        }
        else {
          nn_math_ARMv6_MTX34InverseAsm(temp_v13,piVar6 + 0x23);
          FUN_00162330(temp_v25,temp_v13);
          nn_math_ARMv6_MTX34MultAsm(temp_v16,temp_v25,temp_v13);
          nn_math_ARMv6_MTX34MultAsm(piVar6 + 0x6f,param_7 + 0x148,temp_v16);
        }
        piVar5 = (int *)piVar1[0x5c];
        piVar7 = (int *)piVar1[0x5d];
        if (piVar5 == piVar7) {
          temp_v1 = piVar1[2];
          if (*(int *)(temp_v1 + 0xb8) != 0) {
            piVar5 = (int *)(*(int *)(temp_v1 + 0xb8) + temp_v1 + 0xb8);
          }
          else {
            piVar5 = (int *)0x0;
          }
          piVar7 = piVar5 + *(int *)(temp_v1 + 0xb4);
        }
        temp_v1 = piVar1[2];
        temp_v6 = (unsigned int)((unsigned char)param_8 | *(unsigned char *)(piVar6 + 0x7d)) | (temp_v6 & 0xffffff00);
        temp_v23 = (float)piVar1[0x26];
        fStack_f8 = (float)piVar1[0x2a];
        fStack_f4 = (float)piVar1[0x2e];
        temp_v5 = param_6;
        nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v23,param_7 + 0x148,&temp_v23);
        temp_v11 = -(*(float *)(param_7 + 0x1cc) * fStack_f8 +
                      *(float *)(param_7 + 0x1d0) * fStack_f4 +
                     *(float *)(param_7 + 0x1d4) + *(float *)(param_7 + 0x1c8) * temp_v23) /
                    (*(float *)(param_7 + 0x1dc) * fStack_f8 +
                     *(float *)(param_7 + 0x1e0) * fStack_f4 +
                    *(float *)(param_7 + 0x1e4) + *(float *)(param_7 + 0x1d8) * temp_v23);
        if ((int)temp_v11 >= 0x3f800001) {
          temp_v11 = 1.0f;
        }
        else if (temp_v11 < 0.0f) {
          temp_v11 = 0.0f;
        }
        temp_v10 = param_7;
        temp_v7 = piVar1;
        temp_v8 = temp_v1;
        temp_v9 = temp_v5;
        temp_v12 = temp_v6;
        if (piVar5 != piVar7) {
          do {
            if (*piVar5 != 0) {
              temp_v1 = *piVar5 + (int)piVar5;
            }
            else {
              temp_v1 = 0;
            }
            temp_v0 = nw_gfx_Model_IsMeshVisible(temp_v7);
            if (temp_v0 != 0) {
              temp_v3 = *(unsigned int *)(*(int *)(*(int *)(temp_v7[0x59] + *(int *)(temp_v1 + 0x1c) * 4) +
                                        0x2c) + 0x20) & 0xff;
              if (temp_v3 == 0) {
                FUN_00522934(&temp_v7,temp_v1,temp_v10);
              }
              temp_v22 = temp_v7;
              temp_v20 = 0;
              temp_v21 = 0;
              iStack_108 = temp_v1;
              FUN_00515e14(temp_v9,&temp_v20,temp_v3,temp_v12 & 0xff);
            }
            piVar5 = piVar5 + 1;
          } while (piVar5 != piVar7);
        }
      }
      else {
        if ((piVar6[0x3e] & 0x200U) != 0) {
          nn_math_ARMv6_MTX34CopyAsm(piVar6 + 0x6f,param_7 + 0x148);
        }
        else {
          nn_math_ARMv6_MTX34InverseAsm(temp_v24,piVar6 + 0x23);
          FUN_00162330(temp_v26,temp_v24);
          nn_math_ARMv6_MTX34MultAsm(temp_v14,temp_v26,temp_v24);
          nn_math_ARMv6_MTX34MultAsm(piVar6 + 0x6f,param_7 + 0x148,temp_v14);
        }
        temp_v3 = param_8;
        if ((piVar6 != (int *)0x0) && (temp_v1 = (**(romwright_code **)(*piVar6 + 8))(), temp_v1 == 0x5c1ce8)) {
          temp_v3 = param_8 >> 8;
        }
        piVar1 = (int *)piVar6[0x5c];
        piVar5 = (int *)piVar6[0x5d];
        if (piVar1 == piVar5) {
          temp_v1 = piVar6[2];
          if (*(int *)(temp_v1 + 0xb8) != 0) {
            piVar1 = (int *)(*(int *)(temp_v1 + 0xb8) + temp_v1 + 0xb8);
          }
          else {
            piVar1 = (int *)0x0;
          }
          piVar5 = piVar1 + *(int *)(temp_v1 + 0xb4);
        }
        temp_v1 = piVar6[2];
        temp_v27 = (temp_v3 & 0xff) | (unsigned int)*(unsigned char *)(piVar6 + 0x7d) | (temp_v27 & 0xffffff00);
        temp_v17 = (float)piVar6[0x26];
        temp_v18 = piVar6[0x2a];
        temp_v19 = piVar6[0x2e];
        nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v17,param_7 + 0x148,&temp_v17);
        temp_v3 = temp_v27;
        temp_v28 = temp_v1;
        temp_v29 = param_7;
        for (; piVar1 != piVar5; piVar1 = piVar1 + 1) {
          if (*piVar1 != 0) {
            temp_v1 = *piVar1 + (int)piVar1;
          }
          else {
            temp_v1 = 0;
          }
          temp_v0 = nw_gfx_Model_IsMeshVisible(piVar6);
          if (temp_v0 != 0) {
            temp_v4 = *(unsigned int *)(*(int *)(*(int *)(piVar6[0x59] + *(int *)(temp_v1 + 0x1c) * 4) + 0x2c) +
                             0x20);
            if (temp_v4 == 0) {
              temp_v0 = *(int *)(temp_v28 + 200);
              if (temp_v0 != 0) {
                temp_v0 = temp_v28 + 200 + temp_v0;
              }
              else {
                temp_v0 = 0;
              }
              piVar7 = (int *)(temp_v0 + *(int *)(temp_v1 + 0x18) * 4);
              temp_v0 = *piVar7;
              if (temp_v0 != 0) {
                temp_v0 = (int)piVar7 + temp_v0;
              }
              else {
                temp_v0 = 0;
              }
              temp_v2 = *(int *)(temp_v0 + 0x1c);
              if (temp_v2 != 0) {
                temp_v2 = temp_v0 + 0x1c + temp_v2;
              }
              else {
                temp_v2 = 0;
              }
              nw_gfx_SceneHelper_CalculateDepth(temp_v2 + 4,piVar6 + 0x23,temp_v29);
            }
            temp_v20 = 0;
            temp_v21 = 0;
            iStack_108 = temp_v1;
            temp_v22 = piVar6;
            FUN_00515e14(param_6,&temp_v20,temp_v4,temp_v3 & 0xff);
          }
        }
      }
    }
    param_2 = param_2 + 1;
  } while( 1 );
}

} /* extern "C" */
