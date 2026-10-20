/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ca71c` (_code @ 0x1ca71c, 0x6b8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001d00fc(unsigned int *, int *);

typedef int romwright_code(...);
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
/* Supplied declaration required: FUN_001d00fc. */


/* WARNING: Removing unreachable block (ram,0x001cab90) */
/* WARNING: Removing unreachable block (ram,0x001cab94) */
/* WARNING: Removing unreachable block (ram,0x001cab9c) */

void FUN_001ca71c(int param_1,int *param_2,int *param_3)

{
/* irregular: 5 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int **ppiVar4;
  int *piVar5;
  int temp_v0;
  unsigned int *puVar7;
  int *temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int *puVar11;
  unsigned int *puVar12;
  int *piVar13;
  int *piVar14;
  unsigned int temp_v5;
  int *piVar16;
  unsigned int *puVar17;
  unsigned int *puVar18;
  unsigned int *puVar19;
  unsigned int temp_v6;
  unsigned int **ppuVar21;
  int *temp_v7;
  int *temp_v8;
  int *temp_v9;
  int *temp_v10;
  int *temp_v11;
  int *temp_v12;
  unsigned int *temp_v13;
  unsigned int temp_v14;
  int iStack_30;
  int *temp_v15;
  int *piStack_28;
  
  temp_v7 = param_3;
  iStack_30 = param_1;
  temp_v15 = param_2;
  piStack_28 = param_3;
  if (param_3[8] != 0) {
    piVar3 = (int *)(**(romwright_code **)(*param_2 + 8))(param_2,param_3[8] * 0xc,4);
    ppiVar4 = (int **)(param_1 + 0xc);
    piVar16 = (int *)(param_3[8] & 0x3fffffff);
    temp_v9 = temp_v15;
    piVar13 = piVar3;
    piVar14 = piVar3;
    temp_v12 = piVar16;
    temp_v11 = piVar3;
    temp_v10 = piVar3;
    if (ppiVar4 != &temp_v9) {
      piVar13 = *(int **)(param_1 + 0x10);
      piVar14 = *(int **)(param_1 + 0x14);
      temp_v12 = *(int **)(param_1 + 0x18);
      temp_v9 = *ppiVar4;
      *ppiVar4 = temp_v15;
      *(int **)(param_1 + 0x10) = piVar3;
      *(int **)(param_1 + 0x14) = piVar3;
      *(int **)(param_1 + 0x18) = piVar16;
      piVar16 = temp_v15;
      piVar3 = piVar13;
      temp_v11 = piVar14;
      temp_v10 = piVar13;
    }
    for (; piVar2 = temp_v11, piVar1 = temp_v10, piVar13 != temp_v11; piVar13 = piVar13 + 3) {
      puVar19 = (unsigned int *)piVar13[1];
      piVar5 = piVar13 + 1;
      if (puVar19 != (unsigned int *)0x0) {
        piVar5 = (int *)(unsigned int)*(unsigned char *)(piVar13 + 2);
      }
      temp_v10 = piVar3;
      temp_v11 = piVar14;
      if (puVar19 != (unsigned int *)0x0 && piVar5 != (int *)0x0) {
        (**(romwright_code **)*puVar19)(puVar19);
        (**(romwright_code **)(*(int *)puVar19[1] + 0xc))((int *)puVar19[1],puVar19);
        piVar16 = temp_v1;
      }
      piVar3 = temp_v10;
      piVar14 = temp_v11;
      temp_v11 = piVar2;
      temp_v10 = piVar1;
    }
    temp_v11 = temp_v10;
    if (temp_v9 != (int *)0x0) {
      piVar16 = piVar3;
    }
    temp_v10 = piVar3;
    if (temp_v9 != (int *)0x0 && piVar16 != (int *)0x0) {
      (**(romwright_code **)(*temp_v9 + 0xc))();
    }
    temp_v6 = temp_v7[8];
    temp_v0 = (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0xc;
    if ((int)temp_v6 < temp_v0) {
      if ((int)temp_v6 < 0) {
        temp_v6 = 0;
      }
      temp_v5 = temp_v6;
      if ((int)temp_v6 < temp_v0) {
        do {
          temp_v0 = *(int *)(param_1 + 0x10) + temp_v5 * 0xc;
          puVar19 = (unsigned int *)(temp_v0 + 4);
          puVar18 = (unsigned int *)*puVar19;
          if (puVar18 != (unsigned int *)0x0) {
            puVar19 = (unsigned int *)(unsigned int)*(unsigned char *)(temp_v0 + 8);
          }
          if (puVar18 != (unsigned int *)0x0 && puVar19 != (unsigned int *)0x0) {
            (**(romwright_code **)*puVar18)(puVar18);
            (**(romwright_code **)(*(int *)puVar18[1] + 0xc))((int *)puVar18[1],puVar18);
          }
          temp_v5 = temp_v5 + 1;
        } while ((int)temp_v5 < (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0xc);
      }
    }
    else {
      if ((int)(*(unsigned int *)(param_1 + 0x18) & 0x3fffffff) < (int)temp_v6) {
        if (((*(int *)(param_1 + 0xc) != 0) &&
            ((*(unsigned int *)(param_1 + 0x18) & 0xc0000000) == 0x40000000)) &&
           (puVar19 = (unsigned int *)
                      (**(romwright_code **)(**(int **)(param_1 + 0xc) + 8))
                                (*(int **)(param_1 + 0xc),temp_v6 * 0xc,0x20),
           puVar19 != (unsigned int *)0x0)) {
          puVar11 = *(unsigned int **)(param_1 + 0x10);
          puVar12 = *(unsigned int **)(param_1 + 0x14);
          temp_v0 = 0;
          puVar18 = puVar19;
          if (puVar11 != puVar12) {
            do {
              if (puVar18 != (unsigned int *)0x0) {
                *puVar18 = *puVar11;
                puVar18[1] = puVar11[1];
                *(unsigned char *)(puVar18 + 2) = *(unsigned char *)(puVar11 + 2);
                puVar11[1] = 0;
              }
              puVar11 = puVar11 + 3;
              puVar18 = puVar18 + 3;
            } while (puVar11 != puVar12);
            temp_v0 = (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0xc;
          }
          temp_v2 = *(int *)(param_1 + 0x10);
          if (temp_v2 != 0) {
            temp_v3 = *(int *)(param_1 + 0x14);
            temp_v8 = (int *)temp_v2;
            for (; temp_v2 != temp_v3; temp_v2 = temp_v2 + 0xc) {
              puVar18 = *(unsigned int **)(temp_v2 + 4);
              temp_v5 = temp_v2 + 4;
              if (puVar18 != (unsigned int *)0x0) {
                temp_v5 = (unsigned int)*(unsigned char *)(temp_v2 + 8);
              }
              if (puVar18 != (unsigned int *)0x0 && temp_v5 != 0) {
                (**(romwright_code **)*puVar18)(puVar18);
                (**(romwright_code **)(*(int *)puVar18[1] + 0xc))((int *)puVar18[1],puVar18);
              }
            }
            *(int **)(param_1 + 0x14) = temp_v8;
            (**(romwright_code **)(**(int **)(param_1 + 0xc) + 0xc))
                      (*(int **)(param_1 + 0xc),*(unsigned int *)(param_1 + 0x10));
          }
          *(unsigned int **)(param_1 + 0x10) = puVar19;
          *(unsigned int **)(param_1 + 0x14) = puVar19 + temp_v0 * 3;
          *(unsigned int *)(param_1 + 0x18) = (*(unsigned int *)(param_1 + 0x18) & 0xc0000000) | temp_v6;
        }
        else {
          temp_v6 = *(unsigned int *)(param_1 + 0x18) & 0x3fffffff;
        }
      }
      temp_v0 = (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0xc;
      while (temp_v0 < (int)temp_v6) {
        temp_v2 = temp_v0 + 1;
        puVar19 = (unsigned int *)(*(int *)(param_1 + 0x10) + temp_v0 * 0xc);
        temp_v0 = temp_v2;
        if (puVar19 != (unsigned int *)0x0) {
          *puVar19 = 0xffffffff;
          puVar19[1] = 0;
          *(unsigned char *)(puVar19 + 2) = 1;
        }
      }
    }
    temp_v0 = 0;
    *(unsigned int *)(param_1 + 0x14) = *(int *)(param_1 + 0x10) + temp_v6 * 0xc;
    temp_v2 = temp_v7[9];
    if (temp_v2 != 0) {
      temp_v2 = (int)(temp_v7 + 9) + temp_v2;
    }
    else {
      temp_v2 = 0;
    }
    temp_v3 = temp_v7[8];
    temp_v4 = temp_v7[9];
    if (temp_v4 != 0) {
      piVar16 = (int *)(temp_v4 + (int)(temp_v7 + 9));
    }
    else {
      piVar16 = (int *)0x0;
    }
    for (; piVar16 != (int *)(temp_v2 + temp_v3 * 4); piVar16 = piVar16 + 1) {
      temp_v4 = *(int *)(param_1 + 0x10) + temp_v0 * 0xc;
      ppuVar21 = (unsigned int **)(temp_v4 + 4);
      puVar19 = (unsigned int *)*piVar16;
      if (puVar19 != (unsigned int *)0x0) {
        puVar19 = (unsigned int *)((int)puVar19 + (int)piVar16);
      }
      FUN_001d00fc(puVar19,temp_v15);
      temp_v14 = romwright_piece_3_1((((unsigned int)(temp_v14) >> 8) & 0xffffffU),1);
      temp_v13 = puVar19;
      if (ppuVar21 != &temp_v13) {
        temp_v13 = *ppuVar21;
        temp_v14 = romwright_piece_3_1((((unsigned int)(temp_v14) >> 8) & 0xffffffU),*(unsigned char *)(temp_v4 + 8));
        *(unsigned char *)(temp_v4 + 8) = 1;
        *ppuVar21 = puVar19;
      }
      puVar19 = temp_v13;
      if ((temp_v13 != (unsigned int *)0x0) && ((char)temp_v14 != '\0')) {
        (**(romwright_code **)*temp_v13)(temp_v13);
        piVar13 = (int *)puVar19[1];
        (**(romwright_code **)(*piVar13 + 0xc))(piVar13,puVar19);
      }
      *(unsigned int *)(*(int *)(param_1 + 0x10) + temp_v0 * 0xc) = 0xffffffff;
      temp_v0 = temp_v0 + 1;
    }
  }
  puVar17 = (unsigned int *)(temp_v7 + 6);
  if (temp_v7[6] != 0) {
    piVar13 = (int *)(**(romwright_code **)(*temp_v15 + 8))(temp_v15,temp_v7[6] << 3,4);
    ppiVar4 = (int **)(param_1 + 0x1c);
    piVar16 = (int *)(*puVar17 & 0x3fffffff);
    temp_v9 = temp_v15;
    temp_v10 = piVar13;
    temp_v11 = piVar13;
    temp_v12 = piVar16;
    if (ppiVar4 != &temp_v9) {
      temp_v10 = *(int **)(param_1 + 0x20);
      temp_v11 = *(int **)(param_1 + 0x24);
      temp_v12 = *(int **)(param_1 + 0x28);
      temp_v9 = *ppiVar4;
      *ppiVar4 = temp_v15;
      *(int **)(param_1 + 0x20) = piVar13;
      *(int **)(param_1 + 0x24) = piVar13;
      *(int **)(param_1 + 0x28) = piVar16;
      piVar16 = temp_v15;
    }
    if (temp_v10 < temp_v11) {
      piVar16 = (int *)((int)temp_v11 - (int)temp_v10);
    }
    if (temp_v10 < temp_v11) {
      piVar16 = (int *)((int)piVar16 << 0x1c);
    }
    if (temp_v10 < temp_v11) {
      temp_v6 = (unsigned int)piVar16 >> 0x1f;
    }
    else {
      temp_v6 = 0;
    }
    for (temp_v0 = temp_v6 + 1; temp_v0 < (((int)temp_v11 - (int)temp_v10) >> 3) + 1; temp_v0 = temp_v0 + 2)
    {
    }
    temp_v11 = temp_v10;
    if (temp_v9 != (int *)0x0 && temp_v10 != (int *)0x0) {
      (**(romwright_code **)(*temp_v9 + 0xc))();
    }
  }
  puVar17 = (unsigned int *)(temp_v7 + 10);
  if (temp_v7[10] != 0) {
    piVar13 = (int *)(**(romwright_code **)(*temp_v15 + 8))(temp_v15,temp_v7[10] << 3,4);
    puVar7 = (unsigned int *)(param_1 + 0x2c);
    temp_v6 = *puVar17 & 0x3fffffff;
    temp_v7 = temp_v15;
    piVar16 = (int *)*puVar17;
    temp_v8 = piVar13;
    temp_v9 = piVar13;
    temp_v10 = (int *)temp_v6;
    if ((int **)puVar7 != &temp_v7) {
      temp_v8 = *(int **)(param_1 + 0x30);
      temp_v9 = *(int **)(param_1 + 0x34);
      temp_v10 = *(int **)(param_1 + 0x38);
      temp_v7 = (int *)*puVar7;
      *puVar7 = (unsigned int)temp_v15;
      *(int **)(param_1 + 0x30) = piVar13;
      *(int **)(param_1 + 0x34) = piVar13;
      *(unsigned int *)(param_1 + 0x38) = temp_v6;
      piVar16 = piVar13;
    }
    if (temp_v8 < temp_v9) {
      piVar16 = (int *)((int)temp_v9 - (int)temp_v8);
    }
    if (temp_v8 < temp_v9) {
      temp_v6 = ((unsigned int)piVar16 & 0xf) >> 3;
    }
    else {
      temp_v6 = 0;
    }
    for (piVar16 = (int *)(temp_v6 + 1); (int)piVar16 < (((int)temp_v9 - (int)temp_v8) >> 3) + 1;
        piVar16 = (int *)((int)piVar16 + 2)) {
    }
    temp_v9 = temp_v8;
    if (temp_v7 != (int *)0x0) {
      piVar16 = temp_v8;
    }
    if (temp_v7 != (int *)0x0 && piVar16 != (int *)0x0) {
      (**(romwright_code **)(*temp_v7 + 0xc))();
    }
  }
  return;
}

} /* extern "C" */
