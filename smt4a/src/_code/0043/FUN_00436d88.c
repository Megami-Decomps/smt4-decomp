/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00436d88` (_code @ 0x436d88, 0x534 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_2_stack;

/* Supplied declaration required: FUN_00436c10. */
/* Supplied declaration required: FUN_00436d04. */
extern int FUN_00437aa8(int *, unsigned char **);
extern int FUN_00438204(unsigned char **, int *);
/* Supplied declaration required: FUN_004387bc. */
/* Supplied declaration required: FUN_004387f0. */
/* Supplied declaration required: FUN_005022c4. */
/* Supplied declaration required: FUN_0051539c. */
/* Supplied declaration required: FUN_005153cc. */
/* Supplied declaration required: FUN_005155bc. */


unsigned int FUN_00436d88(unsigned int *param_1,int *param_2)

{
/* irregular: 1 goto(s); 8 native warning(s); review required */
  unsigned int unique0x10000430;
  unsigned int unique0x10000410;
  unsigned int temp_v0;
  int *piVar2;
  int *piVar3;
  int temp_v1;
  unsigned char *puVar5;
  unsigned char *puVar6;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar9;
  unsigned int *puVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  unsigned char *temp_v4;
  unsigned int *temp_v5;
  int *temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int *puStack_2c;
  int *temp_v9;
  
  temp_v1 = *param_2;
  piVar2 = *(int **)(temp_v1 + 0x18);
  temp_v9 = param_2;
  puStack_2c = param_1;
joined_r0x00436da8:
  while( 1 ) {
    if (piVar2 == (int *)(temp_v1 + 0x14)) {
      return 1;
    }
    if ((char)piVar2[3] == '\x03') break;
    piVar2 = (int *)piVar2[1];
  }
  temp_v0 = (param_1[4] + 0xf) >> 4;
  puVar5 = (unsigned char *)*param_1;
  FUN_004387f0(puVar5,temp_v0);
  if (puVar5 == (unsigned char *)0x0) {
    return 0;
  }
  if (param_1[4] != 0) {
    puVar6 = puVar5 + -1;
    if ((param_1[4] & 1) != 0) {
      *puVar5 = 0;
      puVar6 = puVar5;
    }
    for (temp_v3 = (unsigned int)param_1[4] >> 1; temp_v3 != 0; temp_v3 = temp_v3 - 1) {
      puVar6[1] = 0;
      puVar6 = puVar6 + 2;
      *puVar6 = 0;
    }
  }
  puVar5[*(int *)(piVar2[2] + 0x14)] = 1;
  temp_v6 = (int *)piVar2[6];
  temp_v4 = (unsigned char *)&temp_v4;
  temp_v5 = (unsigned int *)&temp_v4;
  piVar13 = (int *)piVar2[5];
  for (unique0x10000410 = piVar2[5]; piVar11 = temp_v6, temp_v6 = piVar11, piVar13 != piVar2 + 4;
      unique0x10000430 = piVar13[1]) {
    FUN_004387f0(piVar11,1);
    if (piVar11 == (int *)0x0) {
      if (temp_v6 == (int *)0x0) {
        return 0;
      }
      puVar9 = temp_v5;
      if ((unsigned char **)temp_v5 == &temp_v4) {
        return 0;
      }
      do {
        puVar10 = (unsigned int *)puVar9[1];
        FUN_004387bc(temp_v6,puVar9,1);
        puVar9 = puVar10;
      } while ((unsigned char **)puVar10 != &temp_v4);
      return 0;
    }
    *piVar11 = (int)temp_v4;
    piVar11[1] = (int)&temp_v4;
    *(int **)(*piVar11 + 4) = piVar11;
    piVar11[2] = piVar13[2];
    temp_v4 = (unsigned char *)piVar11;
    piVar13 = (int *)piVar13[1];
  }
  piVar13 = *(int **)(temp_v1 + 0x18);
  do {
    if (piVar13 == (int *)(temp_v1 + 0x14)) break;
    if ((piVar13 != piVar2) && ((char)piVar13[3] == '\x03')) {
      piVar11 = piVar13 + 4;
      FUN_005022c4(piVar11,&temp_v4);
      if (piVar11 != (int *)0x0) {
        temp_v2 = FUN_00438204(&temp_v4,piVar13 + 4);
        if ((temp_v2 == 0) || (temp_v2 = FUN_00437aa8(piVar13 + 4,&temp_v4), temp_v2 == 0)) {
          if (temp_v6 == (int *)0x0) {
            return 0;
          }
          puVar9 = temp_v5;
          if ((unsigned char **)temp_v5 == &temp_v4) {
            return 0;
          }
          do {
            puVar10 = (unsigned int *)puVar9[1];
            FUN_004387bc(temp_v6,puVar9,1);
            puVar9 = puVar10;
          } while ((unsigned char **)puVar10 != &temp_v4);
          return 0;
        }
        puVar5[*(int *)(piVar13[2] + 0x14)] = 1;
        if ((int *)piVar13[5] == piVar13 + 4) {
          piVar11 = (int *)piVar13[1];
          *(int **)(*piVar13 + 4) = piVar11;
          *(int *)piVar13[1] = *piVar13;
          FUN_005155bc(piVar13 + 2);
          FUN_004387bc(*(unsigned int *)(temp_v1 + 0x1c),piVar13,2);
          piVar13 = piVar11;
          continue;
        }
      }
    }
    piVar13 = (int *)piVar13[1];
  } while( 1 );
  temp_v2 = FUN_00437aa8(piVar2 + 4,&temp_v4);
  if (temp_v2 == 0) {
    if ((temp_v6 != (int *)0x0) && (puVar9 = temp_v5, (unsigned char **)temp_v5 != &temp_v4)) {
      do {
        puVar10 = (unsigned int *)puVar9[1];
        FUN_004387bc(temp_v6,puVar9,1);
        puVar9 = puVar10;
      } while ((unsigned char **)puVar10 != &temp_v4);
    }
    return 0;
  }
  FUN_00436d04(param_1,puVar5);
  FUN_00436c10(&temp_v7,param_1,puVar5);
  if (temp_v7 == 0) {
    if (temp_v6 == (int *)0x0) {
      return 0;
    }
    puVar9 = temp_v5;
    if ((unsigned char **)temp_v5 == &temp_v4) {
      return 0;
    }
    do {
      puVar10 = (unsigned int *)puVar9[1];
      FUN_004387bc(temp_v6,puVar9,1);
      puVar9 = puVar10;
    } while ((unsigned char **)puVar10 != &temp_v4);
    return 0;
  }
  FUN_004387bc(*param_1,puVar5,temp_v0);
  piVar11 = (int *)(*temp_v9 + 8);
  piVar13 = *(int **)(*temp_v9 + 0x10);
  FUN_004387f0(piVar13,2);
  if (piVar13 == (int *)0x0) {
    if (temp_v6 == (int *)0x0) {
      return 0;
    }
    puVar9 = temp_v5;
    if ((unsigned char **)temp_v5 == &temp_v4) {
      return 0;
    }
    do {
      puVar10 = (unsigned int *)puVar9[1];
      FUN_004387bc(temp_v6,puVar9,1);
      puVar9 = puVar10;
    } while ((unsigned char **)puVar10 != &temp_v4);
    return 0;
  }
  if (piVar13 != (int *)0xfffffff8) {
    FUN_005153cc();
  }
  *piVar13 = *piVar11;
  piVar13[1] = (int)piVar11;
  *piVar11 = (int)piVar13;
  *(int **)(*piVar13 + 4) = piVar13;
  temp_v8 = temp_v7;
  FUN_0051539c(piVar13 + 2,&temp_v8,*param_1);
  piVar11 = piVar13 + 4;
  if (piVar13[6] != 0) {
    piVar3 = (int *)piVar13[5];
    while (piVar3 != piVar11) {
      piVar12 = (int *)piVar3[1];
      FUN_004387bc(piVar13[6],piVar3,1);
      piVar3 = piVar12;
    }
    piVar13[6] = 0;
    *piVar11 = (int)piVar11;
    piVar13[5] = (int)piVar11;
  }
  piVar13[5] = (int)temp_v5;
  *temp_v5 = (unsigned int)piVar11;
  *piVar11 = (int)temp_v4;
  *(int **)(temp_v4 + 4) = piVar11;
  piVar13[6] = (int)temp_v6;
  piVar13 = piVar2;
  temp_v4 = (unsigned char *)&temp_v4;
  temp_v5 = (unsigned int *)&temp_v4;
  if ((int *)piVar2[5] == piVar2 + 4) {
    piVar13 = (int *)piVar2[1];
    *(int **)(*piVar2 + 4) = piVar13;
    *(int *)piVar2[1] = *piVar2;
    temp_v4 = (unsigned char *)&temp_v4;
    temp_v5 = (unsigned int *)&temp_v4;
    FUN_005155bc(piVar2 + 2);
    FUN_004387bc(*(unsigned int *)(temp_v1 + 0x1c),piVar2);
  }
  piVar2 = piVar13;
  if (temp_v6 != (int *)0x0) {
    puVar9 = temp_v5;
    if ((unsigned char **)temp_v5 != &temp_v4) {
      do {
        puVar5 = *(unsigned char **)((int)puVar9 + 4);
        FUN_004387bc(temp_v6,puVar9);
        puVar9 = (unsigned int *)puVar5;
      } while ((unsigned char **)puVar5 != &temp_v4);
    }
    temp_v6 = (int *)0x0;
    temp_v5 = (unsigned int *)&temp_v4;
    temp_v4 = (unsigned char *)&temp_v4;
  }
  goto joined_r0x00436da8;
}
