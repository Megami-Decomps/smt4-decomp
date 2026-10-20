/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035d8dc` (_code @ 0x35d8dc, 0x504 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023799c(unsigned int *, unsigned char *);
int FUN_00237a20(...);
int FUN_00238170(...);
int FUN_00238aac(...);
int FUN_0035d7e8(int *, unsigned int *, unsigned char *);
int FUN_003e0dc0(int *, unsigned char **);
int FUN_003f7138(...);
int FUN_003f7168(void);

/* stack frame of param_2: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_2_stack;

/* Supplied declaration required: FUN_0023799c. */
/* Supplied declaration required: FUN_00237a20. */
/* Supplied declaration required: FUN_00238170. */
/* Supplied declaration required: FUN_00238aac. */
/* Supplied declaration required: FUN_0035d7e8. */
extern int FUN_0035e5a8(int *, unsigned char **);
extern int FUN_0035e7ec(unsigned char **, int *);
/* Supplied declaration required: FUN_003e0dc0. */
/* Supplied declaration required: FUN_003f7138. */
/* Supplied declaration required: FUN_003f7168. */


unsigned int FUN_0035d8dc(unsigned int *param_1,int *param_2)

{
/* irregular: 8 native warning(s); review required */
  unsigned int unique0x100003ab;
  unsigned int unique0x1000038b;
  int *piVar1;
  int temp_v0;
  unsigned char *puVar3;
  unsigned char *puVar4;
  int temp_v1;
  unsigned int temp_v2;
  int *piVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  unsigned char *temp_v3;
  unsigned int *temp_v4;
  int *temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8 [2];
  unsigned int *puStack_2c;
  int *temp_v9;
  
  temp_v0 = *param_2;
  piVar7 = *(int **)(temp_v0 + 0x18);
  puStack_2c = param_1;
  temp_v9 = param_2;
  do {
    while( 1 ) {
      if (piVar7 == (int *)(temp_v0 + 0x14)) {
        return 1;
      }
      if ((char)piVar7[3] == '\x03') break;
      piVar7 = (int *)piVar7[1];
    }
    temp_v6 = (param_1[4] + 0xf) >> 4;
    puVar3 = (unsigned char *)*param_1;
    FUN_00238aac(puVar3,temp_v6);
    if (puVar3 == (unsigned char *)0x0) {
      return 0;
    }
    if (param_1[4] != 0) {
      puVar4 = puVar3 + -1;
      if ((param_1[4] & 1) != 0) {
        *puVar3 = 0;
        puVar4 = puVar3;
      }
      for (temp_v2 = (unsigned int)param_1[4] >> 1; temp_v2 != 0; temp_v2 = temp_v2 - 1) {
        puVar4[1] = 0;
        puVar4 = puVar4 + 2;
        *puVar4 = 0;
      }
    }
    puVar3[*(int *)(piVar7[2] + 0x14)] = 1;
    temp_v5 = (int *)piVar7[6];
    temp_v3 = (unsigned char *)&temp_v3;
    temp_v4 = (unsigned int *)&temp_v3;
    piVar12 = (int *)piVar7[5];
    for (unique0x1000038b = piVar7[5]; piVar12 != piVar7 + 4; unique0x100003ab = piVar12[1]) {
      piVar10 = temp_v5;
      FUN_00238aac(temp_v5,1);
      if (piVar10 == (int *)0x0) {
        if (temp_v5 == (int *)0x0) {
          return 0;
        }
        puVar9 = temp_v4;
        if ((unsigned char **)temp_v4 == &temp_v3) {
          return 0;
        }
        do {
          puVar8 = (unsigned int *)puVar9[1];
          FUN_00238170(temp_v5,puVar9,1);
          puVar9 = puVar8;
        } while ((unsigned char **)puVar8 != &temp_v3);
        return 0;
      }
      *piVar10 = (int)temp_v3;
      piVar10[1] = (int)&temp_v3;
      *(int **)(*piVar10 + 4) = piVar10;
      piVar10[2] = piVar12[2];
      temp_v3 = (unsigned char *)piVar10;
      piVar12 = (int *)piVar12[1];
    }
    piVar12 = *(int **)(temp_v0 + 0x18);
    while (piVar12 != (int *)(temp_v0 + 0x14)) {
      if (piVar12 == piVar7) {
        piVar12 = (int *)piVar12[1];
      }
      else if ((char)piVar12[3] == '\x03') {
        piVar10 = piVar12 + 4;
        FUN_003e0dc0(piVar10,&temp_v3);
        if (piVar10 == (int *)0x0) {
          piVar12 = (int *)piVar12[1];
          continue;
        }
        temp_v1 = FUN_0035e7ec(&temp_v3,piVar12 + 4);
        if ((temp_v1 == 0) || (temp_v1 = FUN_0035e5a8(piVar12 + 4,&temp_v3), temp_v1 == 0)) {
          if (temp_v5 == (int *)0x0) {
            return 0;
          }
          puVar9 = temp_v4;
          if ((unsigned char **)temp_v4 == &temp_v3) {
            return 0;
          }
          do {
            puVar8 = (unsigned int *)puVar9[1];
            FUN_00238170(temp_v5,puVar9,1);
            puVar9 = puVar8;
          } while ((unsigned char **)puVar8 != &temp_v3);
          return 0;
        }
        puVar3[*(int *)(piVar12[2] + 0x14)] = 1;
        if ((int *)piVar12[5] != piVar12 + 4) {
          piVar12 = (int *)piVar12[1];
          continue;
        }
        piVar10 = (int *)piVar12[1];
        *(int **)(*piVar12 + 4) = piVar10;
        *(int *)piVar12[1] = *piVar12;
        FUN_00237a20(piVar12 + 2);
        FUN_00238170(*(unsigned int *)(temp_v0 + 0x1c),piVar12,2);
        piVar12 = piVar10;
      }
      else {
        piVar12 = (int *)piVar12[1];
      }
    }
    temp_v1 = FUN_0035e5a8(piVar7 + 4,&temp_v3);
    if (temp_v1 == 0) {
      if ((temp_v5 != (int *)0x0) && (puVar9 = temp_v4, (unsigned char **)temp_v4 != &temp_v3)) {
        do {
          puVar8 = (unsigned int *)puVar9[1];
          FUN_00238170(temp_v5,puVar9,1);
          puVar9 = puVar8;
        } while ((unsigned char **)puVar8 != &temp_v3);
      }
      return 0;
    }
    FUN_0023799c(param_1,puVar3);
    FUN_0035d7e8(&temp_v7,param_1,puVar3);
    if (temp_v7 == 0) {
      if (temp_v5 == (int *)0x0) {
        return 0;
      }
      puVar9 = temp_v4;
      if ((unsigned char **)temp_v4 == &temp_v3) {
        return 0;
      }
      do {
        puVar8 = (unsigned int *)puVar9[1];
        FUN_00238170(temp_v5,puVar9,1);
        puVar9 = puVar8;
      } while ((unsigned char **)puVar8 != &temp_v3);
      return 0;
    }
    FUN_00238170(*param_1,puVar3,temp_v6);
    piVar10 = (int *)(*temp_v9 + 8);
    piVar12 = *(int **)(*temp_v9 + 0x10);
    FUN_00238aac(piVar12,2);
    if (piVar12 == (int *)0x0) {
      if (temp_v5 == (int *)0x0) {
        return 0;
      }
      puVar9 = temp_v4;
      if ((unsigned char **)temp_v4 == &temp_v3) {
        return 0;
      }
      do {
        puVar8 = (unsigned int *)puVar9[1];
        FUN_00238170(temp_v5,puVar9,1);
        puVar9 = puVar8;
      } while ((unsigned char **)puVar8 != &temp_v3);
      return 0;
    }
    if (piVar12 != (int *)0xfffffff8) {
      FUN_003f7168();
    }
    *piVar12 = *piVar10;
    piVar12[1] = (int)piVar10;
    *piVar10 = (int)piVar12;
    *(int **)(*piVar12 + 4) = piVar12;
    temp_v8[0] = temp_v7;
    FUN_003f7138(piVar12 + 2,temp_v8,*param_1);
    piVar10 = piVar12 + 4;
    if (piVar12[6] != 0) {
      piVar1 = (int *)piVar12[5];
      while (piVar1 != piVar10) {
        piVar11 = (int *)piVar1[1];
        FUN_00238170(piVar12[6],piVar1,1);
        piVar1 = piVar11;
      }
      piVar12[6] = 0;
      *piVar10 = (int)piVar10;
      piVar12[5] = (int)piVar10;
    }
    piVar12[5] = (int)temp_v4;
    *temp_v4 = (unsigned int)piVar10;
    *piVar10 = (int)temp_v3;
    *(int **)(temp_v3 + 4) = piVar10;
    piVar12[6] = (int)temp_v5;
    piVar12 = piVar7;
    temp_v3 = (unsigned char *)&temp_v3;
    temp_v4 = (unsigned int *)&temp_v3;
    if ((int *)piVar7[5] == piVar7 + 4) {
      piVar12 = (int *)piVar7[1];
      *(int **)(*piVar7 + 4) = piVar12;
      *(int *)piVar7[1] = *piVar7;
      temp_v3 = (unsigned char *)&temp_v3;
      temp_v4 = (unsigned int *)&temp_v3;
      FUN_00237a20(piVar7 + 2);
      FUN_00238170(*(unsigned int *)(temp_v0 + 0x1c),piVar7,2);
    }
    piVar7 = piVar12;
    if (temp_v5 != (int *)0x0) {
      puVar9 = temp_v4;
      if ((unsigned char **)temp_v4 != &temp_v3) {
        do {
          puVar3 = *(unsigned char **)((int)puVar9 + 4);
          FUN_00238170(temp_v5,puVar9,1);
          puVar9 = (unsigned int *)puVar3;
        } while ((unsigned char **)puVar3 != &temp_v3);
      }
      temp_v5 = (int *)0x0;
      temp_v3 = (unsigned char *)&temp_v3;
      temp_v4 = (unsigned int *)&temp_v3;
    }
  } while( 1 );
}

} /* extern "C" */
