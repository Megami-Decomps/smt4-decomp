/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00438434` (_code @ 0x438434, 0x228 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_4_stack;

/* Supplied declaration required: FUN_00438434. */
/* Supplied declaration required: FUN_004387f0. */
extern int FUN_005153f0(int *, int, int *, int);
/* Supplied declaration required: FUN_00515598. */


unsigned int FUN_00438434(int *param_1,unsigned int *param_2,int *param_3,int *param_4)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  int temp_v0;
  unsigned int temp_v1;
  int *piVar5;
  int temp_v2;
  int *piVar7;
  unsigned char temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7 [2];
  int *piStack_34;
  unsigned int *temp_v8;
  int *piStack_2c;
  int *piStack_28;
  
  piVar5 = (int *)param_1[3];
  piVar1 = (int *)piVar5[2];
  piStack_34 = param_1;
  temp_v8 = param_2;
  piStack_2c = param_3;
  piStack_28 = param_4;
  FUN_004387f0(piVar1,2);
  temp_v1 = 0;
  if (piVar1 != (int *)0x0) {
    piVar2 = piVar1 + 2;
    if (piVar2 != (int *)0x0) {
      piVar1[4] = 0;
      *piVar2 = (int)piVar2;
      piVar1[5] = 0;
      piVar1[3] = (int)piVar2;
    }
    *piVar1 = *piVar5;
    piVar1[1] = (int)piVar5;
    *piVar5 = (int)piVar1;
    *(int **)(*piVar1 + 4) = piVar1;
    piVar1[4] = param_1[4];
    piVar5 = (int *)param_1[2];
    FUN_004387f0(piVar5,1);
    temp_v1 = 0;
    if (piVar5 != (int *)0x0) {
      if (piVar5 + 2 != (int *)0x0) {
        piVar5[2] = 0;
        piVar5[3] = 0;
      }
      *piVar5 = *param_1;
      piVar5[1] = (int)param_1;
      *param_1 = (int)piVar5;
      *(int **)(*piVar5 + 4) = piVar5;
      piVar5[2] = *param_3;
      piVar5[3] = (int)piVar1;
      if (*param_3 != *param_4) {
        temp_v6 = *param_3 + 8;
        temp_v2 = *(int *)(*param_3 + 0xc);
        if (temp_v2 != temp_v6) {
          do {
            piVar5 = (int *)param_1[1];
            if (piVar5 != param_1) {
              do {
                temp_v3 = piVar5[2] != *(int *)(temp_v2 + 8);
                if (temp_v3) {
                  piVar5 = (int *)piVar5[1];
                }
              } while (temp_v3 && piVar5 != param_1);
            }
            if (piVar5 != param_1) {
              piVar2 = (int *)piVar1[4];
              piVar7 = piVar1 + 2;
              FUN_004387f0(piVar2,2);
              if (piVar2 == (int *)0x0) {
                return 0;
              }
              if (piVar2 != (int *)0xfffffff8) {
                FUN_00515598();
              }
              *piVar2 = *piVar7;
              piVar2[1] = (int)piVar7;
              *piVar7 = (int)piVar2;
              *(int **)(*piVar2 + 4) = piVar2;
              temp_v4 = piVar5[3];
              temp_v0 = FUN_005153f0(piVar2 + 2,temp_v2 + 8,&temp_v4,param_1[4]);
            }
            else {
              temp_v5 = 0;
              temp_v7[0] = *(unsigned int *)(temp_v2 + 8);
              temp_v4 = *param_4;
              piVar5 = param_1;
              FUN_00438434(param_1,(unsigned int *)&temp_v5,(int *)temp_v7,&temp_v4);
              if (piVar5 == (int *)0x0) {
                return 0;
              }
              piVar5 = (int *)piVar1[4];
              piVar2 = piVar1 + 2;
              FUN_004387f0(piVar5,2);
              if (piVar5 == (int *)0x0) {
                return 0;
              }
              if (piVar5 != (int *)0xfffffff8) {
                FUN_00515598();
              }
              *piVar5 = *piVar2;
              piVar5[1] = (int)piVar2;
              *piVar2 = (int)piVar5;
              *(int **)(*piVar5 + 4) = piVar5;
              temp_v4 = temp_v5;
              temp_v0 = FUN_005153f0(piVar5 + 2,temp_v2 + 8,&temp_v4,param_1[4]);
            }
            if (temp_v0 == 0) {
              return 0;
            }
            temp_v2 = *(int *)(temp_v2 + 4);
          } while (temp_v2 != temp_v6);
        }
      }
      *temp_v8 = (unsigned int)piVar1;
      temp_v1 = 1;
    }
  }
  return temp_v1;
}
