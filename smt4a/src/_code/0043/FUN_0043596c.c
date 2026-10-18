/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043596c` (_code @ 0x43596c, 0x264 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp64; /* 0x64: local_64 */
} param_4_stack;

/* Supplied declaration required: FUN_004351b8. */
/* Supplied declaration required: FUN_004387f0. */
/* Supplied declaration required: FUN_0051553c. */
/* Supplied declaration required: FUN_00515598. */


int * FUN_0043596c(int *param_1,int *param_2,int *param_3,romwright_code *param_4)

{
/* irregular: irregular input(s): in_r12; 4 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int *piVar3;
  unsigned int temp_v1;
  int *piVar5;
  romwright_code *in_r12;
  unsigned char temp_v2;
  int *temp_v3 [3];
  int *temp_v4 [2];
  int *temp_v5 [2];
  int *temp_v6;
  int temp_v7 [2];
  int *temp_v8;
  int temp_v9;
  int temp_v10;
  int *piStack_30;
  int *temp_v11;
  int *piStack_28;
  
  temp_v6 = (int *)0x0;
  temp_v7[0] = *param_3;
  piVar3 = param_1;
  piStack_30 = param_1;
  temp_v11 = param_2;
  piStack_28 = param_3;
  FUN_004351b8(param_1,&temp_v6,temp_v7);
  if (piVar3 == (int *)0x0) {
    if (*(char *)(*param_1 + 8) != '\x01') {
      *temp_v11 = (int)temp_v6;
    }
    else {
      piVar3 = (int *)param_1[3];
      piVar2 = param_1 + 1;
      FUN_004387f0(piVar3,2);
      if (piVar3 == (int *)0x0) {
        return (int *)0x2;
      }
      piVar5 = piVar3 + 2;
      if (piVar5 != (int *)0x0) {
        piVar3[4] = 0;
        *piVar5 = (int)piVar5;
        piVar3[5] = 0;
        piVar3[3] = (int)piVar5;
      }
      *piVar3 = *piVar2;
      piVar3[1] = (int)piVar2;
      *piVar2 = (int)piVar3;
      *(int **)(*piVar3 + 4) = piVar3;
      piVar3[4] = param_1[5];
      piVar5 = temp_v6 + 2;
      piVar2 = (int *)temp_v6[4];
      FUN_004387f0(piVar2,2);
      if (piVar2 == (int *)0x0) {
        return (int *)0x2;
      }
      if (piVar2 != (int *)0xfffffff8) {
        FUN_00515598();
      }
      *piVar2 = *piVar5;
      piVar2[1] = (int)piVar5;
      *piVar5 = (int)piVar2;
      *(int **)(*piVar2 + 4) = piVar2;
      temp_v4[0] = piVar3;
      FUN_0051553c(piVar2 + 2,temp_v4);
      while (*(char *)(*param_1 + 8) == '\x01') {
        *param_1 = *(int *)(*param_1 + 4);
        temp_v5[0] = (int *)*param_3;
        temp_v9 = 0;
        temp_v8 = (int *)0x0;
        while( 1 ) {
          temp_v0 = (unsigned int)*(unsigned char *)(*param_1 + 8) * 8;
          piVar2 = (int *)(temp_v0 + 0x5c14c4);
          temp_v1 = *(unsigned int *)(temp_v0 + 0x5c14c8);
          temp_v2 = (temp_v1 & 1) == 0;
          if (temp_v2) {
            param_4 = (romwright_code *)*piVar2;
          }
          piVar5 = (int *)((int)param_1 + ((int)temp_v1 >> 1));
          if (!temp_v2) {
            param_4 = *(romwright_code **)(*piVar5 + *piVar2);
          }
          temp_v3[0] = temp_v5[0];
          piVar2 = (int *)(*param_4)(piVar5,&temp_v9,temp_v3);
          if (piVar2 == (int *)0x1) break;
          if (piVar2 != (int *)0x0) {
            return piVar2;
          }
          temp_v0 = (unsigned int)*(unsigned char *)(*param_1 + 8) * 8;
          piVar2 = (int *)(temp_v0 + 0x5c155c);
          temp_v1 = *(unsigned int *)(temp_v0 + 0x5c1560);
          temp_v2 = (temp_v1 & 1) == 0;
          if (temp_v2) {
            in_r12 = (romwright_code *)*piVar2;
          }
          piVar5 = (int *)((int)param_1 + ((int)temp_v1 >> 1));
          if (!temp_v2) {
            in_r12 = *(romwright_code **)(*piVar5 + *piVar2);
          }
          param_4 = (romwright_code *)&temp_v10;
          temp_v3[0] = temp_v5[0];
          temp_v10 = temp_v9;
          piVar2 = (int *)(*in_r12)(piVar5,&temp_v8,temp_v3);
          if ((int *)0x1 < piVar2) {
            return piVar2;
          }
          temp_v5[0] = temp_v8;
        }
        piVar5 = temp_v5[0] + 2;
        temp_v6 = temp_v5[0];
        piVar2 = (int *)temp_v5[0][4];
        FUN_004387f0(piVar2,2);
        if (piVar2 == (int *)0x0) {
          piVar2 = (int *)0x0;
        }
        else {
          if (piVar2 != (int *)0xfffffff8) {
            FUN_00515598();
          }
          *piVar2 = *piVar5;
          piVar2[1] = (int)piVar5;
          *piVar5 = (int)piVar2;
          *(int **)(*piVar2 + 4) = piVar2;
        }
        if (piVar2 == (int *)0x0) {
          return (int *)0x2;
        }
        temp_v5[0] = piVar3;
        FUN_0051553c(piVar2 + 2,temp_v5);
      }
      *temp_v11 = (int)piVar3;
    }
    piVar3 = (int *)0x0;
  }
  return piVar3;
}
