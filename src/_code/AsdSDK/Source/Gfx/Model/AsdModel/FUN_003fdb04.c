/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fdb04` (_code @ 0x3fdb04, 0x514 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_9: 14 slot(s), 56 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} param_9_stack;

/* Supplied declaration required: FUN_00225750. */
/* Supplied declaration required: FUN_00225824. */
/* Supplied declaration required: FUN_00225a74. */
extern int FUN_00225b20(int *);
/* Supplied declaration required: FUN_00225ba4. */
/* Supplied declaration required: FUN_002ad6d8. */
/* Supplied declaration required: FUN_002c0014. */


void FUN_003fdb04(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3,unsigned int param_4,
                 unsigned int param_5,float param_6,int param_7,unsigned int param_8,unsigned int *param_9)

{
/* irregular: 1 goto(s); 7 native warning(s); review required */
  unsigned char temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  unsigned int temp_v3;
  unsigned char temp_v4;
  float unaff_r9;
  float temp_v5;
  float temp_v6;
  unsigned long long temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  int *temp_v11;
  int *temp_v12;
  int temp_v13;
  float temp_v14;
  int temp_v15;
  float temp_v16;
  float temp_v17;
  
  if (param_2 != param_3) {
    temp_v7 = 0x3f800000;
    temp_v6 = 0.0f;
    do {
      piVar6 = (int *)*param_2;
      if (piVar6 != (int *)0x0) {
        piVar2 = (int *)(**(romwright_code **)(*piVar6 + 8))(piVar6);
        do {
          if (piVar2 == (int *)0x472288) {
            piVar2 = piVar6;
            if (piVar6 != (int *)0x0) {
              *(unsigned char *)(piVar6[0x88] + 0x18) = 0;
            }
            goto LAB_003fdb68;
          }
          piVar2 = (int *)*piVar2;
        } while (piVar2 != (int *)0x0);
      }
      piVar2 = (int *)0x0;
LAB_003fdb68:
      temp_v1 = (**(romwright_code **)*param_9)(param_9,piVar6);
      if (temp_v1 != 0) {
        if (piVar2 != (int *)0x0) {
          if ((char)piVar2[0x8c] == '\0') {
            FUN_00225ba4(param_4,piVar2[0x88],param_5,param_7);
          }
          FUN_002c0014(piVar6,param_7 + 0x148);
          piVar5 = (int *)piVar2[0x5c];
          piVar7 = (int *)piVar2[0x5d];
          if (piVar5 == piVar7) {
            temp_v1 = piVar2[2];
            if (*(int *)(temp_v1 + 0xb8) != 0) {
              piVar5 = (int *)(*(int *)(temp_v1 + 0xb8) + temp_v1 + 0xb8);
            }
            else {
              piVar5 = (int *)0x0;
            }
            piVar7 = piVar5 + *(int *)(temp_v1 + 0xb4);
          }
          temp_v5 = (float)(((unsigned int)unaff_r9 & 0xffffff00) |
                          (param_8 & 0xff) | (unsigned int)*(unsigned char *)(piVar6 + 0x7d));
          temp_v8 = (float)piVar2[0x26];
          temp_v9 = (float)piVar2[0x2a];
          temp_v10 = (float)piVar2[0x2e];
          temp_v1 = piVar2[2];
          FUN_002ad6d8(&temp_v8,param_7 + 0x148);
          temp_v13 = temp_v1;
          temp_v16 = -(*(float *)(param_7 + 0x1cc) * temp_v9 +
                       *(float *)(param_7 + 0x1d0) * temp_v10 +
                      *(float *)(param_7 + 0x1d4) + *(float *)(param_7 + 0x1c8) * temp_v8) /
                     (*(float *)(param_7 + 0x1dc) * temp_v9 +
                      *(float *)(param_7 + 0x1e0) * temp_v10 +
                     *(float *)(param_7 + 0x1e4) + *(float *)(param_7 + 0x1d8) * temp_v8);
          if ((int)temp_v16 >= 0x3f800001) {
            temp_v16 = (float)temp_v7;
          }
          else if (temp_v16 < temp_v6) {
            temp_v16 = temp_v6;
          }
          temp_v15 = param_7;
          temp_v14 = param_6;
          unaff_r9 = temp_v5;
          temp_v12 = piVar2;
          temp_v17 = temp_v5;
          if (piVar5 != piVar7) {
            unaff_r9 = 0.0f;
            do {
              temp_v5 = unaff_r9;
              if (*piVar5 != 0) {
                temp_v5 = (float)(*piVar5 + (int)piVar5);
              }
              temp_v1 = FUN_00225b20(temp_v12);
              if (temp_v1 != 0) {
                temp_v3 = *(unsigned int *)(*(int *)(*(int *)(temp_v12[0x59] +
                                                   *(int *)((int)temp_v5 + 0x1c) * 4) + 0x2c) + 0x20)
                        & 0xff;
                if (temp_v3 == 0) {
                  FUN_00225750(&temp_v12,temp_v5,temp_v15);
                }
                temp_v11 = temp_v12;
                temp_v8 = 0.0f;
                temp_v9 = 0.0f;
                temp_v10 = temp_v5;
                FUN_00225824(temp_v14,&temp_v8,temp_v3,(unsigned int)temp_v17 & 0xff);
              }
              piVar5 = piVar5 + 1;
            } while (piVar5 != piVar7);
          }
        }
        else {
          FUN_002c0014(piVar6,param_7 + 0x148,0);
          if ((piVar6 != (int *)0x0) && (temp_v1 = (**(romwright_code **)(*piVar6 + 8))(), temp_v1 == 0x4721e0)) {
            temp_v3 = (param_8 & 0xffff) >> 8;
          }
          else {
            temp_v3 = param_8 & 0xff;
          }
          temp_v0 = *(unsigned char *)(piVar6 + 0x7d);
          piVar2 = (int *)piVar6[0x5c];
          piVar5 = (int *)piVar6[0x5d];
          if (piVar2 == piVar5) {
            temp_v1 = piVar6[2];
            if (*(int *)(temp_v1 + 0xb8) != 0) {
              piVar2 = (int *)(*(int *)(temp_v1 + 0xb8) + temp_v1 + 0xb8);
            }
            else {
              piVar2 = (int *)0x0;
            }
            piVar5 = piVar2 + *(int *)(temp_v1 + 0xb4);
          }
          piVar7 = (int *)piVar6[2];
          temp_v8 = (float)piVar6[0x26];
          temp_v9 = (float)piVar6[0x2a];
          temp_v10 = (float)piVar6[0x2e];
          FUN_002ad6d8(&temp_v8,param_7 + 0x148);
          temp_v12 = piVar7;
          temp_v13 = param_7;
          for (; unaff_r9 = param_6, piVar2 != piVar5; piVar2 = piVar2 + 1) {
            if (*piVar2 != 0) {
              temp_v5 = (float)(*piVar2 + (int)piVar2);
            }
            else {
              temp_v5 = 0.0f;
            }
            temp_v1 = FUN_00225b20(piVar6);
            if (temp_v1 != 0) {
              temp_v4 = *(unsigned int *)(*(int *)(*(int *)(piVar6[0x59] + *(int *)((int)temp_v5 + 0x1c) * 4) +
                                        0x2c) + 0x20);
              if (temp_v4 == 0) {
                temp_v1 = temp_v12[0x32];
                if (temp_v1 != 0) {
                  temp_v1 = (int)(temp_v12 + 0x32) + temp_v1;
                }
                else {
                  temp_v1 = 0;
                }
                piVar7 = (int *)(temp_v1 + *(int *)((int)temp_v5 + 0x18) * 4);
                temp_v1 = *piVar7;
                if (temp_v1 != 0) {
                  temp_v1 = (int)piVar7 + temp_v1;
                }
                else {
                  temp_v1 = 0;
                }
                temp_v2 = *(int *)(temp_v1 + 0x1c);
                if (temp_v2 != 0) {
                  temp_v2 = temp_v1 + 0x1c + temp_v2;
                }
                else {
                  temp_v2 = 0;
                }
                FUN_00225a74(temp_v2 + 4,piVar6 + 0x23,temp_v13);
              }
              temp_v8 = 0.0f;
              temp_v9 = 0.0f;
              temp_v10 = temp_v5;
              temp_v11 = piVar6;
              FUN_00225824(param_6,&temp_v8,temp_v4,temp_v3 | temp_v0);
            }
          }
        }
      }
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
  }
  *param_1 = param_4;
  param_1[1] = param_5;
  *(float *)&param_1[2] = param_6;
  param_1[3] = param_7;
  param_1[4] = param_8;
  param_1[5] = (unsigned int)param_9;
                    /* WARNING: Treating indirect jump as return */
  return;
}
