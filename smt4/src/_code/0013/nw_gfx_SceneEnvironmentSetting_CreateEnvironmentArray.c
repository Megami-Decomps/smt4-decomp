/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_SceneEnvironmentSetting_CreateEnvironmentArray` (_code @ 0x13ece8, 0x668 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_3_stack;

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Supplied declaration required: FUN_0014b5b0. */


/* WARNING: Removing unreachable block (ram,0x0013f104) */
/* WARNING: Removing unreachable block (ram,0x0013f108) */
/* WARNING: Removing unreachable block (ram,0x0013f110) */

void nw_gfx_SceneEnvironmentSetting_CreateEnvironmentArray
               (int param_1,int ******param_2,int *****param_3)

{
/* irregular: 5 native warning(s); review required */
  int ******ppppppiVar1;
  int ******ppppppiVar2;
  int temp_v0;
  unsigned int *puVar4;
  int temp_v1;
  int temp_v2;
  int *piVar7;
  int ******ppppppiVar8;
  int *****pppppiVar9;
  int ******temp_v3;
  unsigned int temp_v4;
  int *****pppppiVar11;
  unsigned int *puVar12;
  unsigned int *puVar13;
  int ******ppppppiVar14;
  int ******ppppppiVar15;
  int ****ppppiVar16;
  int *piVar17;
  int ****ppppiVar18;
  int *****pppppiVar19;
  unsigned int *puVar20;
  unsigned int **ppuVar21;
  int *****temp_v5;
  int ****temp_v6;
  int *****temp_v7;
  int *****temp_v8;
  int *****temp_v9;
  unsigned int temp_v10;
  unsigned int *temp_v11;
  unsigned int temp_v12;
  int iStack_30;
  int *****temp_v13;
  int ****ppppiStack_28;
  
  temp_v5 = param_3;
  iStack_30 = param_1;
  temp_v13 = (int *****)param_2;
  ppppiStack_28 = (int ****)param_3;
  if (param_3[8] != (int ****)0x0) {
    ppppppiVar1 = (int ******)(*(romwright_code *)(*param_2)[2])(param_2,(int)param_3[8] * 0xc,4);
    ppppppiVar2 = (int ******)(param_1 + 0xc);
    ppppppiVar8 = &temp_v7;
    temp_v7 = temp_v13;
    ppppppiVar14 = ppppppiVar1;
    ppppppiVar15 = ppppppiVar1;
    temp_v10 = (unsigned int)param_3[8] & 0x3fffffff;
    temp_v9 = (int *****)ppppppiVar1;
    temp_v8 = (int *****)ppppppiVar1;
    if (ppppppiVar2 != &temp_v7) {
      ppppppiVar14 = *(int *******)(param_1 + 0x10);
      ppppppiVar15 = *(int *******)(param_1 + 0x14);
      temp_v10 = *(unsigned int *)(param_1 + 0x18);
      temp_v7 = *ppppppiVar2;
      *(unsigned int *)(param_1 + 0x18) = (unsigned int)param_3[8] & 0x3fffffff;
      *ppppppiVar2 = temp_v13;
      *(int *******)(param_1 + 0x10) = ppppppiVar1;
      *(int *******)(param_1 + 0x14) = ppppppiVar1;
      ppppppiVar8 = (int ******)temp_v13;
      ppppppiVar1 = ppppppiVar14;
      temp_v9 = (int *****)ppppppiVar15;
      temp_v8 = (int *****)ppppppiVar14;
    }
    for (; pppppiVar9 = temp_v9, pppppiVar11 = temp_v8, ppppppiVar14 != (int ******)temp_v9;
        ppppppiVar14 = ppppppiVar14 + 3) {
      pppppiVar19 = ppppppiVar14[1];
      ppppppiVar2 = ppppppiVar14 + 1;
      if (pppppiVar19 != (int *****)0x0) {
        ppppppiVar2 = (int ******)(unsigned int)*(unsigned char *)(ppppppiVar14 + 2);
      }
      temp_v8 = (int *****)ppppppiVar1;
      temp_v9 = (int *****)ppppppiVar15;
      if (pppppiVar19 != (int *****)0x0 && ppppppiVar2 != (int ******)0x0) {
        (*(romwright_code *)**pppppiVar19)(pppppiVar19);
        (*(romwright_code *)(*pppppiVar19[1])[3])(pppppiVar19[1],pppppiVar19);
        ppppppiVar8 = temp_v3;
      }
      ppppppiVar1 = (int ******)temp_v8;
      ppppppiVar15 = (int ******)temp_v9;
      temp_v9 = pppppiVar9;
      temp_v8 = pppppiVar11;
    }
    temp_v9 = temp_v8;
    if ((int ******)temp_v7 != (int ******)0x0) {
      ppppppiVar8 = ppppppiVar1;
    }
    temp_v8 = (int *****)ppppppiVar1;
    if ((int ******)temp_v7 != (int ******)0x0 && ppppppiVar8 != (int ******)0x0) {
      (*(romwright_code *)(*temp_v7)[3])();
    }
    ppppiVar18 = temp_v5[8];
    temp_v0 = (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0xc;
    if ((int)ppppiVar18 < temp_v0) {
      if ((int)ppppiVar18 < 0) {
        ppppiVar18 = (int ****)0x0;
      }
      ppppiVar16 = ppppiVar18;
      if ((int)ppppiVar18 < temp_v0) {
        do {
          temp_v0 = *(int *)(param_1 + 0x10) + (int)ppppiVar16 * 0xc;
          puVar4 = (unsigned int *)(temp_v0 + 4);
          puVar20 = (unsigned int *)*puVar4;
          if (puVar20 != (unsigned int *)0x0) {
            puVar4 = (unsigned int *)(unsigned int)*(unsigned char *)(temp_v0 + 8);
          }
          if (puVar20 != (unsigned int *)0x0 && puVar4 != (unsigned int *)0x0) {
            (**(romwright_code **)*puVar20)(puVar20);
            (**(romwright_code **)(*(int *)puVar20[1] + 0xc))((int *)puVar20[1],puVar20);
          }
          ppppiVar16 = (int ****)((int)ppppiVar16 + 1);
        } while ((int)ppppiVar16 < (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0xc);
      }
    }
    else {
      if ((int)(*(unsigned int *)(param_1 + 0x18) & 0x3fffffff) < (int)ppppiVar18) {
        if ((*(int *)(param_1 + 0xc) == 0) ||
           ((*(unsigned int *)(param_1 + 0x18) & 0xc0000000) != 0x40000000)) {
          ppppiVar18 = (int ****)(*(unsigned int *)(param_1 + 0x18) & 0x3fffffff);
        }
        else {
          puVar20 = (unsigned int *)
                    (**(romwright_code **)(**(int **)(param_1 + 0xc) + 8))
                              (*(int **)(param_1 + 0xc),(int)ppppiVar18 * 0xc,0x20);
          puVar12 = *(unsigned int **)(param_1 + 0x10);
          puVar13 = *(unsigned int **)(param_1 + 0x14);
          temp_v0 = 0;
          puVar4 = puVar20;
          if (puVar12 != puVar13) {
            do {
              if (puVar4 != (unsigned int *)0x0) {
                *puVar4 = *puVar12;
                puVar4[1] = puVar12[1];
                *(unsigned char *)(puVar4 + 2) = *(unsigned char *)(puVar12 + 2);
                puVar12[1] = 0;
              }
              puVar12 = puVar12 + 3;
              puVar4 = puVar4 + 3;
            } while (puVar12 != puVar13);
            temp_v0 = (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0xc;
          }
          if (*(int *)(param_1 + 0x10) != 0) {
            (**(romwright_code **)(**(int **)(param_1 + 0xc) + 0xc))();
          }
          *(unsigned int **)(param_1 + 0x10) = puVar20;
          *(unsigned int **)(param_1 + 0x14) = puVar20 + temp_v0 * 3;
          *(unsigned int *)(param_1 + 0x18) = (*(unsigned int *)(param_1 + 0x18) & 0xc0000000) | (unsigned int)ppppiVar18;
        }
      }
      for (temp_v0 = (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0xc;
          temp_v0 < (int)ppppiVar18; temp_v0 = temp_v0 + 1) {
        puVar4 = (unsigned int *)(*(int *)(param_1 + 0x10) + temp_v0 * 0xc);
        if (puVar4 != (unsigned int *)0x0) {
          puVar4[1] = 0;
          *puVar4 = 0xffffffff;
          *(unsigned char *)(puVar4 + 2) = 1;
        }
      }
    }
    temp_v0 = 0;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x10) + (int)ppppiVar18 * 0xc;
    ppppiVar18 = temp_v5[9];
    if (ppppiVar18 != (int ****)0x0) {
      temp_v1 = (int)(temp_v5 + 9) + (int)ppppiVar18;
    }
    else {
      temp_v1 = 0;
    }
    ppppiVar18 = temp_v5[8];
    ppppiVar16 = temp_v5[9];
    if (ppppiVar16 != (int ****)0x0) {
      piVar17 = (int *)((int)ppppiVar16 + (int)(temp_v5 + 9));
    }
    else {
      piVar17 = (int *)0x0;
    }
    for (; piVar17 != (int *)(temp_v1 + (int)ppppiVar18 * 4); piVar17 = piVar17 + 1) {
      temp_v2 = *(int *)(param_1 + 0x10) + temp_v0 * 0xc;
      ppuVar21 = (unsigned int **)(temp_v2 + 4);
      puVar4 = (unsigned int *)*piVar17;
      if (puVar4 != (unsigned int *)0x0) {
        puVar4 = (unsigned int *)((int)puVar4 + (int)piVar17);
      }
      FUN_0014b5b0(puVar4,temp_v13);
      temp_v12 = romwright_piece_3_1((((unsigned int)(temp_v12) >> 8) & 0xffffffU),1);
      temp_v11 = puVar4;
      if (ppuVar21 != &temp_v11) {
        temp_v11 = *ppuVar21;
        temp_v12 = romwright_piece_3_1((((unsigned int)(temp_v12) >> 8) & 0xffffffU),*(unsigned char *)(temp_v2 + 8));
        *(unsigned char *)(temp_v2 + 8) = 1;
        *ppuVar21 = puVar4;
      }
      puVar4 = temp_v11;
      if ((temp_v11 != (unsigned int *)0x0) && ((char)temp_v12 != '\0')) {
        (**(romwright_code **)*temp_v11)(temp_v11);
        piVar7 = (int *)puVar4[1];
        (**(romwright_code **)(*piVar7 + 0xc))(piVar7,puVar4);
      }
      *(unsigned int *)(*(int *)(param_1 + 0x10) + temp_v0 * 0xc) = 0xffffffff;
      temp_v0 = temp_v0 + 1;
    }
  }
  pppppiVar11 = temp_v5 + 6;
  if (temp_v5[6] != (int ****)0x0) {
    ppppppiVar8 = (int ******)(*(romwright_code *)(*temp_v13)[2])(temp_v13,(int)temp_v5[6] << 3,4);
    ppppiVar18 = *pppppiVar11;
    ppppppiVar14 = (int ******)(param_1 + 0x1c);
    temp_v7 = temp_v13;
    temp_v8 = (int *****)ppppppiVar8;
    temp_v9 = (int *****)ppppppiVar8;
    temp_v10 = (unsigned int)ppppiVar18 & 0x3fffffff;
    if (ppppppiVar14 != &temp_v7) {
      temp_v8 = *(int ******)(param_1 + 0x20);
      temp_v9 = *(int ******)(param_1 + 0x24);
      temp_v10 = *(unsigned int *)(param_1 + 0x28);
      temp_v7 = *ppppppiVar14;
      *ppppppiVar14 = temp_v13;
      *(int *******)(param_1 + 0x20) = ppppppiVar8;
      *(int *******)(param_1 + 0x24) = ppppppiVar8;
      *(unsigned int *)(param_1 + 0x28) = (unsigned int)ppppiVar18 & 0x3fffffff;
    }
    ppppppiVar8 = &temp_v8;
    if (temp_v8 < temp_v9) {
      ppppppiVar8 = (int ******)((int)temp_v9 - (int)temp_v8);
    }
    if (temp_v8 < temp_v9) {
      ppppppiVar8 = (int ******)((int)ppppppiVar8 << 0x1c);
    }
    if (temp_v8 < temp_v9) {
      temp_v4 = (unsigned int)ppppppiVar8 >> 0x1f;
    }
    else {
      temp_v4 = 0;
    }
    for (temp_v0 = temp_v4 + 1; temp_v0 < (((int)temp_v9 - (int)temp_v8) >> 3) + 1; temp_v0 = temp_v0 + 2)
    {
    }
    temp_v9 = temp_v8;
    if ((int ******)temp_v7 != (int ******)0x0 && (int ******)temp_v8 != (int ******)0x0) {
      (*(romwright_code *)(*temp_v7)[3])();
    }
  }
  pppppiVar11 = temp_v5 + 10;
  if (temp_v5[10] != (int ****)0x0) {
    pppppiVar9 = (int *****)(*(romwright_code *)(*temp_v13)[2])(temp_v13,(int)temp_v5[10] << 3,4);
    piVar17 = (int *)(param_1 + 0x2c);
    temp_v5 = temp_v13;
    ppppppiVar8 = (int ******)0x0;
    temp_v6 = (int ****)pppppiVar9;
    temp_v7 = pppppiVar9;
    temp_v8 = (int *****)((unsigned int)*pppppiVar11 & 0x3fffffff);
    if ((int ******)piVar17 != &temp_v5) {
      temp_v6 = *(int *****)(param_1 + 0x30);
      temp_v7 = *(int ******)(param_1 + 0x34);
      temp_v8 = *(int ******)(param_1 + 0x38);
      temp_v5 = (int *****)*piVar17;
      *(int ******)(param_1 + 0x38) = (int *****)((unsigned int)*pppppiVar11 & 0x3fffffff);
      *piVar17 = (int)temp_v13;
      *(int ******)(param_1 + 0x30) = pppppiVar9;
      *(int ******)(param_1 + 0x34) = pppppiVar9;
      ppppppiVar8 = (int ******)temp_v13;
    }
    if (temp_v6 < (int ****)temp_v7) {
      ppppppiVar8 = (int ******)((int)temp_v7 - (int)temp_v6);
    }
    if (temp_v6 < (int ****)temp_v7) {
      temp_v4 = ((unsigned int)ppppppiVar8 & 0xf) >> 3;
    }
    else {
      temp_v4 = 0;
    }
    for (pppppiVar11 = (int *****)(temp_v4 + 1);
        (int)pppppiVar11 < (((int)temp_v7 - (int)temp_v6) >> 3) + 1;
        pppppiVar11 = (int *****)((int)pppppiVar11 + 2)) {
    }
    temp_v7 = (int *****)temp_v6;
    if ((int ******)temp_v5 != (int ******)0x0) {
      pppppiVar11 = (int *****)temp_v6;
    }
    if ((int ******)temp_v5 != (int ******)0x0 && pppppiVar11 != (int *****)0x0) {
      (*(romwright_code *)(*temp_v5)[3])();
    }
  }
  return;
}
