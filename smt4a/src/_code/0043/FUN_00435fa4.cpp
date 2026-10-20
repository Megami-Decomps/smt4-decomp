/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00435fa4` (_code @ 0x435fa4, 0x27c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00438434(unsigned int *******, int *, int *, int *);
int FUN_0043865c(int [3], unsigned int ********, int *);
int FUN_004386a4(unsigned int ********, int *, int);
int FUN_004387bc(int, unsigned int *******, int);
int FUN_004387f0(int *, int);
int FUN_0051553c(...);
int FUN_00515598(void);
int FUN_00515618(...);

/* stack frame of param_4: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
} param_4_stack;

/* Supplied declaration required: FUN_00438434. */
/* Supplied declaration required: FUN_0043865c. */
/* Supplied declaration required: FUN_004386a4. */
/* Supplied declaration required: FUN_004387bc. */
/* Supplied declaration required: FUN_004387f0. */
/* Supplied declaration required: FUN_0051553c. */
/* Supplied declaration required: FUN_00515598. */
/* Supplied declaration required: FUN_00515618. */


/* WARNING: Type propagation algorithm not settling */

unsigned int FUN_00435fa4(int *param_1,int *param_2,int *param_3,int *param_4)

{
/* irregular: 9 native warning(s); review required */
  unsigned int *******pppppppuVar1;
  int *piVar2;
  unsigned int *******pppppppuVar3;
  int *piVar4;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3 [2];
  unsigned int *******temp_v4;
  unsigned int *******temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8 [3];
  int temp_v9;
  int temp_v10;
  int temp_v11 [3];
  int temp_v12;
  int *piStack_34;
  int *temp_v13;
  int *piStack_2c;
  int *piStack_28;
  
  piStack_34 = param_1;
  temp_v13 = param_2;
  piStack_2c = param_3;
  piStack_28 = param_4;
  if (*(short *)(*param_1 + 10) != 0) {
    temp_v12 = *param_3;
    temp_v1 = 1;
    temp_v0 = *param_4;
    if (*(unsigned short *)(*param_1 + 10) >= 2) {
      do {
        FUN_004386a4(&temp_v4,param_1 + 1,param_1[5]);
        temp_v7 = 0;
        temp_v10 = *param_3;
        temp_v2 = *param_4;
        pppppppuVar1 = (unsigned int *******)&temp_v4;
        FUN_00438434(pppppppuVar1,&temp_v7,&temp_v10,&temp_v2);
        if (pppppppuVar1 == (unsigned int *******)0x0) {
          pppppppuVar1 = temp_v5;
          if (temp_v6 == 0) {
            return 2;
          }
          while ((unsigned int ********)pppppppuVar1 != &temp_v4) {
            pppppppuVar3 = (unsigned int *******)pppppppuVar1[1];
            FUN_004387bc(temp_v6,pppppppuVar1,1);
            pppppppuVar1 = pppppppuVar3;
          }
          return 2;
        }
        piVar2 = *(int **)(temp_v0 + 0x10);
        piVar4 = (int *)(temp_v0 + 8);
        FUN_004387f0(piVar2,2);
        if (piVar2 == (int *)0x0) {
          pppppppuVar1 = temp_v5;
          if (temp_v6 == 0) {
            return 2;
          }
          while ((unsigned int ********)pppppppuVar1 != &temp_v4) {
            pppppppuVar3 = (unsigned int *******)pppppppuVar1[1];
            FUN_004387bc(temp_v6,pppppppuVar1,1);
            pppppppuVar1 = pppppppuVar3;
          }
          return 2;
        }
        if (piVar2 != (int *)0xfffffff8) {
          FUN_00515598();
        }
        *piVar2 = *piVar4;
        piVar2[1] = (int)piVar4;
        *piVar4 = (int)piVar2;
        *(int **)(*piVar2 + 4) = piVar2;
        temp_v2 = temp_v7;
        FUN_0051553c(piVar2 + 2,&temp_v2);
        temp_v12 = temp_v7;
        temp_v2 = *param_4;
        FUN_0043865c(temp_v11,&temp_v4,&temp_v2);
        temp_v0 = *(int *)(temp_v11[0] + 0xc);
        pppppppuVar1 = temp_v5;
        if (temp_v6 != 0) {
          while ((unsigned int ********)pppppppuVar1 != &temp_v4) {
            pppppppuVar3 = (unsigned int *******)pppppppuVar1[1];
            FUN_004387bc(temp_v6,pppppppuVar1,1);
            pppppppuVar1 = pppppppuVar3;
          }
          temp_v6 = 0;
          temp_v4 = (unsigned int *******)&temp_v4;
          temp_v5 = (unsigned int *******)&temp_v4;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < (int)(unsigned int)*(unsigned short *)(*param_1 + 10));
    }
    FUN_00515618(&temp_v9,temp_v0 + 8);
    if (temp_v9 != 0) {
      temp_v8[0] = temp_v12;
      FUN_0051553c(temp_v9 + 8,temp_v8);
      *temp_v13 = temp_v0;
      *param_1 = *(int *)(*param_1 + 4);
      return 0;
    }
  }
  else {
    FUN_00515618(temp_v3,*param_4 + 8);
    if (temp_v3[0] != 0) {
      temp_v2 = *param_3;
      FUN_0051553c(temp_v3[0] + 8,&temp_v2);
      *temp_v13 = *param_3;
      *param_1 = *(int *)(*param_1 + 4);
      return 0;
    }
  }
  return 2;
}

} /* extern "C" */
