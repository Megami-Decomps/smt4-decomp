/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031dac4` (_code @ 0x31dac4, 0x7ec bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 15 slot(s), 57 byte(s) */
typedef struct {
    unsigned char sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp70; /* 0x70: local_70 */
} param_1_stack;

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Supplied declaration required: FUN_00154080. */
/* Supplied declaration required: FUN_002a5960. */
/* Supplied declaration required: FUN_002a5dc4. */
extern int FUN_002af294(int **, int);
extern int FUN_002b4414(int, int ***, int);
/* Supplied declaration required: FUN_002c2ff0. */
extern unsigned int FUN_002c300c(void);
/* Supplied declaration required: FUN_002c30c4. */
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c5300. */
extern int nw_anim_res_ResAnim_IsFullBakedAnim(int ****);
/* Supplied declaration required: nw_gfx_SceneBuilder_CreateObject. */
/* Supplied declaration required: nw_gfx_SceneHelper_ResolveReferenceImpl. */
/* Supplied declaration required: nw_gfx_SkeletalModel_SetFullBakedAnimEnabled. */


int * FUN_0031dac4(int *param_1)

{
/* irregular: 10 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char temp_v0;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  int ***pppiVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  int *piVar9;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int ****ppppiVar13;
  int *piVar14;
  unsigned int temp_v4;
  int *piVar16;
  int temp_v5;
  unsigned int *puVar18;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int ****ppppiVar23;
  int ****ppppiVar24;
  int temp_v10;
  int ***temp_v11 [2];
  int *temp_v12;
  unsigned int *temp_v13;
  unsigned int *temp_v14;
  unsigned int temp_v15;
  int ***temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  unsigned int temp_v24;
  unsigned char temp_v25;
  
  temp_v8 = 1;
  piVar9 = (int *)0x100;
  temp_v11[0] = (int ***)0x1;
  FUN_002c498c(0x100,0x100,0,0x28);
  temp_v12 = (int *)FUN_002c2ff0();
  temp_v13 = (unsigned int *)0x0;
  temp_v14 = (unsigned int *)0x0;
  temp_v15 = 0x40000000;
  piVar9[1] = *(int *)(*param_1 + 0x1c);
  temp_v11[0] = (int ***)0x1;
  temp_v1 = 0x100;
  FUN_002c5300(0x100,0x100,0,piVar9[1] << 2);
  *piVar9 = temp_v1;
  temp_v1 = *(int *)(*param_1 + 0x20);
  if (temp_v1 != 0) {
    temp_v1 = *param_1 + 0x20 + temp_v1;
  }
  else {
    temp_v1 = 0;
  }
  if (temp_v1 != 0) {
    temp_v8 = temp_v1 + 0x1c;
  }
  if (temp_v1 == 0) {
    temp_v8 = 0;
  }
  temp_v1 = 0;
  temp_v10 = temp_v8 + *(int *)(*param_1 + 0x1c) * 0x10;
  puVar1 = temp_v13;
  puVar3 = temp_v13;
  puVar4 = temp_v14;
  if (temp_v8 != temp_v10) {
    ppppiVar24 = (int ****)0x0;
    do {
      ppppiVar23 = ppppiVar24;
      if (*(int *)(temp_v8 + 0xc) != 0) {
        ppppiVar23 = (int ****)(*(int *)(temp_v8 + 0xc) + temp_v8 + 0xc);
      }
      temp_v2 = FUN_002c2ff0();
      temp_v3 = FUN_002c300c();
      temp_v19 = 4;
      temp_v18 = 8;
      temp_v25 = 1;
      temp_v17 = romwright_piece_3_1((((unsigned int)(temp_v17) >> 8) & 0xffffffU),1);
      temp_v21 = 0;
      temp_v20 = 4;
      temp_v23 = 4;
      ppppiVar13 = &temp_v16;
      temp_v22 = 0;
      temp_v24 = 0;
      temp_v16 = (int ***)ppppiVar23;
      nw_gfx_SceneBuilder_CreateObject(ppppiVar13,temp_v2,temp_v3);
      ppppiVar23 = ppppiVar24;
      if (ppppiVar13 != (int ****)0x0) {
        piVar14 = (int *)(*(romwright_code *)(*ppppiVar13)[2])(ppppiVar13);
        do {
          ppppiVar23 = ppppiVar13;
          if (piVar14 == (int *)0x44e858) break;
          piVar14 = (int *)*piVar14;
          ppppiVar23 = ppppiVar24;
        } while (piVar14 != (int *)0x0);
      }
      temp_v4 = temp_v15 & 0x3fffffff;
      if (((int)temp_v14 - (int)temp_v13) >> 2 >= (int)temp_v4) {
        if (temp_v4 != 0) {
          temp_v7 = temp_v4 << 1;
        }
        else {
          temp_v7 = 1;
        }
        temp_v7 = FUN_002af294(&temp_v12,temp_v7);
        if (temp_v7 != 0) {
          if (temp_v14 != (unsigned int *)0x0) {
            *temp_v14 = (unsigned int)ppppiVar23;
          }
          temp_v14 = temp_v14 + 1;
        }
      }
      else {
        if (temp_v14 != (unsigned int *)0x0) {
          *temp_v14 = (unsigned int)ppppiVar23;
        }
        temp_v14 = temp_v14 + 1;
      }
      ppppiVar13 = ppppiVar24;
      if (ppppiVar23 != (int ****)0x0) {
        piVar14 = (int *)(*(romwright_code *)(*ppppiVar23)[2])(ppppiVar23);
        do {
          ppppiVar13 = ppppiVar23;
          if (piVar14 == (int *)0x472288) break;
          piVar14 = (int *)*piVar14;
          ppppiVar13 = ppppiVar24;
        } while (piVar14 != (int *)0x0);
      }
      temp_v8 = temp_v8 + 0x10;
      *(int *****)(*piVar9 + temp_v1 * 4) = ppppiVar13;
      temp_v1 = temp_v1 + 1;
      puVar1 = temp_v13;
      puVar3 = temp_v13;
      puVar4 = temp_v14;
    } while (temp_v8 != temp_v10);
  }
  for (; puVar8 = temp_v14, puVar7 = temp_v13, temp_v0 = puVar1 != temp_v14, puVar5 = temp_v13,
      temp_v13 = puVar3, temp_v14 = puVar4, temp_v0; puVar1 = puVar1 + 1) {
    for (; puVar5 != puVar8; puVar5 = puVar5 + 1) {
      nw_gfx_SceneHelper_ResolveReferenceImpl(*puVar1,*puVar5);
    }
    puVar3 = temp_v13;
    puVar4 = temp_v14;
    temp_v14 = puVar8;
    temp_v13 = puVar7;
  }
  temp_v1 = *(int *)(*param_1 + 100);
  piVar9[3] = temp_v1;
  if (temp_v1 == 0) {
    piVar9[2] = 0;
  }
  else {
    temp_v11[0] = (int ***)0x1;
    temp_v1 = 0x100;
    FUN_002c5300(0x100,0x100,0,piVar9[3] << 2);
    piVar9[2] = temp_v1;
    temp_v11[0] = (int ***)0x1;
    temp_v1 = 0x100;
    FUN_002c498c(0x100,0x100,0,piVar9[3] << 2);
    temp_v8 = 0;
    piVar9[4] = temp_v1;
    if (0 < piVar9[3]) {
      do {
        temp_v1 = *(int *)(*param_1 + 0x68);
        if (temp_v1 != 0) {
          temp_v1 = temp_v1 + *param_1 + 0x68;
        }
        temp_v10 = 0;
        if (temp_v1 != 0) {
          piVar14 = (int *)(temp_v1 + temp_v8 * 0x10 + 0x28);
          temp_v10 = *piVar14;
          if (temp_v10 == 0) {
            temp_v10 = 0;
          }
          else {
            temp_v10 = (int)piVar14 + temp_v10;
          }
        }
        *(int *)(piVar9[2] + temp_v8 * 4) = temp_v10;
        piVar14 = (int *)(piVar9[2] + temp_v8 * 4);
        temp_v1 = *(int *)(*piVar14 + 8);
        if (temp_v1 != 0) {
          temp_v11[0] = (int ***)(*piVar14 + 8 + temp_v1);
        }
        else {
          temp_v11[0] = (int ***)0x0;
        }
        temp_v1 = FUN_002c30c4();
        temp_v10 = 0;
        if (temp_v10 < piVar9[1]) {
          do {
            temp_v9 = *(int *)(*piVar9 + temp_v10 * 4);
            piVar16 = (int *)(*(int *)(temp_v9 + 8) + 0xc);
            temp_v7 = *piVar16;
            if (temp_v7 != 0) {
              temp_v7 = temp_v7 + (int)piVar16;
            }
            else {
              temp_v7 = 0;
            }
            temp_v5 = FUN_002c30c4(temp_v7);
            if ((temp_v5 == temp_v1) &&
               (temp_v7 = FUN_002b4414(temp_v7,temp_v11[0],temp_v1), temp_v7 == 0)) {
              temp_v11[0] = (int ***)*piVar14;
              temp_v1 = *(int *)(temp_v9 + 0x228);
              temp_v2 = *(unsigned int *)(*piVar14 + 0x18);
              puVar18 = *(unsigned int **)(temp_v9 + 8);
              if ((puVar18 != (unsigned int *)0x0) && ((~*puVar18 & 0x40000092) != 0)) {
                puVar18 = (unsigned int *)0x0;
              }
              temp_v4 = puVar18[0x38];
              if (temp_v4 != 0) {
                temp_v10 = temp_v4 + (int)(puVar18 + 0x38);
              }
              else {
                temp_v10 = 0;
              }
              temp_v7 = nw_anim_res_ResAnim_IsFullBakedAnim(temp_v11);
              if (temp_v7 != 0) {
                nw_gfx_SkeletalModel_SetFullBakedAnimEnabled(temp_v9,1);
              }
              pppiVar6 = temp_v11[0];
              temp_v3 = *(unsigned int *)(*(int *)(temp_v1 + 8) + 0x10);
              temp_v4 = *(unsigned int *)(temp_v10 + 0x28);
              if ((int ****)temp_v11[0] == (int ****)0x0) {
                ppppiVar24 = (int ****)0x0;
              }
              else {
                temp_v6 = FUN_002c2ff0();
                ppppiVar24 = &temp_v16;
                temp_v16 = pppiVar6;
                temp_v19 = romwright_piece_3_1((((unsigned int)(temp_v19) >> 8) & 0xffffffU),1);
                temp_v17 = temp_v3;
                temp_v18 = temp_v2;
                FUN_00154080(ppppiVar24,temp_v6);
                *(unsigned char *)((int)ppppiVar24 + 0x5d) = (~temp_v4 & 2) != 0;
              }
              (*(romwright_code *)(*ppppiVar24)[3])();
              *(int *****)(piVar9[4] + temp_v8 * 4) = ppppiVar24;
              if (*(int *)(temp_v9 + 0x228) != 0) {
                temp_v1 = *(int *)(temp_v9 + 0x28);
                temp_v10 = *(int *)(temp_v9 + 0x22c);
                if (((-1 < temp_v10) &&
                    (temp_v10 < (*(int *)(temp_v1 + 0x10) - *(int *)(temp_v1 + 0xc)) >> 2)) &&
                   (0 < *(int *)(temp_v1 + 0x28))) {
                  *(int *****)(*(int *)(temp_v1 + 0x1c) + temp_v10 * *(int *)(temp_v1 + 0x28) * 4) =
                       ppppiVar24;
                }
              }
              break;
            }
            temp_v10 = temp_v10 + 1;
          } while (temp_v10 < piVar9[1]);
        }
        temp_v8 = temp_v8 + 1;
      } while (temp_v8 < piVar9[3]);
    }
  }
  temp_v1 = *(int *)(*param_1 + 0x6c);
  piVar9[6] = temp_v1;
  if (temp_v1 == 0) {
    piVar9[5] = 0;
  }
  else {
    temp_v11[0] = (int ***)0x1;
    temp_v1 = 0x100;
    FUN_002c5300(0x100,0x100,0,piVar9[6] << 2);
    piVar9[5] = temp_v1;
    temp_v11[0] = (int ***)0x1;
    temp_v1 = 0x100;
    FUN_002c498c(0x100,0x100,0,piVar9[6] << 2);
    temp_v8 = 0;
    piVar9[7] = temp_v1;
    if (0 < piVar9[6]) {
      do {
        temp_v1 = *(int *)(*param_1 + 0x70);
        if (temp_v1 != 0) {
          temp_v1 = *param_1 + 0x70 + temp_v1;
        }
        else {
          temp_v1 = 0;
        }
        temp_v10 = 0;
        if (temp_v1 != 0) {
          piVar14 = (int *)(temp_v1 + temp_v8 * 0x10 + 0x28);
          temp_v10 = *piVar14;
          if (temp_v10 == 0) {
            temp_v10 = 0;
          }
          else {
            temp_v10 = (int)piVar14 + temp_v10;
          }
        }
        *(int *)(piVar9[5] + temp_v8 * 4) = temp_v10;
        piVar16 = (int *)(piVar9[5] + temp_v8 * 4);
        piVar14 = (int *)(*piVar16 + 8);
        temp_v1 = *piVar14;
        if (temp_v1 != 0) {
          temp_v11[0] = (int ***)((int)piVar14 + temp_v1);
        }
        else {
          temp_v11[0] = (int ***)0x0;
        }
        temp_v1 = FUN_002c30c4();
        temp_v10 = 0;
        if (temp_v10 < piVar9[1]) {
          do {
            temp_v9 = *(int *)(*piVar9 + temp_v10 * 4);
            piVar14 = (int *)(*(int *)(temp_v9 + 8) + 0xc);
            temp_v7 = *piVar14;
            if (temp_v7 != 0) {
              temp_v7 = temp_v7 + (int)piVar14;
            }
            else {
              temp_v7 = 0;
            }
            temp_v5 = FUN_002c30c4(temp_v7);
            if ((temp_v5 == temp_v1) &&
               (temp_v7 = FUN_002b4414(temp_v7,temp_v11[0],temp_v1), temp_v7 == 0)) {
              temp_v1 = *(int *)(temp_v9 + 0x148);
              if (temp_v1 == 0) {
                piVar14 = (int *)0x0;
              }
              else {
                temp_v17 = *(unsigned int *)(*(int *)(temp_v1 + 8) + 0x10);
                temp_v19 = romwright_piece_3_1((((unsigned int)(temp_v19) >> 8) & 0xffffffU),1);
                temp_v16 = (int ***)*piVar16;
                temp_v18 = temp_v17;
                piVar16 = (int *)FUN_002c2ff0();
                piVar14 = (int *)(**(romwright_code **)(*piVar16 + 8))(piVar16,0x74,4);
                if (piVar14 != (int *)0x0) {
                  FUN_002a5dc4(piVar14,piVar16);
                  temp_v11[0] = (int ***)(int)(char)temp_v19;
                  FUN_002a5960(piVar14,&temp_v16,temp_v17,temp_v18);
                  if (piVar14 != (int *)0x0) {
                    (**(romwright_code **)(*piVar14 + 0xc))(piVar14,temp_v1);
                    if (*(int *)(temp_v9 + 0x148) != 0) {
                      temp_v1 = *(int *)(temp_v9 + 0x28);
                      temp_v10 = *(int *)(temp_v9 + 0x14c);
                      if (((-1 < temp_v10) &&
                          (temp_v10 < (*(int *)(temp_v1 + 0x10) - *(int *)(temp_v1 + 0xc)) >> 2)) &&
                         (0 < *(int *)(temp_v1 + 0x28))) {
                        *(int **)(*(int *)(temp_v1 + 0x1c) + temp_v10 * *(int *)(temp_v1 + 0x28) * 4) =
                             piVar14;
                      }
                    }
                    *(int **)(piVar9[7] + temp_v8 * 4) = piVar14;
                    break;
                  }
                }
                piVar14 = (int *)0x0;
              }
              *(int **)(piVar9[7] + temp_v8 * 4) = piVar14;
              break;
            }
            temp_v10 = temp_v10 + 1;
          } while (temp_v10 < piVar9[1]);
        }
        temp_v8 = temp_v8 + 1;
      } while (temp_v8 < piVar9[6]);
    }
  }
  temp_v14 = temp_v13;
  puVar1 = (unsigned int *)0x0;
  if (temp_v12 != (int *)0x0) {
    puVar1 = temp_v13;
  }
  if (temp_v12 != (int *)0x0 && puVar1 != (unsigned int *)0x0) {
    (**(romwright_code **)(*temp_v12 + 0xc))(temp_v12,temp_v13);
  }
  return piVar9;
}
