/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035c9bc` (_code @ 0x35c9bc, 0x348 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} param_4_stack;

/* Supplied declaration required: FUN_00237c2c. */
/* Supplied declaration required: FUN_00237c74. */
/* Supplied declaration required: FUN_00237e94. */
/* Supplied declaration required: FUN_00237efc. */
/* Supplied declaration required: FUN_00237f10. */
/* Supplied declaration required: FUN_00238308. */
/* Supplied declaration required: FUN_00238c44. */
/* Supplied declaration required: FUN_0035ebd0. */
/* Supplied declaration required: FUN_0035ec08. */


unsigned int FUN_0035c9bc(int *param_1,unsigned int *param_2,int *param_3,int *param_4)

{
/* irregular: 9 native warning(s); review required */
  unsigned char **ppuVar1;
  int *piVar2;
  unsigned char *puVar3;
  unsigned char *puVar4;
  int *piVar5;
  unsigned int temp_v0;
  int temp_v1;
  unsigned char *temp_v2;
  unsigned char *temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned char *temp_v8;
  unsigned char *temp_v9;
  int temp_v10;
  int temp_v11 [3];
  int *piStack_34;
  unsigned int *temp_v12;
  int *piStack_2c;
  int *piStack_28;
  
  piStack_34 = param_1;
  temp_v12 = param_2;
  piStack_2c = param_3;
  piStack_28 = param_4;
  FUN_00237e94(&temp_v9,param_1);
  if (temp_v9 == (unsigned char *)0x0) {
    return 2;
  }
  temp_v1 = *param_4;
  temp_v0 = 1;
  if (temp_v0 < *(unsigned short *)(*param_1 + 0xc)) {
    do {
      FUN_0035ec08(&temp_v2,param_1 + 1,param_1[5]);
      temp_v7 = 0;
      temp_v10 = *param_3;
      temp_v6 = *param_4;
      ppuVar1 = &temp_v2;
      FUN_00237c74(&temp_v2,&temp_v7,&temp_v10,&temp_v6);
      if (ppuVar1 == (unsigned char **)0x0) {
        if (temp_v4 == 0) {
          return 2;
        }
        puVar4 = temp_v3;
        if ((unsigned char **)temp_v3 == &temp_v2) {
          return 2;
        }
        do {
          puVar3 = *(unsigned char **)(puVar4 + 4);
          FUN_00238308(temp_v4,puVar4,1);
          puVar4 = puVar3;
        } while ((unsigned char **)puVar3 != &temp_v2);
        return 2;
      }
      piVar2 = *(int **)(temp_v1 + 0x10);
      piVar5 = (int *)(temp_v1 + 8);
      FUN_00238c44(piVar2,2);
      if (piVar2 == (int *)0x0) {
        if (temp_v4 == 0) {
          return 2;
        }
        puVar4 = temp_v3;
        if ((unsigned char **)temp_v3 == &temp_v2) {
          return 2;
        }
        do {
          puVar3 = *(unsigned char **)(puVar4 + 4);
          FUN_00238308(temp_v4,puVar4,1);
          puVar4 = puVar3;
        } while ((unsigned char **)puVar3 != &temp_v2);
        return 2;
      }
      if (piVar2 != (int *)0xfffffff8) {
        FUN_00237f10();
      }
      *piVar2 = *piVar5;
      piVar2[1] = (int)piVar5;
      *piVar5 = (int)piVar2;
      *(int **)(*piVar2 + 4) = piVar2;
      temp_v5 = temp_v7;
      FUN_00237efc(piVar2 + 2,&temp_v5);
      temp_v6 = *param_4;
      FUN_0035ebd0(temp_v11,&temp_v2,&temp_v6);
      temp_v1 = *(int *)(temp_v11[0] + 0xc);
      if ((unsigned int)*(unsigned short *)(*param_1 + 10) <= temp_v0 + 1) {
        piVar2 = *(int **)(temp_v1 + 0x10);
        piVar5 = (int *)(temp_v1 + 8);
        FUN_00238c44(piVar2,2);
        if (piVar2 == (int *)0x0) {
          if (temp_v4 == 0) {
            return 2;
          }
          puVar4 = temp_v3;
          if ((unsigned char **)temp_v3 == &temp_v2) {
            return 2;
          }
          do {
            puVar3 = *(unsigned char **)(puVar4 + 4);
            FUN_00238308(temp_v4,puVar4,1);
            puVar4 = puVar3;
          } while ((unsigned char **)puVar3 != &temp_v2);
          return 2;
        }
        if (piVar2 != (int *)0xfffffff8) {
          FUN_00237f10();
        }
        *piVar2 = *piVar5;
        piVar2[1] = (int)piVar5;
        *piVar5 = (int)piVar2;
        *(int **)(*piVar2 + 4) = piVar2;
        temp_v8 = temp_v9;
        FUN_00237efc(piVar2 + 2,&temp_v8);
      }
      if (temp_v4 != 0) {
        puVar4 = temp_v3;
        if ((unsigned char **)temp_v3 != &temp_v2) {
          do {
            puVar3 = *(unsigned char **)(puVar4 + 4);
            FUN_00238308(temp_v4,puVar4,1);
            puVar4 = puVar3;
          } while ((unsigned char **)puVar3 != &temp_v2);
        }
        temp_v4 = 0;
        temp_v2 = (unsigned char *)&temp_v2;
        temp_v3 = (unsigned char *)&temp_v2;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *(unsigned short *)(*param_1 + 0xc));
  }
  if (*(short *)(*param_1 + 10) == 0) {
    FUN_00237c2c(&temp_v3,*param_3 + 8);
    if (temp_v3 == (unsigned char *)0x0) {
      return 2;
    }
    temp_v2 = temp_v9;
    FUN_00237efc(temp_v3 + 8,&temp_v2);
  }
  if ((*(unsigned short *)(*param_1 + 10) < 2) && (*(short *)(*param_1 + 0xc) != 0)) {
    FUN_00237c2c(&temp_v3,*param_4 + 8);
    if (temp_v3 == (unsigned char *)0x0) {
      return 2;
    }
    temp_v2 = temp_v9;
    FUN_00237efc(temp_v3 + 8,&temp_v2);
  }
  *temp_v12 = (unsigned int)temp_v9;
  *param_1 = *(int *)(*param_1 + 4);
  return 0;
}
