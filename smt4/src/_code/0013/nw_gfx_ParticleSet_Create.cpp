/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_ParticleSet_Create` (_code @ 0x13cac8, 0xb10 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00148650(int *, int *, unsigned int *, int);
int FUN_00149488(unsigned int, int *);
int FUN_00149fd4(int *, unsigned int, int *, unsigned int, unsigned int);
int nw_gfx_ParticleUtil_DuplicateResParticleUpdater(unsigned int *******, int *);
int nw_gfx_SceneNode_IsCircularReference(void);

typedef int romwright_code(...);
/* stack frame of param_6: 19 slot(s), 76 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int spA0; /* 0xa0: local_a0 */
} param_6_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_00148650. */
/* Supplied declaration required: FUN_00149488. */
/* Supplied declaration required: FUN_00149fd4. */
extern int *nw_gfx_ParticleUtil_DuplicateResParticleInitializer(int **, int *);
/* Supplied declaration required: nw_gfx_ParticleUtil_DuplicateResParticleUpdater. */
/* Supplied declaration required: nw_gfx_SceneNode_IsCircularReference. */


/* WARNING: Type propagation algorithm not settling */

int * nw_gfx_ParticleSet_Create
                (int param_1,unsigned int *param_2,int param_3,int *param_4,unsigned int param_5,
                unsigned int param_6)

{
/* irregular: 6 goto(s); irregular input(s): in_d8, in_s18; 6 native warning(s); review required */
  char temp_v0;
  int *piVar2;
  int *piVar3;
  int temp_v1;
  int *piVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  int **ppiVar8;
  unsigned int *puVar9;
  unsigned int *puVar10;
  int temp_v2;
  unsigned int *puVar12;
  unsigned int *puVar13;
  unsigned int temp_v3;
  unsigned int *******pppppppuVar15;
  unsigned int temp_v4;
  unsigned int ******ppppppuVar17;
  int temp_v5;
  unsigned int temp_v6;
  int *piVar20;
  unsigned int ******ppppppuVar21;
  int temp_v7;
  unsigned int *******pppppppuVar23;
  unsigned int *******pppppppuVar24;
  int *piVar25;
  int temp_v8;
  unsigned char temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned long long in_d8;
  unsigned int in_s18;
  int *temp_v16;
  int *temp_v17;
  int *temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  unsigned int *******temp_v21;
  unsigned int *******temp_v22;
  int temp_v23;
  int temp_v24;
  int *temp_v25;
  unsigned int temp_v26;
  int temp_v27;
  int iStack_34;
  unsigned int *puStack_30;
  int iStack_2c;
  int *temp_v28;
  
  puVar12 = param_2;
  if ((param_2 != (unsigned int *)0x0) && ((~*param_2 & 0x40000001) != 0)) {
    puVar12 = (unsigned int *)0x0;
  }
  temp_v3 = *(unsigned int *)(param_3 + 0x10);
  if ((int)*(unsigned int *)(param_3 + 0x10) < (int)puVar12[0xd]) {
    temp_v3 = puVar12[0xd];
  }
  temp_v22 = *(unsigned int ********)(param_3 + 0x14);
  if ((int)*(unsigned int ********)(param_3 + 0x14) < (int)puVar12[0xf]) {
    temp_v22 = (unsigned int *******)puVar12[0xf];
  }
  iStack_34 = param_1;
  puStack_30 = param_2;
  iStack_2c = param_3;
  temp_v28 = param_4;
  piVar2 = (int *)(**(romwright_code **)(*param_4 + 8))(param_4,temp_v3 * 0x18 + 0x90 + (int)temp_v22 * 0x1c,4)
  ;
  if (piVar2 == (int *)0x0) {
    return (int *)0x0;
  }
  piVar3 = piVar2;
  FUN_00148650(piVar2,temp_v28,puVar12,param_3);
  temp_v1 = (**(romwright_code **)(*piVar3 + 0x24))(piVar3,temp_v28);
  if (temp_v1 < 0) {
    if (piVar3 != (int *)0x0) {
      (**(romwright_code **)*piVar3)(piVar3);
      (**(romwright_code **)(*(int *)piVar3[1] + 0xc))((int *)piVar3[1],piVar3);
    }
    return (int *)0x0;
  }
  if ((param_1 != 0) &&
     (((piVar5 = *(int **)(param_1 + 0xc), piVar5 == (int *)0x0 ||
       ((piVar5 != piVar3 && (nw_gfx_SceneNode_IsCircularReference(), piVar5 == (int *)0x0)))) &&
      (piVar3[3] == 0)))) {
    temp_v6 = *(unsigned int *)(param_1 + 0x20) & 0x3fffffff;
    if ((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) >> 2 >= (int)temp_v6) {
      if (temp_v6 == 0) {
        temp_v6 = 1;
      }
      else {
        temp_v6 = temp_v6 << 1;
      }
      if (temp_v6 <= (*(unsigned int *)(param_1 + 0x20) & 0x3fffffff)) goto LAB_0013ccfc;
      temp_v9 = 0;
      if (*(int *)(param_1 + 0x14) != 0) {
        if ((*(unsigned int *)(param_1 + 0x20) & 0xc0000000) == 0x40000000) {
          puVar6 = (unsigned int *)
                   (**(romwright_code **)(**(int **)(param_1 + 0x14) + 8))
                             (*(int **)(param_1 + 0x14),temp_v6 << 2);
          puVar7 = *(unsigned int **)(param_1 + 0x18);
          puVar13 = *(unsigned int **)(param_1 + 0x1c);
          temp_v1 = 0;
          puVar9 = puVar6;
          if (puVar7 != puVar13) {
            do {
              if (puVar9 != (unsigned int *)0x0) {
                *puVar9 = *puVar7;
              }
              puVar7 = puVar7 + 1;
              puVar9 = puVar9 + 1;
            } while (puVar7 != puVar13);
            temp_v1 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) >> 2;
          }
          if (*(int *)(param_1 + 0x18) != 0) {
            (**(romwright_code **)(**(int **)(param_1 + 0x14) + 0xc))
                      (*(int **)(param_1 + 0x14),*(int *)(param_1 + 0x18));
          }
          *(unsigned int **)(param_1 + 0x1c) = puVar6 + temp_v1;
          *(unsigned int **)(param_1 + 0x18) = puVar6;
          *(unsigned int *)(param_1 + 0x20) = (*(unsigned int *)(param_1 + 0x20) & 0xc0000000) | temp_v6;
          goto LAB_0013ccfc;
        }
        temp_v9 = 0;
      }
    }
    else {
LAB_0013ccfc:
      temp_v9 = 1;
      if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
        **(int **)(param_1 + 0x1c) = (int)piVar3;
      }
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 4;
    }
    if (temp_v9) {
      piVar3[3] = *(int *)(param_1 + 0x10);
    }
  }
  temp_v24 = 1;
  temp_v6 = ((int)piVar2 + 0x93U) & 0xfffffffc;
  temp_v18 = (int *)0x0;
  ppiVar8 = (int **)(piVar3 + 0x15);
  temp_v19 = temp_v6;
  temp_v20 = temp_v6;
  temp_v21 = (unsigned int *******)(temp_v3 & 0x3fffffff);
  if (ppiVar8 != &temp_v18) {
    temp_v19 = piVar3[0x16];
    temp_v20 = piVar3[0x17];
    temp_v21 = (unsigned int *******)piVar3[0x18];
    temp_v18 = *ppiVar8;
    piVar3[0x16] = temp_v6;
    piVar3[0x17] = temp_v6;
    piVar3[0x18] = (int)(temp_v3 & 0x3fffffff);
    *ppiVar8 = (int *)0x0;
  }
  if (temp_v19 >= temp_v20) {
    temp_v4 = 0;
  }
  else {
    temp_v4 = ((int)(temp_v20 - temp_v19) / 0x18) & 1;
  }
  for (temp_v4 = temp_v4 + 1; (int)temp_v4 < (int)(temp_v20 - temp_v19) / 0x18 + 1; temp_v4 = temp_v4 + 2
      ) {
  }
  temp_v20 = temp_v19;
  if (temp_v18 != (int *)0x0) {
    temp_v4 = temp_v19;
  }
  if (temp_v18 != (int *)0x0 && temp_v4 != 0) {
    (**(romwright_code **)(*temp_v18 + 0xc))();
  }
  piVar2 = (int *)(temp_v6 + temp_v3 * 0x18);
  temp_v3 = puVar12[0xe];
  if (temp_v3 != 0) {
    piVar5 = (int *)(temp_v3 + (int)(puVar12 + 0xe));
  }
  else {
    piVar5 = (int *)0x0;
  }
  temp_v3 = puVar12[0xd];
  piVar25 = piVar5 + temp_v3;
  if (piVar5 != piVar25) {
    do {
      temp_v10 = (unsigned int)((unsigned long long)in_d8 >> 0x20);
      piVar20 = piVar5 + 1;
      temp_v17 = (int *)0x0;
      if (*piVar5 != 0) {
        temp_v17 = (int *)((int)piVar5 + *piVar5);
      }
      if ((char)temp_v17[1] != '\0') {
        temp_v6 = (temp_v3 & 0xffffff00) | 1;
        temp_v25 = (int *)nw_gfx_ParticleUtil_DuplicateResParticleInitializer(&temp_v17,temp_v28);
        if (temp_v25 == (int *)0x0) {
          temp_v24 = 0;
        }
      }
      else {
        temp_v6 = temp_v3 & 0xffffff00;
        temp_v25 = temp_v17;
      }
      piVar5 = piVar3 + 0x15;
      in_d8 = romwright_piece_4_4(temp_v10,*temp_v17);
      temp_v4 = piVar3[0x18] & 0x3fffffff;
      if ((piVar3[0x17] - piVar3[0x16]) / 0x18 >= (int)temp_v4) {
        if (temp_v4 == 0) {
          temp_v4 = 1;
        }
        else {
          temp_v4 = temp_v4 << 1;
        }
        if (temp_v4 <= (piVar3[0x18] & 0x3fffffffU)) goto LAB_0013cfdc;
        temp_v3 = 0;
        if ((*piVar5 != 0) && (temp_v3 = piVar3[0x18] & 0xc0000000, temp_v3 == 0x40000000)) {
          puVar9 = (unsigned int *)
                   (**(romwright_code **)(*(int *)*piVar5 + 8))((int *)*piVar5,temp_v4 * 0x18,0x20);
          puVar13 = (unsigned int *)piVar3[0x17];
          puVar6 = (unsigned int *)piVar3[0x16];
          temp_v23 = 0;
          puVar7 = puVar9;
          if (puVar6 != puVar13) {
            do {
              if (puVar7 != (unsigned int *)0x0) {
                temp_v10 = puVar6[1];
                temp_v11 = puVar6[2];
                temp_v12 = puVar6[3];
                temp_v13 = puVar6[4];
                temp_v14 = puVar6[5];
                *puVar7 = *puVar6;
                puVar7[1] = temp_v10;
                puVar7[2] = temp_v11;
                puVar7[3] = temp_v12;
                puVar7[4] = temp_v13;
                puVar7[5] = temp_v14;
              }
              puVar6 = puVar6 + 6;
              puVar7 = puVar7 + 6;
            } while (puVar6 != puVar13);
            temp_v23 = (piVar3[0x17] - piVar3[0x16]) / 0x18;
          }
          if (piVar3[0x16] != 0) {
            (**(romwright_code **)(*(int *)*piVar5 + 0xc))();
          }
          piVar3[0x16] = (int)puVar9;
          piVar3[0x17] = (int)(puVar9 + temp_v23 * 6);
          piVar3[0x18] = (piVar3[0x18] & 0xc0000000U) | temp_v4;
          goto LAB_0013cfdc;
        }
      }
      else {
LAB_0013cfdc:
        puVar10 = (unsigned int *)piVar3[0x17];
        if (puVar10 != (unsigned int *)0x0) {
          *puVar10 = temp_v6;
          puVar10[1] = (unsigned int)temp_v25;
          puVar10[2] = 0;
          puVar10[3] = (unsigned int)in_d8;
          puVar10[4] = (unsigned int)((unsigned long long)in_d8 >> 0x20);
          puVar10[5] = in_s18;
        }
        temp_v3 = piVar3[0x17] + 0x18;
        piVar3[0x17] = temp_v3;
      }
      piVar5 = piVar20;
    } while (piVar20 != piVar25);
  }
  ppiVar8 = (int **)(piVar3 + 0x19);
  temp_v16 = (int *)0x0;
  temp_v17 = piVar2;
  temp_v18 = piVar2;
  temp_v19 = (unsigned int)temp_v22 & 0x3fffffff;
  if (ppiVar8 != &temp_v16) {
    temp_v17 = (int *)piVar3[0x1a];
    temp_v18 = (int *)piVar3[0x1b];
    temp_v19 = piVar3[0x1c];
    temp_v16 = *ppiVar8;
    *ppiVar8 = (int *)0x0;
    piVar3[0x1a] = (int)piVar2;
    piVar3[0x1b] = (int)piVar2;
    piVar3[0x1c] = (unsigned int)temp_v22 & 0x3fffffff;
  }
  if (temp_v17 >= temp_v18) {
    temp_v3 = 0;
  }
  else {
    temp_v1 = (int)(((long long)((int)temp_v18 - (int)temp_v17) * -0x6db6db6d +
                  ((unsigned long long)(unsigned int)((int)temp_v18 - (int)temp_v17) << 0x20)) >> 0x20);
    temp_v3 = ((temp_v1 >> 4) - (temp_v1 >> 0x1f)) & 1;
  }
  temp_v6 = (int)temp_v18 - (int)temp_v17;
  temp_v8 = (int)(((long long)(int)temp_v6 * -0x6db6db6d + ((unsigned long long)temp_v6 << 0x20)) >> 0x20);
  temp_v1 = temp_v3 + 1;
  if (temp_v1 < ((temp_v8 >> 4) - (temp_v8 >> 0x1f)) + 1) {
    do {
      temp_v8 = (int)(((long long)(int)temp_v6 * -0x6db6db6d + ((unsigned long long)temp_v6 << 0x20)) >> 0x20);
      temp_v1 = temp_v1 + 2;
    } while (temp_v1 < ((temp_v8 >> 4) - (temp_v8 >> 0x1f)) + 1);
  }
  temp_v18 = temp_v17;
  piVar2 = (int *)0x0;
  if (temp_v16 != (int *)0x0) {
    piVar2 = temp_v17;
  }
  if (temp_v16 != (int *)0x0 && piVar2 != (int *)0x0) {
    (**(romwright_code **)(*temp_v16 + 0xc))();
  }
  temp_v3 = puVar12[0x10];
  if (temp_v3 != 0) {
    piVar2 = (int *)(temp_v3 + (int)(puVar12 + 0x10));
  }
  else {
    piVar2 = (int *)0x0;
  }
  piVar5 = piVar2 + puVar12[0xf];
  if (piVar2 != piVar5) {
    pppppppuVar23 = (unsigned int *******)0x0;
    do {
      piVar25 = piVar2 + 1;
      temp_v22 = pppppppuVar23;
      if (*piVar2 != 0) {
        temp_v22 = (unsigned int *******)((int)piVar2 + *piVar2);
      }
      if (*(char *)(temp_v22 + 1) != '\0') {
        temp_v3 = ((unsigned int)piVar5 & 0xffffff00) | 1;
        pppppppuVar24 = (unsigned int *******)&temp_v22;
        nw_gfx_ParticleUtil_DuplicateResParticleUpdater(pppppppuVar24,temp_v28);
        temp_v21 = pppppppuVar24;
        if (pppppppuVar24 == (unsigned int *******)0x0) {
          temp_v24 = 0;
        }
      }
      else {
        temp_v3 = (unsigned int)piVar5 & 0xffffff00;
        temp_v21 = temp_v22;
      }
      ppppppuVar21 = *temp_v22;
      temp_v9 = ppppppuVar21 == (unsigned int ******)0x800002 || ppppppuVar21 == (unsigned int ******)0x800001;
      if (ppppppuVar21 != (unsigned int ******)0x800002 && ppppppuVar21 != (unsigned int ******)0x800001) {
        temp_v9 = ppppppuVar21 == (unsigned int ******)0x800004;
      }
      pppppppuVar24 = pppppppuVar23;
      if (temp_v9) {
        pppppppuVar15 = pppppppuVar23;
        if (temp_v22[3] != (unsigned int ******)0x0) {
          pppppppuVar15 = (unsigned int *******)((int)temp_v22 + (int)(temp_v22[3] + 3));
        }
        if ((pppppppuVar15 != (unsigned int *******)0x0) &&
           (ppppppuVar17 = pppppppuVar15[8],
           ppppppuVar17 != (unsigned int ******)0x0 && (int)(pppppppuVar15 + 8) + (int)ppppppuVar17 != 0)) {
          pppppppuVar24 = (unsigned int *******)0x1;
        }
      }
      if ((ppppppuVar21 == (unsigned int ******)0x80000) && (((unsigned int)temp_v22[4] & 0xff) == 1)) {
        *(unsigned char *)(piVar3 + 0x23) = 1;
      }
      temp_v1 = (int)(((long long)(piVar3[0x1b] - piVar3[0x1a]) * -0x6db6db6d +
                    ((unsigned long long)(unsigned int)(piVar3[0x1b] - piVar3[0x1a]) << 0x20)) >> 0x20);
      temp_v6 = piVar3[0x1c] & 0x3fffffff;
      piVar2 = piVar3 + 0x19;
      if ((temp_v1 >> 4) - (temp_v1 >> 0x1f) >= (int)temp_v6) {
        if (temp_v6 == 0) {
          temp_v26 = 1;
        }
        else {
          temp_v26 = temp_v6 << 1;
        }
        if (temp_v26 <= (piVar3[0x1c] & 0x3fffffffU)) goto LAB_0013d370;
        if ((*piVar2 != 0) && ((piVar3[0x1c] & 0xc0000000U) == 0x40000000)) {
          puVar9 = (unsigned int *)
                   (**(romwright_code **)(*(int *)*piVar2 + 8))((int *)*piVar2,temp_v26 * 0x1c,0x20);
          puVar13 = (unsigned int *)piVar3[0x1b];
          puVar6 = (unsigned int *)piVar3[0x1a];
          temp_v27 = 0;
          puVar7 = puVar9;
          if (puVar6 != puVar13) {
            do {
              if (puVar7 != (unsigned int *)0x0) {
                temp_v10 = puVar6[1];
                temp_v11 = puVar6[2];
                temp_v12 = puVar6[3];
                temp_v13 = puVar6[4];
                temp_v14 = puVar6[5];
                temp_v15 = puVar6[6];
                *puVar7 = *puVar6;
                puVar7[1] = temp_v10;
                puVar7[2] = temp_v11;
                puVar7[3] = temp_v12;
                puVar7[4] = temp_v13;
                puVar7[5] = temp_v14;
                puVar7[6] = temp_v15;
              }
              puVar6 = puVar6 + 7;
              puVar7 = puVar7 + 7;
            } while (puVar6 != puVar13);
            temp_v1 = (int)(((long long)(piVar3[0x1b] - piVar3[0x1a]) * -0x6db6db6d +
                          ((unsigned long long)(unsigned int)(piVar3[0x1b] - piVar3[0x1a]) << 0x20)) >> 0x20);
            temp_v27 = (temp_v1 >> 4) - (temp_v1 >> 0x1f);
          }
          if (piVar3[0x1a] != 0) {
            (**(romwright_code **)(*(int *)*piVar2 + 0xc))();
          }
          piVar3[0x1a] = (int)puVar9;
          piVar3[0x1b] = (int)(puVar9 + temp_v27 * 7);
          piVar3[0x1c] = (piVar3[0x1c] & 0xc0000000U) | temp_v26;
          goto LAB_0013d370;
        }
      }
      else {
LAB_0013d370:
        puVar10 = (unsigned int *)piVar3[0x1b];
        if (puVar10 != (unsigned int *)0x0) {
          *puVar10 = temp_v3;
          puVar10[1] = (unsigned int)temp_v21;
          puVar10[3] = (unsigned int)ppppppuVar21;
          puVar10[2] = 0;
          puVar10[4] = (unsigned int)in_d8;
          puVar10[5] = (unsigned int)((unsigned long long)in_d8 >> 0x20);
          puVar10[6] = (unsigned int)pppppppuVar24;
        }
        piVar3[0x1b] = piVar3[0x1b] + 0x1c;
      }
      piVar2 = piVar25;
    } while (piVar25 != piVar5);
  }
  if (temp_v24 != 0) {
    temp_v3 = puVar12[0xc];
    if (temp_v3 != 0) {
      temp_v3 = temp_v3 + (int)(puVar12 + 0xc);
    }
    piVar2 = piVar3;
    FUN_00149fd4(piVar3,temp_v3,temp_v28,param_5,param_6);
    if (piVar2 != (int *)0x0) {
      FUN_00149488(param_6,piVar3);
      temp_v8 = piVar3[0x17];
      temp_v1 = piVar3[0x16];
      while (temp_v1 != temp_v8) {
        temp_v2 = temp_v1 + 0x18;
        temp_v5 = *(int *)(*(int *)(temp_v1 + 4) + 8);
        if (temp_v5 < 0) {
          *(unsigned int *)(temp_v1 + 0x10) = 0;
          *(unsigned int *)(temp_v1 + 0x14) = 0;
          temp_v1 = temp_v2;
        }
        else {
          temp_v0 = *(char *)((int)piVar2 + temp_v5 + 0xd1);
          if ((char)piVar2[0x34] != '\0') {
            temp_v7 = 0;
            if (temp_v0 != '\0') {
              temp_v7 = piVar2[temp_v5 * 2 + 0x3a];
            }
            *(int *)(temp_v1 + 0x14) = temp_v7;
            if (*(char *)((int)piVar2 + temp_v5 + 0xd1) == '\0') {
              temp_v5 = 0;
            }
            else {
              temp_v5 = piVar2[temp_v5 * 2 + ((char)piVar2[0x34] == '\0') + 0x39];
            }
            *(int *)(temp_v1 + 0x10) = temp_v5;
            temp_v1 = temp_v2;
          }
          else {
            temp_v7 = 0;
            if (temp_v0 != '\0') {
              temp_v7 = piVar2[temp_v5 * 2 + 0x39];
            }
            *(int *)(temp_v1 + 0x10) = temp_v7;
            if (*(char *)((int)piVar2 + temp_v5 + 0xd1) == '\0') {
              temp_v5 = 0;
            }
            else {
              temp_v5 = piVar2[temp_v5 * 2 + ((char)piVar2[0x34] == '\0') + 0x39];
            }
            *(int *)(temp_v1 + 0x14) = temp_v5;
            temp_v1 = temp_v2;
          }
        }
      }
      temp_v8 = piVar3[0x1b];
      temp_v1 = piVar3[0x1a];
      while (temp_v1 != temp_v8) {
        temp_v2 = temp_v1 + 0x1c;
        temp_v5 = *(int *)(*(int *)(temp_v1 + 4) + 8);
        if (temp_v5 < 0) {
          *(unsigned int *)(temp_v1 + 0x10) = 0;
          *(unsigned int *)(temp_v1 + 0x14) = 0;
          temp_v1 = temp_v2;
        }
        else {
          temp_v0 = *(char *)((int)piVar2 + temp_v5 + 0xd1);
          if ((char)piVar2[0x34] != '\0') {
            temp_v7 = 0;
            if (temp_v0 != '\0') {
              temp_v7 = piVar2[temp_v5 * 2 + 0x3a];
            }
            *(int *)(temp_v1 + 0x14) = temp_v7;
            if (*(char *)((int)piVar2 + temp_v5 + 0xd1) == '\0') {
              temp_v5 = 0;
            }
            else {
              temp_v5 = piVar2[temp_v5 * 2 + ((char)piVar2[0x34] == '\0') + 0x39];
            }
            *(int *)(temp_v1 + 0x10) = temp_v5;
            temp_v1 = temp_v2;
          }
          else {
            temp_v7 = 0;
            if (temp_v0 != '\0') {
              temp_v7 = piVar2[temp_v5 * 2 + 0x39];
            }
            *(int *)(temp_v1 + 0x10) = temp_v7;
            if (*(char *)((int)piVar2 + temp_v5 + 0xd1) == '\0') {
              temp_v5 = 0;
            }
            else {
              temp_v5 = piVar2[temp_v5 * 2 + ((char)piVar2[0x34] == '\0') + 0x39];
            }
            *(int *)(temp_v1 + 0x14) = temp_v5;
            temp_v1 = temp_v2;
          }
        }
      }
      return piVar3;
    }
  }
  if (piVar3 != (int *)0x0) {
    (**(romwright_code **)*piVar3)(piVar3);
    (**(romwright_code **)(*(int *)piVar3[1] + 0xc))((int *)piVar3[1],piVar3);
  }
  return (int *)0x0;
}

} /* extern "C" */
