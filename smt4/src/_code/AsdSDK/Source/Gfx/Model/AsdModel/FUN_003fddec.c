/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fddec` (_code @ 0x3fddec, 0x60c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_9: 24 slot(s), 96 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int sp144; /* 0x144: local_144 */
    unsigned int sp148; /* 0x148: local_148 */
    unsigned int sp14C; /* 0x14c: local_14c */
    unsigned int sp150; /* 0x150: local_150 */
    unsigned int sp1B4; /* 0x1b4: local_1b4 */
    unsigned int sp1BC; /* 0x1bc: local_1bc */
    unsigned int sp1C0; /* 0x1c0: local_1c0 */
    unsigned int sp1FC; /* 0x1fc: local_1fc */
    unsigned int sp200; /* 0x200: local_200 */
    unsigned int sp204; /* 0x204: local_204 */
    unsigned int sp208; /* 0x208: local_208 */
    unsigned int sp20C; /* 0x20c: local_20c */
    unsigned int sp210; /* 0x210: local_210 */
} param_9_stack;

/* Supplied declaration required: FUN_002255c0. */
/* Supplied declaration required: FUN_00225a14. */
/* Supplied declaration required: FUN_002a81a8. */
/* Supplied declaration required: FUN_002b77f4. */
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */
/* Supplied declaration required: nn_math_ARMv6_MTX34InvTransposeAsm. */
/* Supplied declaration required: nn_math_ARMv6_MTX34MultAsm. */
/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2AD44C. */
/* Supplied declaration required: nw_gfx_BasicRenderQueue_nw_gfx_BasicRenderElement_unsigned_long_long_nw_ut_MoveArray_nw_gfx_BasicRenderElement_unsigned_long_long_nw_gfx_BasicRenderKeyFactory_unsigned_long_long_En. */
extern int nw_gfx_Model_IsMeshVisible(int *);
/* Supplied declaration required: nw_gfx_SceneHelper_CalculateDepth. */


void FUN_003fddec(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3,unsigned int param_4,
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
  int *temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  float temp_v10;
  unsigned int temp_v11;
  unsigned char temp_v12 [56];
  int temp_v13;
  unsigned int temp_v14;
  int iStack_1b8;
  int *temp_v15;
  unsigned char temp_v16 [48];
  unsigned char temp_v17 [48];
  float temp_v18;
  int temp_v19;
  int temp_v20;
  unsigned int temp_v21;
  unsigned char temp_v22 [48];
  unsigned char temp_v23 [48];
  float temp_v24;
  float fStack_dc;
  float fStack_d8;
  int temp_v25;
  unsigned int temp_v26;
  int iStack_c8;
  int *temp_v27;
  unsigned int temp_v28;
  int temp_v29;
  unsigned char temp_v30 [48];
  unsigned char temp_v31 [52];
  int temp_v32;
  
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
        if (piVar1 == (int *)0x472288) {
          piVar1 = piVar6;
          if (piVar6 != (int *)0x0) {
            *(unsigned char *)(piVar6[0x88] + 0x18) = 0;
          }
          goto LAB_003fde4c;
        }
        piVar1 = (int *)*piVar1;
      } while (piVar1 != (int *)0x0);
    }
    piVar1 = (int *)0x0;
LAB_003fde4c:
    if ((*(char *)((int)piVar6 + 0x1f6) != '\0') && ((~piVar6[0xe] & 1U) == 0)) {
      if (piVar1 != (int *)0x0) {
        if ((char)piVar1[0x8c] == '\0') {
          FUN_00225a14(param_4,piVar1[0x88],param_5,param_7);
        }
        if ((~*(unsigned int *)(*(int *)(piVar1[0x88] + 8) + 0x28) & 1) == 0) {
          nn_math_ARMv6_MTX34InvTransposeAsm(temp_v16,piVar6 + 0x23);
          nn_math_ARMv6_MTX34MultAsm(piVar6 + 0x6f,param_7 + 0x148,temp_v16);
        }
        else if ((piVar6[0x3e] & 0x200U) != 0) {
          nn_math_ARMv6_MTX34CopyAsm(piVar6 + 0x6f,param_7 + 0x148);
        }
        else {
          FUN_002a81a8(temp_v12,piVar6 + 0x23);
          FUN_002b77f4(temp_v17,temp_v12);
          nn_math_ARMv6_MTX34MultAsm(temp_v22,temp_v12,temp_v17);
          nn_math_ARMv6_MTX34MultAsm(piVar6 + 0x6f,param_7 + 0x148,temp_v22);
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
        temp_v28 = (unsigned int)((unsigned char)param_8 | *(unsigned char *)(piVar6 + 0x7d)) | (temp_v28 & 0xffffff00);
        temp_v24 = (float)piVar1[0x26];
        fStack_dc = (float)piVar1[0x2a];
        fStack_d8 = (float)piVar1[0x2e];
        temp_v5 = param_6;
        nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v24,param_7 + 0x148,&temp_v24);
        temp_v10 = -(*(float *)(param_7 + 0x1cc) * fStack_dc +
                      *(float *)(param_7 + 0x1d0) * fStack_d8 +
                     *(float *)(param_7 + 0x1d4) + *(float *)(param_7 + 0x1c8) * temp_v24) /
                    (*(float *)(param_7 + 0x1dc) * fStack_dc +
                     *(float *)(param_7 + 0x1e0) * fStack_d8 +
                    *(float *)(param_7 + 0x1e4) + *(float *)(param_7 + 0x1d8) * temp_v24);
        if ((int)temp_v10 >= 0x3f800001) {
          temp_v10 = 1.0f;
        }
        else if (temp_v10 < 0.0f) {
          temp_v10 = 0.0f;
        }
        temp_v9 = param_7;
        temp_v11 = temp_v28;
        temp_v6 = piVar1;
        temp_v7 = temp_v1;
        temp_v8 = temp_v5;
        if (piVar5 != piVar7) {
          do {
            if (*piVar5 != 0) {
              temp_v1 = *piVar5 + (int)piVar5;
            }
            else {
              temp_v1 = 0;
            }
            temp_v0 = nw_gfx_Model_IsMeshVisible(temp_v6);
            if (temp_v0 != 0) {
              temp_v3 = *(unsigned int *)(*(int *)(*(int *)(temp_v6[0x59] + *(int *)(temp_v1 + 0x1c) * 4) +
                                        0x2c) + 0x20) & 0xff;
              if (temp_v3 == 0) {
                FUN_002255c0(&temp_v6,temp_v1,temp_v9);
              }
              temp_v15 = temp_v6;
              temp_v13 = 0;
              temp_v14 = 0;
              iStack_1b8 = temp_v1;
              nw_gfx_BasicRenderQueue_nw_gfx_BasicRenderElement_unsigned_long_long_nw_ut_MoveArray_nw_gfx_BasicRenderElement_unsigned_long_long_nw_gfx_BasicRenderKeyFactory_unsigned_long_long_En
                        (temp_v8,&temp_v13,temp_v3,temp_v11 & 0xff);
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
          FUN_002a81a8(temp_v30,piVar6 + 0x23);
          FUN_002b77f4(temp_v23,temp_v30);
          nn_math_ARMv6_MTX34MultAsm(temp_v31,temp_v30,temp_v23);
          nn_math_ARMv6_MTX34MultAsm(piVar6 + 0x6f,param_7 + 0x148,temp_v31);
        }
        temp_v3 = param_8;
        if ((piVar6 != (int *)0x0) && (temp_v1 = (**(romwright_code **)(*piVar6 + 8))(), temp_v1 == 0x4721e0)) {
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
        temp_v21 = (temp_v3 & 0xff) | (unsigned int)*(unsigned char *)(piVar6 + 0x7d) | (temp_v21 & 0xffffff00);
        temp_v18 = (float)piVar6[0x26];
        temp_v19 = piVar6[0x2a];
        temp_v20 = piVar6[0x2e];
        nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v18,param_7 + 0x148,&temp_v18);
        temp_v3 = temp_v21;
        temp_v29 = temp_v1;
        temp_v32 = param_7;
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
              temp_v0 = *(int *)(temp_v29 + 200);
              if (temp_v0 != 0) {
                temp_v0 = temp_v29 + 200 + temp_v0;
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
              nw_gfx_SceneHelper_CalculateDepth(temp_v2 + 4,piVar6 + 0x23,temp_v32);
            }
            temp_v25 = 0;
            temp_v26 = 0;
            iStack_c8 = temp_v1;
            temp_v27 = piVar6;
            nw_gfx_BasicRenderQueue_nw_gfx_BasicRenderElement_unsigned_long_long_nw_ut_MoveArray_nw_gfx_BasicRenderElement_unsigned_long_long_nw_gfx_BasicRenderKeyFactory_unsigned_long_long_En
                      (param_6,&temp_v25,temp_v4,temp_v3 & 0xff);
          }
        }
      }
    }
    param_2 = param_2 + 1;
  } while( 1 );
}
