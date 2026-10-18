/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00436504` (_code @ 0x436504, 0x294 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_4_stack;

/* Supplied declaration required: FUN_00438434. */
/* Supplied declaration required: FUN_0043865c. */
/* Supplied declaration required: FUN_004386a4. */
/* Supplied declaration required: FUN_004387bc. */
/* Supplied declaration required: FUN_004387f0. */
/* Supplied declaration required: FUN_0051553c. */
/* Supplied declaration required: FUN_00515598. */
/* Supplied declaration required: FUN_005155bc. */
/* Supplied declaration required: FUN_00515618. */


unsigned int FUN_00436504(int *param_1,int *param_2,int *param_3,int *param_4)

{
/* irregular: 9 native warning(s); review required */
  unsigned char **ppuVar1;
  int *piVar2;
  unsigned char *puVar3;
  unsigned char *puVar4;
  int *piVar5;
  int temp_v0;
  int temp_v1;
  unsigned char *temp_v2;
  unsigned char *temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int *piStack_34;
  int *temp_v9;
  int *piStack_2c;
  int *piStack_28;
  
  piStack_34 = param_1;
  temp_v9 = param_2;
  piStack_2c = param_3;
  piStack_28 = param_4;
  if (*(short *)(*param_1 + 10) != 0) {
    temp_v0 = *param_4;
    temp_v1 = 1;
    if (temp_v1 < (int)(unsigned int)*(unsigned short *)(*param_1 + 10)) {
      do {
        FUN_004386a4(&temp_v2,param_1 + 1,param_1[5]);
        temp_v6 = 0;
        temp_v7 = *param_3;
        temp_v5 = *param_4;
        ppuVar1 = &temp_v2;
        FUN_00438434(&temp_v2,&temp_v6,&temp_v7,&temp_v5);
        if (ppuVar1 == (unsigned char **)0x0) {
          if (temp_v4 == 0) {
            return 2;
          }
          puVar3 = temp_v3;
          if ((unsigned char **)temp_v3 == &temp_v2) {
            return 2;
          }
          do {
            puVar4 = *(unsigned char **)(puVar3 + 4);
            FUN_004387bc(temp_v4,puVar3,1);
            puVar3 = puVar4;
          } while ((unsigned char **)puVar4 != &temp_v2);
          return 2;
        }
        piVar2 = *(int **)(temp_v0 + 0x10);
        piVar5 = (int *)(temp_v0 + 8);
        FUN_004387f0(piVar2,2);
        if (piVar2 == (int *)0x0) {
          if (temp_v4 == 0) {
            return 2;
          }
          puVar3 = temp_v3;
          if ((unsigned char **)temp_v3 == &temp_v2) {
            return 2;
          }
          do {
            puVar4 = *(unsigned char **)(puVar3 + 4);
            FUN_004387bc(temp_v4,puVar3,1);
            puVar3 = puVar4;
          } while ((unsigned char **)puVar4 != &temp_v2);
          return 2;
        }
        if (piVar2 != (int *)0xfffffff8) {
          FUN_00515598();
        }
        *piVar2 = *piVar5;
        piVar2[1] = (int)piVar5;
        *piVar5 = (int)piVar2;
        *(int **)(*piVar2 + 4) = piVar2;
        temp_v5 = temp_v6;
        FUN_0051553c(piVar2 + 2,&temp_v5);
        temp_v5 = *param_4;
        FUN_0043865c(&temp_v8,&temp_v2,&temp_v5);
        temp_v0 = *(int *)(temp_v8 + 0xc);
        if (temp_v4 != 0) {
          puVar3 = temp_v3;
          if ((unsigned char **)temp_v3 != &temp_v2) {
            do {
              puVar4 = *(unsigned char **)(puVar3 + 4);
              FUN_004387bc(temp_v4,puVar3,1);
              puVar3 = puVar4;
            } while ((unsigned char **)puVar4 != &temp_v2);
          }
          temp_v4 = 0;
          temp_v2 = (unsigned char *)&temp_v2;
          temp_v3 = (unsigned char *)&temp_v2;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < (int)(unsigned int)*(unsigned short *)(*param_1 + 10));
    }
    *temp_v9 = temp_v0;
  }
  else {
    temp_v0 = *param_3;
    piVar2 = *(int **)(temp_v0 + 0xc);
    while (piVar2 != (int *)(temp_v0 + 8)) {
      *(int *)(*piVar2 + 4) = piVar2[1];
      *(int *)piVar2[1] = *piVar2;
      FUN_005155bc(piVar2 + 2);
      FUN_004387bc(*(unsigned int *)(temp_v0 + 0x10),piVar2,2);
      piVar2 = *(int **)(temp_v0 + 0xc);
    }
    FUN_00515618(&temp_v3,(int *)(temp_v0 + 8));
    if (temp_v3 == (unsigned char *)0x0) {
      return 2;
    }
    temp_v2 = (unsigned char *)*param_4;
    FUN_0051553c(temp_v3 + 8,&temp_v2);
    *temp_v9 = *param_4;
  }
  *param_1 = *(int *)(*param_1 + 4);
  return 0;
}
