/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00523ef8` (_code @ 0x523ef8, 0x590 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00162330(...);
int nn_math_ARMv6_MTX34InverseAsm(...);
int FUN_00502774(unsigned int, int, unsigned int, int);
int FUN_00515e14(...);
int nn_math_ARMv6_MTX34CopyAsm(int *, int);
int nn_math_ARMv6_MTX34InvTransposeAsm(unsigned char [48], int *);
int nn_math_ARMv6_MTX34MultAsm(...);
int nw_gfx_Model_IsMeshVisible(...);
int nw_gfx_SceneHelper_CalculateDepth(...);

typedef int romwright_code(...);
/* stack frame of param_9: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp88; /* 0x88: local_88 */
} param_9_stack;

/* Supplied declaration required: FUN_00162330. */
/* Supplied declaration required: nn_math_ARMv6_MTX34InverseAsm. */
/* Supplied declaration required: FUN_00502774. */
/* Supplied declaration required: FUN_00515e14. */
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */
/* Supplied declaration required: nn_math_ARMv6_MTX34InvTransposeAsm. */
/* Supplied declaration required: nn_math_ARMv6_MTX34MultAsm. */
/* Supplied declaration required: nw_gfx_Model_IsMeshVisible. */
/* Supplied declaration required: nw_gfx_SceneHelper_CalculateDepth. */


void FUN_00523ef8(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6,int param_7,unsigned int param_8,unsigned int param_9)

{
/* irregular: 1 goto(s); 10 native warning(s); review required */
  char temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  unsigned char temp_v7 [48];
  unsigned char temp_v8 [48];
  unsigned char temp_v9 [56];
  unsigned char temp_v10 [48];
  unsigned char temp_v11 [48];
  unsigned char temp_v12 [48];
  unsigned char temp_v13 [48];
  unsigned int temp_v14;
  int temp_v15;
  unsigned int temp_v16;
  int iStack_78;
  int *piStack_74;
  unsigned int temp_v17;
  unsigned int temp_v18;
  int temp_v19;
  int temp_v20;
  int temp_v21;
  
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
    piVar10 = (int *)*param_2;
    if (piVar10 != (int *)0x0) {
      piVar2 = (int *)(**(romwright_code **)(*piVar10 + 8))(piVar10);
      do {
        if (piVar2 == (int *)0x5c0f34) {
          piVar2 = piVar10;
          if (piVar10 != (int *)0x0) {
            *(unsigned char *)(piVar10[0x88] + 0x18) = 0;
          }
          goto LAB_00523f58;
        }
        piVar2 = (int *)*piVar2;
      } while (piVar2 != (int *)0x0);
    }
    piVar2 = (int *)0x0;
LAB_00523f58:
    temp_v3 = temp_v17;
    if ((*(char *)((int)piVar10 + 0x1f6) != '\0') && ((~piVar10[0xe] & 1U) == 0)) {
      if (piVar2 != (int *)0x0) {
        if ((char)piVar2[0x8c] == '\0') {
          FUN_00502774(param_4,piVar2[0x88],param_5,param_7);
        }
        if ((~*(unsigned int *)(*(int *)(piVar2[0x88] + 8) + 0x28) & 1) == 0) {
          nn_math_ARMv6_MTX34InvTransposeAsm(temp_v8,piVar10 + 0x23);
          nn_math_ARMv6_MTX34MultAsm(piVar10 + 0x6f,param_7 + 0x148,temp_v8);
        }
        else if ((piVar10[0x3e] & 0x200U) != 0) {
          nn_math_ARMv6_MTX34CopyAsm(piVar10 + 0x6f,param_7 + 0x148);
        }
        else {
          nn_math_ARMv6_MTX34InverseAsm(temp_v7,piVar10 + 0x23);
          FUN_00162330(temp_v11,temp_v7);
          nn_math_ARMv6_MTX34MultAsm(temp_v12,temp_v11,temp_v7);
          nn_math_ARMv6_MTX34MultAsm(piVar10 + 0x6f,param_7 + 0x148,temp_v12);
        }
        piVar9 = (int *)piVar2[0x5c];
        piVar11 = (int *)piVar2[0x5d];
        if (piVar9 == piVar11) {
          temp_v1 = piVar2[2];
          if (*(int *)(temp_v1 + 0xb8) != 0) {
            piVar9 = (int *)(*(int *)(temp_v1 + 0xb8) + temp_v1 + 0xb8);
          }
          else {
            piVar9 = (int *)0x0;
          }
          piVar11 = piVar9 + *(int *)(temp_v1 + 0xb4);
        }
        temp_v20 = piVar2[2];
        temp_v14 = (unsigned int)((unsigned char)param_8 | *(unsigned char *)(piVar10 + 0x7d)) | (temp_v14 & 0xffffff00);
        temp_v6 = (unsigned int)((unsigned char)param_8 | *(unsigned char *)(piVar10 + 0x7d));
        temp_v3 = temp_v17;
        for (; temp_v17 = temp_v6, piVar9 != piVar11; piVar9 = piVar9 + 1) {
          if (*piVar9 != 0) {
            temp_v1 = *piVar9 + (int)piVar9;
          }
          else {
            temp_v1 = 0;
          }
          temp_v2 = nw_gfx_Model_IsMeshVisible(piVar2);
          if (temp_v2 != 0) {
            temp_v3 = *(unsigned int *)(*(int *)(*(int *)(piVar2[0x59] + *(int *)(temp_v1 + 0x1c) * 4) + 0x2c) +
                             0x20);
            temp_v0 = (char)temp_v3;
            if ((temp_v3 & 0xff) != 1) {
              temp_v0 = '\0';
            }
            if (temp_v0 != '\0') {
              temp_v2 = *(int *)(temp_v20 + 200);
              if (temp_v2 != 0) {
                temp_v2 = temp_v20 + 200 + temp_v2;
              }
              else {
                temp_v2 = 0;
              }
              piVar10 = (int *)(temp_v2 + *(int *)(temp_v1 + 0x18) * 4);
              temp_v2 = *piVar10;
              if (temp_v2 != 0) {
                temp_v2 = temp_v2 + (int)piVar10;
              }
              else {
                temp_v2 = 0;
              }
              if (*(int *)(temp_v2 + 0x2c) != 1) {
                temp_v4 = *(int *)(temp_v2 + 0x1c);
                piVar10 = piVar2 + 0x23;
                if (temp_v4 != 0) {
                  temp_v4 = temp_v4 + temp_v2 + 0x1c;
                }
              }
              else {
                if (*(int *)(temp_v2 + 0x30) != 0) {
                  piVar10 = (int *)(temp_v2 + 0x30 + *(int *)(temp_v2 + 0x30));
                }
                else {
                  piVar10 = (int *)0x0;
                }
                temp_v4 = *piVar10;
                if (temp_v4 != 0) {
                  temp_v4 = temp_v4 + (int)piVar10;
                }
                temp_v5 = *(int *)(temp_v4 + 4);
                if (temp_v5 != 0) {
                  piVar10 = (int *)(temp_v4 + 4 + temp_v5);
                }
                else {
                  piVar10 = (int *)0x0;
                }
                temp_v21 = *piVar10;
                temp_v4 = (**(romwright_code **)(*(int *)piVar2[0x88] + 0x1c))();
                piVar10 = (int *)(*(int *)(temp_v4 + 4) + temp_v21 * 0x30);
                temp_v4 = *(int *)(temp_v2 + 0x1c);
                if (temp_v4 != 0) {
                  temp_v4 = temp_v4 + temp_v2 + 0x1c;
                }
              }
              nw_gfx_SceneHelper_CalculateDepth(temp_v4 + 4,piVar10,param_7);
            }
            temp_v15 = 0;
            temp_v16 = 0;
            iStack_78 = temp_v1;
            piStack_74 = piVar2;
            FUN_00515e14(param_6,&temp_v15,
                         *(unsigned int *)(*(int *)(*(int *)(piVar2[0x59] + *(int *)(temp_v1 + 0x1c) * 4) +
                                           0x2c) + 0x20) & 0xff,temp_v17);
          }
          temp_v6 = temp_v17;
          temp_v3 = temp_v17;
        }
      }
      else {
        if ((piVar10[0x3e] & 0x200U) != 0) {
          nn_math_ARMv6_MTX34CopyAsm(piVar10 + 0x6f,param_7 + 0x148);
        }
        else {
          nn_math_ARMv6_MTX34InverseAsm(temp_v13,piVar10 + 0x23);
          FUN_00162330(temp_v10,temp_v13);
          nn_math_ARMv6_MTX34MultAsm(temp_v9,temp_v10,temp_v13);
          nn_math_ARMv6_MTX34MultAsm(piVar10 + 0x6f,param_7 + 0x148,temp_v9);
        }
        temp_v3 = param_8;
        if ((piVar10 != (int *)0x0) && (temp_v1 = (**(romwright_code **)(*piVar10 + 8))(), temp_v1 == 0x5c1ce8)) {
          temp_v3 = param_8 >> 8;
        }
        piVar2 = (int *)piVar10[0x5c];
        piVar9 = (int *)piVar10[0x5d];
        temp_v6 = (unsigned int)*(unsigned char *)(piVar10 + 0x7d) | (temp_v3 & 0xff);
        if (piVar2 == piVar9) {
          temp_v1 = piVar10[2];
          if (*(int *)(temp_v1 + 0xb8) != 0) {
            piVar2 = (int *)(*(int *)(temp_v1 + 0xb8) + temp_v1 + 0xb8);
          }
          else {
            piVar2 = (int *)0x0;
          }
          piVar9 = piVar2 + *(int *)(temp_v1 + 0xb4);
        }
        temp_v19 = piVar10[2];
        temp_v18 = temp_v6 | (temp_v18 & 0xffffff00);
        for (; temp_v3 = temp_v17, piVar2 != piVar9; piVar2 = piVar2 + 1) {
          if (*piVar2 != 0) {
            temp_v1 = *piVar2 + (int)piVar2;
          }
          else {
            temp_v1 = 0;
          }
          temp_v2 = nw_gfx_Model_IsMeshVisible(piVar10,temp_v1);
          if (temp_v2 != 0) {
            temp_v3 = *(unsigned int *)(*(int *)(*(int *)(piVar10[0x59] + *(int *)(temp_v1 + 0x1c) * 4) + 0x2c)
                             + 0x20);
            temp_v0 = (char)temp_v3;
            if ((temp_v3 & 0xff) != 1) {
              temp_v0 = '\0';
            }
            if (temp_v0 != '\0') {
              temp_v2 = *(int *)(temp_v19 + 200);
              if (temp_v2 != 0) {
                temp_v2 = temp_v19 + 200 + temp_v2;
              }
              else {
                temp_v2 = 0;
              }
              piVar11 = (int *)(temp_v2 + *(int *)(temp_v1 + 0x18) * 4);
              temp_v2 = *piVar11;
              if (temp_v2 != 0) {
                temp_v2 = (int)piVar11 + temp_v2;
              }
              else {
                temp_v2 = 0;
              }
              temp_v4 = *(int *)(temp_v2 + 0x1c);
              if (temp_v4 != 0) {
                temp_v4 = temp_v2 + 0x1c + temp_v4;
              }
              else {
                temp_v4 = 0;
              }
              nw_gfx_SceneHelper_CalculateDepth(temp_v4 + 4,piVar10 + 0x23,param_7);
            }
            temp_v15 = 0;
            temp_v16 = 0;
            iStack_78 = temp_v1;
            piStack_74 = piVar10;
            FUN_00515e14(param_6,&temp_v15,
                         *(unsigned int *)(*(int *)(*(int *)(piVar10[0x59] + *(int *)(temp_v1 + 0x1c) * 4) +
                                           0x2c) + 0x20) & 0xff,temp_v6);
          }
        }
      }
    }
    temp_v17 = temp_v3;
    param_2 = param_2 + 1;
  } while( 1 );
}

} /* extern "C" */
