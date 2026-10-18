/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00523a44` (_code @ 0x523a44, 0x4b4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_9: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_9_stack;

/* Unsupported intrinsic, declaration required: while (PTRADD). */
/* Supplied declaration required: FUN_00454548. */
/* Supplied declaration required: FUN_00502774. */
/* Supplied declaration required: FUN_00515e14. */
extern int nw_gfx_Model_IsMeshVisible(int *);
/* Supplied declaration required: nw_gfx_SceneHelper_CalculateDepth. */


void FUN_00523a44(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6,int param_7,unsigned int param_8,unsigned int *param_9)

{
/* irregular: 1 goto(s); 6 native warning(s); review required */
  unsigned char temp_v0;
  char temp_v1;
  int *piVar3;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int temp_v9;
  unsigned int uStack_4c;
  int temp_v10;
  int *piStack_44;
  
  do {
    if (param_2 == param_3) {
      *param_1 = param_4;
      param_1[1] = param_5;
      param_1[2] = param_6;
      param_1[3] = param_7;
      param_1[4] = param_8;
      param_1[5] = (unsigned int)param_9;
                    /* WARNING: Treating indirect jump as return */
      return;
    }
    piVar12 = (int *)*param_2;
    piVar11 = piVar12;
    if (piVar12 != (int *)0x0) {
      piVar3 = (int *)(**(romwright_code **)(*piVar12 + 8))(piVar12);
      do {
        if (piVar3 == (int *)0x5c0f34) {
          if (piVar12 != (int *)0x0) {
            *(unsigned char *)(piVar12[0x88] + 0x18) = 0;
          }
          goto LAB_00523aa0;
        }
        piVar3 = (int *)*piVar3;
      } while (piVar3 != (int *)0x0);
      piVar11 = (int *)0x0;
    }
LAB_00523aa0:
    temp_v2 = (**(romwright_code **)*param_9)(param_9,piVar12);
    if (temp_v2 != 0) {
      if (piVar11 != (int *)0x0) {
        if ((char)piVar11[0x8c] == '\0') {
          FUN_00502774(param_4,piVar11[0x88],param_5,param_7);
        }
        FUN_00454548(piVar12,param_7 + 0x148);
        piVar3 = (int *)piVar11[0x5c];
        piVar13 = (int *)piVar11[0x5d];
        temp_v0 = *(unsigned char *)(piVar12 + 0x7d);
        if (piVar3 == piVar13) {
          temp_v2 = piVar11[2];
          if (*(int *)(temp_v2 + 0xb8) != 0) {
            piVar3 = (int *)(*(int *)(temp_v2 + 0xb8) + temp_v2 + 0xb8);
          }
          else {
            piVar3 = (int *)0x0;
          }
          piVar13 = piVar3 + *(int *)(temp_v2 + 0xb4);
        }
        temp_v2 = piVar11[2];
        for (; piVar3 != piVar13; piVar3 = piVar3 + 1) {
          if (*piVar3 != 0) {
            temp_v7 = *piVar3 + (int)piVar3;
          }
          else {
            temp_v7 = 0;
          }
          temp_v3 = nw_gfx_Model_IsMeshVisible(piVar11);
          if (temp_v3 != 0) {
            temp_v4 = *(unsigned int *)(*(int *)(*(int *)(piVar11[0x59] + *(int *)(temp_v7 + 0x1c) * 4) + 0x2c)
                             + 0x20);
            temp_v1 = (char)temp_v4;
            if ((temp_v4 & 0xff) != 1) {
              temp_v1 = '\0';
            }
            if (temp_v1 != '\0') {
              temp_v3 = *(int *)(temp_v2 + 200);
              if (temp_v3 != 0) {
                temp_v3 = temp_v2 + 200 + temp_v3;
              }
              else {
                temp_v3 = 0;
              }
              piVar12 = (int *)(temp_v3 + *(int *)(temp_v7 + 0x18) * 4);
              temp_v3 = *piVar12;
              if (temp_v3 != 0) {
                temp_v3 = temp_v3 + (int)piVar12;
              }
              else {
                temp_v3 = 0;
              }
              if (*(int *)(temp_v3 + 0x2c) != 1) {
                temp_v5 = *(int *)(temp_v3 + 0x1c);
                piVar12 = piVar11 + 0x23;
                if (temp_v5 != 0) {
                  temp_v5 = temp_v5 + temp_v3 + 0x1c;
                }
              }
              else {
                if (*(int *)(temp_v3 + 0x30) != 0) {
                  piVar12 = (int *)(temp_v3 + 0x30 + *(int *)(temp_v3 + 0x30));
                }
                else {
                  piVar12 = (int *)0x0;
                }
                if (*piVar12 != 0) {
                  temp_v5 = (int)piVar12 + *piVar12;
                }
                else {
                  temp_v5 = 0;
                }
                temp_v8 = *(int *)(temp_v5 + 4);
                if (temp_v8 != 0) {
                  piVar12 = (int *)(temp_v5 + 4 + temp_v8);
                }
                else {
                  piVar12 = (int *)0x0;
                }
                temp_v8 = *piVar12;
                temp_v5 = (**(romwright_code **)(*(int *)piVar11[0x88] + 0x1c))((int *)piVar11[0x88]);
                piVar12 = (int *)(*(int *)(temp_v5 + 4) + temp_v8 * 0x30);
                temp_v5 = *(int *)(temp_v3 + 0x1c);
                if (temp_v5 != 0) {
                  temp_v5 = temp_v5 + temp_v3 + 0x1c;
                }
              }
              nw_gfx_SceneHelper_CalculateDepth(temp_v5 + 4,piVar12,param_7);
            }
            temp_v9 = 0;
            uStack_4c = 0;
            temp_v10 = temp_v7;
            piStack_44 = piVar11;
            FUN_00515e14(param_6,&temp_v9,
                         *(unsigned int *)(*(int *)(*(int *)(piVar11[0x59] + *(int *)(temp_v7 + 0x1c) * 4) +
                                           0x2c) + 0x20) & 0xff,(unsigned int)temp_v0 | (param_8 & 0xff));
          }
        }
      }
      else {
        FUN_00454548(piVar12,param_7 + 0x148,0);
        if ((piVar12 != (int *)0x0) && (temp_v2 = (**(romwright_code **)(*piVar12 + 8))(), temp_v2 == 0x5c1ce8)) {
          temp_v4 = (param_8 & 0xffff) >> 8;
        }
        else {
          temp_v4 = param_8 & 0xff;
        }
        temp_v0 = *(unsigned char *)(piVar12 + 0x7d);
        piVar11 = (int *)piVar12[0x5c];
        piVar3 = (int *)piVar12[0x5d];
        if (piVar11 == piVar3) {
          temp_v2 = piVar12[2];
          if (*(int *)(temp_v2 + 0xb8) != 0) {
            piVar11 = (int *)(*(int *)(temp_v2 + 0xb8) + temp_v2 + 0xb8);
          }
          else {
            piVar11 = (int *)0x0;
          }
          piVar3 = piVar11 + *(int *)(temp_v2 + 0xb4);
        }
        temp_v2 = piVar12[2];
        for (; piVar11 != piVar3; piVar11 = piVar11 + 1) {
          if (*piVar11 != 0) {
            temp_v7 = *piVar11 + (int)piVar11;
          }
          else {
            temp_v7 = 0;
          }
          temp_v3 = nw_gfx_Model_IsMeshVisible(piVar12);
          if (temp_v3 != 0) {
            temp_v6 = *(unsigned int *)(*(int *)(*(int *)(piVar12[0x59] + *(int *)(temp_v7 + 0x1c) * 4) + 0x2c)
                             + 0x20);
            temp_v1 = (char)temp_v6;
            if ((temp_v6 & 0xff) != 1) {
              temp_v1 = '\0';
            }
            if (temp_v1 != '\0') {
              temp_v3 = *(int *)(temp_v2 + 200);
              if (temp_v3 != 0) {
                temp_v3 = temp_v2 + 200 + temp_v3;
              }
              else {
                temp_v3 = 0;
              }
              piVar13 = (int *)(temp_v3 + *(int *)(temp_v7 + 0x18) * 4);
              temp_v3 = *piVar13;
              if (temp_v3 != 0) {
                temp_v3 = (int)piVar13 + temp_v3;
              }
              else {
                temp_v3 = 0;
              }
              temp_v5 = *(int *)(temp_v3 + 0x1c);
              if (temp_v5 != 0) {
                temp_v5 = temp_v3 + 0x1c + temp_v5;
              }
              else {
                temp_v5 = 0;
              }
              nw_gfx_SceneHelper_CalculateDepth(temp_v5 + 4,piVar12 + 0x23,param_7);
            }
            temp_v9 = 0;
            uStack_4c = 0;
            temp_v10 = temp_v7;
            piStack_44 = piVar12;
            FUN_00515e14(param_6,&temp_v9,
                         *(unsigned int *)(*(int *)(*(int *)(piVar12[0x59] + *(int *)(temp_v7 + 0x1c) * 4) +
                                           0x2c) + 0x20) & 0xff,temp_v0 | temp_v4);
          }
        }
      }
    }
    param_2 = param_2 + 1;
  } while( 1 );
}
