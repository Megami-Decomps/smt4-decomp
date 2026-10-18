/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036da94` (_code @ 0x36da94, 0x60c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: while (PTRADD). */
/* Supplied declaration required: FUN_00236240. */
/* Supplied declaration required: FUN_003fcba4. */
/* Supplied declaration required: FUN_003fccc4. */
/* Supplied declaration required: FUN_003fd12c. */


void FUN_0036da94(int param_1)

{
/* irregular: 2 unstructured edge(s); 1 goto(s); 5 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar5;
  int *piVar6;
  unsigned int *puVar7;
  unsigned int temp_v3;
  unsigned int *puVar9;
  unsigned int temp_v4;
  unsigned int *puVar11;
  unsigned int *puVar12;
  unsigned int *puVar13;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int *puVar16;
  unsigned int *puVar17;
  int *piVar18;
  int temp_v7;
  unsigned int temp_v8;
  int *piVar21;
  int temp_v9;
  int unaff_r10;
  unsigned int *puVar23;
  unsigned int temp_v10;
  unsigned int temp_v11;
  int temp_v12;
  int temp_v13;
  
  puVar17 = *(unsigned int **)(param_1 + 0xc);
  puVar13 = *(unsigned int **)(param_1 + 0x10);
  if (puVar17 != puVar13) {
    temp_v1 = ((int)puVar13 - (int)puVar17) >> 4;
    FUN_003fccc4(puVar17,puVar13,temp_v1);
    if (temp_v1 >= 0x11) {
      FUN_00236240(puVar17,puVar17 + 0x40);
      for (puVar17 = puVar17 + 0x40; puVar17 != puVar13; puVar17 = puVar17 + 4) {
        temp_v4 = puVar17[1];
        temp_v8 = *puVar17;
        temp_v11 = puVar17[2];
        temp_v10 = puVar17[3];
        puVar7 = puVar17;
        while( 1 ) {
          if ((unsigned int)puVar7[-3] <= temp_v4) break;
          *puVar7 = puVar7[-4];
          puVar7[1] = puVar7[-3];
          puVar7[2] = puVar7[-2];
          puVar7[3] = puVar7[-1];
          puVar7 = puVar7 + -4;
        }
        puVar7[1] = temp_v4;
        *puVar7 = temp_v8;
        puVar7[2] = temp_v11;
        puVar7[3] = temp_v10;
      }
    }
    else {
      FUN_00236240(puVar17,puVar13);
    }
  }
  temp_v1 = 0;
  piVar21 = *(int **)(param_1 + 0x10);
  temp_v7 = 0;
  piVar1 = *(int **)(param_1 + 0xc);
  while (piVar1 != piVar21) {
    if (piVar1[1] != temp_v1) {
      temp_v9 = piVar1[3];
      temp_v7 = temp_v7 + 1;
      piVar18 = (int *)(param_1 + 0x18);
      piVar6 = (int *)(*(int *)(temp_v9 + 0x20) + 0x84);
      temp_v1 = *piVar6;
      temp_v12 = *(int *)(*(int *)(temp_v9 + 8) + 0x2c0);
      if (temp_v1 != 0) {
        unaff_r10 = temp_v1 + (int)piVar6;
      }
      temp_v4 = *(unsigned int *)(param_1 + 0x24);
      if (temp_v1 == 0) {
        unaff_r10 = 0;
      }
      temp_v2 = temp_v4 & 0x3fffffff;
      if ((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c)) >> 4 >= (int)temp_v2) {
        if (temp_v2 != 0) {
          temp_v2 = temp_v2 << 1;
        }
        else {
          temp_v2 = 1;
        }
        if (temp_v2 > (temp_v4 & 0x3fffffff)) {
          if ((*piVar18 == 0) || ((temp_v4 & 0xc0000000) != 0x40000000)) {
            temp_v1 = piVar1[1];
            *piVar1 = temp_v7;
            piVar1 = piVar1 + 4;
            continue;
          }
          puVar13 = (unsigned int *)
                    (**(romwright_code **)(*(int *)*piVar18 + 8))((int *)*piVar18,temp_v2 << 4,0x20);
          puVar7 = *(unsigned int **)(param_1 + 0x1c);
          puVar11 = *(unsigned int **)(param_1 + 0x20);
          temp_v13 = 0;
          puVar17 = puVar13;
          if (puVar7 != puVar11) {
            do {
              if (puVar17 != (unsigned int *)0x0) {
                temp_v8 = puVar7[1];
                temp_v10 = puVar7[2];
                temp_v11 = puVar7[3];
                *puVar17 = *puVar7;
                puVar17[1] = temp_v8;
                puVar17[2] = temp_v10;
                puVar17[3] = temp_v11;
              }
              puVar7 = puVar7 + 4;
              puVar17 = puVar17 + 4;
            } while (puVar7 != puVar11);
            temp_v13 = (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c)) >> 4;
          }
          if (*(int *)(param_1 + 0x1c) != 0) {
            (**(romwright_code **)(*(int *)*piVar18 + 0xc))();
          }
          *(unsigned int **)(param_1 + 0x1c) = puVar13;
          *(unsigned int **)(param_1 + 0x20) = puVar13 + temp_v13 * 4;
          *(unsigned int *)(param_1 + 0x24) = (*(unsigned int *)(param_1 + 0x24) & 0xc0000000) | temp_v2;
        }
      }
      piVar6 = *(int **)(param_1 + 0x20);
      if (piVar6 != (int *)0x0) {
        *piVar6 = temp_v7;
        piVar6[1] = unaff_r10;
        piVar6[2] = temp_v12;
        piVar6[3] = temp_v9;
      }
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 0x10;
      temp_v1 = piVar1[1];
    }
    *piVar1 = temp_v7;
    piVar1 = piVar1 + 4;
  }
  puVar17 = *(unsigned int **)(param_1 + 0x1c);
  puVar13 = *(unsigned int **)(param_1 + 0x20);
  if (puVar17 != puVar13) {
    temp_v1 = ((int)puVar13 - (int)puVar17) >> 4;
    FUN_003fccc4(puVar17,puVar13,temp_v1);
    if (temp_v1 >= 0x11) {
      FUN_00236240(puVar17,puVar17 + 0x40);
      for (puVar17 = puVar17 + 0x40; puVar17 != puVar13; puVar17 = puVar17 + 4) {
        temp_v8 = *puVar17;
        temp_v4 = puVar17[1];
        temp_v10 = puVar17[2];
        temp_v11 = puVar17[3];
        puVar7 = puVar17;
        while( 1 ) {
          if ((unsigned int)puVar7[-3] <= temp_v4) break;
          *puVar7 = puVar7[-4];
          puVar7[1] = puVar7[-3];
          puVar7[2] = puVar7[-2];
          puVar7[3] = puVar7[-1];
          puVar7 = puVar7 + -4;
        }
        *puVar7 = temp_v8;
        puVar7[1] = temp_v4;
        puVar7[2] = temp_v10;
        puVar7[3] = temp_v11;
      }
    }
    else {
      FUN_00236240(puVar17,puVar13);
    }
  }
  temp_v2 = 0;
  temp_v1 = 0;
  temp_v4 = (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c)) >> 4;
  temp_v5 = 0;
  if (temp_v4 != 0) {
    do {
      puVar17 = (unsigned int *)(*(int *)(param_1 + 0x1c) + temp_v5 * 0x10);
      if ((((puVar17[1] != temp_v1) || (temp_v3 = temp_v2, temp_v5 == temp_v4 - 1)) &&
          (temp_v3 = temp_v5, (int)(temp_v5 - temp_v2) >= 3)) &&
         (puVar13 = (unsigned int *)(*(int *)(param_1 + 0x1c) + temp_v2 * 0x10), puVar13 != puVar17)) {
        temp_v1 = ((int)puVar17 - (int)puVar13) >> 4;
        FUN_003fd12c(puVar13,puVar17,temp_v1);
        if (temp_v1 >= 0x11) {
          FUN_003fcba4(puVar13,puVar13 + 0x40);
          for (puVar13 = puVar13 + 0x40; puVar13 != puVar17; puVar13 = puVar13 + 4) {
            temp_v8 = *puVar13;
            temp_v2 = puVar13[2];
            temp_v10 = puVar13[1];
            temp_v11 = puVar13[3];
            puVar7 = puVar13;
            while( 1 ) {
              if ((unsigned int)puVar7[-2] <= temp_v2) break;
              *puVar7 = puVar7[-4];
              puVar7[1] = puVar7[-3];
              puVar7[2] = puVar7[-2];
              puVar7[3] = puVar7[-1];
              puVar7 = puVar7 + -4;
            }
            *puVar7 = temp_v8;
            puVar7[1] = temp_v10;
            puVar7[2] = temp_v2;
            puVar7[3] = temp_v11;
          }
        }
        else {
          FUN_003fcba4(puVar13,puVar17);
        }
      }
      temp_v6 = temp_v5 + 1;
      temp_v1 = *(int *)(*(int *)(param_1 + 0x1c) + temp_v5 * 0x10 + 4);
      temp_v2 = temp_v3;
      temp_v5 = temp_v6;
    } while (temp_v6 < temp_v4);
  }
  puVar16 = *(unsigned int **)(param_1 + 0x20);
  puVar23 = *(unsigned int **)(param_1 + 0x1c);
  temp_v1 = 1;
  do {
    if (puVar23 == puVar16) {
      temp_v4 = *(unsigned int *)(param_1 + 0x10);
      temp_v2 = *(unsigned int *)(param_1 + 0xc);
      if (temp_v2 >= temp_v4) {
        temp_v5 = 0;
      }
      else {
        temp_v5 = ((temp_v4 - temp_v2) & 0x1f) >> 4;
      }
      temp_v4 = temp_v4 - temp_v2;
      temp_v1 = temp_v5 + 1;
      if (temp_v1 < ((int)temp_v4 >> 4) + 1) {
        temp_v4 = ((int)temp_v4 >> 4) + 1;
        do {
          temp_v1 = temp_v1 + 2;
        } while (temp_v1 < (int)temp_v4);
      }
      *(unsigned int *)(param_1 + 0x10) = temp_v2;
      temp_v2 = *(unsigned int *)(param_1 + 0x1c);
      temp_v5 = *(unsigned int *)(param_1 + 0x20);
      if (temp_v2 < temp_v5) {
        temp_v4 = temp_v5 - temp_v2;
      }
      if (temp_v2 < temp_v5) {
        temp_v4 = (temp_v4 & 0x1f) >> 4;
      }
      else {
        temp_v4 = 0;
      }
      temp_v7 = temp_v4 + 1;
      temp_v1 = (int)(temp_v5 - temp_v2) >> 4;
      if (temp_v7 < temp_v1 + 1) {
        do {
          temp_v7 = temp_v7 + 2;
        } while (temp_v7 < temp_v1 + 1);
      }
      *(unsigned int *)(param_1 + 0x20) = temp_v2;
      return;
    }
    puVar5 = *(unsigned int **)(param_1 + 0xc);
    temp_v7 = (*(int *)(param_1 + 0x10) - (int)puVar5) >> 4;
    puVar12 = puVar5;
    if (0 < temp_v7) {
      temp_v4 = *puVar23;
      do {
        temp_v9 = temp_v7 / 2;
        puVar12 = puVar5 + temp_v9 * 4;
        temp_v2 = *puVar12;
        if (temp_v4 < temp_v2) {
          temp_v7 = temp_v9;
        }
        if (temp_v4 <= temp_v2) {
          if (temp_v4 < temp_v2) goto LAB_0036df28;
          temp_v9 = ((int)puVar12 - (int)puVar5) >> 4;
          puVar9 = puVar5;
          if (0 < temp_v9) {
            do {
              temp_v12 = temp_v9 / 2;
              temp_v0 = temp_v12 * 4;
              if (puVar9[temp_v0] < *puVar23) {
                temp_v12 = (temp_v9 - temp_v12) - 1;
                puVar9 = puVar9 + temp_v0 + 4;
              }
              temp_v9 = temp_v12;
            } while (0 < temp_v12);
          }
          puVar12 = puVar12 + 4;
          temp_v7 = ((int)puVar5 + (temp_v7 * 0x10 - (int)puVar12)) >> 4;
          puVar5 = puVar9;
          if (0 < temp_v7) {
            do {
              temp_v9 = temp_v7 / 2;
              if (puVar12[temp_v9 * 4] <= *puVar23) {
                puVar12 = puVar12 + temp_v9 * 4 + 4;
                temp_v9 = (temp_v7 - temp_v9) - 1;
              }
              temp_v7 = temp_v9;
            } while (0 < temp_v9);
          }
          break;
        }
        puVar5 = puVar12 + 4;
        temp_v7 = (temp_v7 - temp_v9) - 1;
LAB_0036df28:
        puVar12 = puVar5;
      } while (0 < temp_v7);
    }
    for (; puVar12 != puVar5; puVar5 = puVar5 + 4) {
      *(int *)(*(int *)(puVar5[3] + 8) + 0x2d4) = temp_v1;
      temp_v1 = temp_v1 + 1;
    }
    puVar23 = puVar23 + 4;
  } while( 1 );
}
