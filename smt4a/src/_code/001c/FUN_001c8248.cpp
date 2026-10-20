/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c8248` (_code @ 0x1c8248, 0xc24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001cdbb4(int *, int *, unsigned int *, int);
int FUN_001ce8e4(unsigned int, int *);
int FUN_001cf5a4(int *, unsigned int, int *, unsigned int, unsigned int);
int nw_gfx_ParticleUtil_DuplicateResParticleUpdater(unsigned int *******, int *);
int nw_gfx_SceneNode_IsCircularReference(void);

typedef int romwright_code(...);
/* stack frame of param_6: 22 slot(s), 88 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spB0; /* 0xb0: local_b0 */
} param_6_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_001cdbb4. */
/* Supplied declaration required: FUN_001ce8e4. */
/* Supplied declaration required: FUN_001cf5a4. */
extern unsigned int *******nw_gfx_ParticleUtil_DuplicateResParticleInitializer(unsigned int *******, int *);
/* Supplied declaration required: nw_gfx_ParticleUtil_DuplicateResParticleUpdater. */
/* Supplied declaration required: nw_gfx_SceneNode_IsCircularReference. */


/* WARNING: Type propagation algorithm not settling */

int * FUN_001c8248(int param_1,unsigned int *param_2,int param_3,int *param_4,unsigned int param_5,
                  unsigned int param_6)

{
/* irregular: 4 goto(s); irregular input(s): in_d8, in_s18; 6 native warning(s); review required */
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
  unsigned int *******pppppppuVar11;
  unsigned int *puVar12;
  int temp_v2;
  unsigned int *puVar14;
  unsigned int *puVar15;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int *puVar19;
  int temp_v6;
  unsigned int temp_v7;
  int *piVar22;
  unsigned int ******ppppppuVar23;
  int temp_v8;
  int *piVar25;
  int temp_v9;
  unsigned int temp_v10;
  unsigned char temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned long long in_d8;
  unsigned int in_s18;
  unsigned int temp_v18;
  int *temp_v19;
  int *temp_v20;
  int *temp_v21;
  int *temp_v22;
  int *temp_v23;
  unsigned int temp_v24;
  unsigned int *******temp_v25;
  unsigned int *******temp_v26;
  int temp_v27;
  unsigned int *******temp_v28;
  unsigned int temp_v29;
  int temp_v30;
  int iStack_34;
  unsigned int *puStack_30;
  int iStack_2c;
  int *temp_v31;
  
  puVar14 = param_2;
  if ((param_2 != (unsigned int *)0x0) && ((~*param_2 & 0x40000001) != 0)) {
    puVar14 = (unsigned int *)0x0;
  }
  temp_v3 = *(unsigned int *)(param_3 + 0x10);
  if ((int)*(unsigned int *)(param_3 + 0x10) < (int)puVar14[0xd]) {
    temp_v3 = puVar14[0xd];
  }
  temp_v26 = *(unsigned int ********)(param_3 + 0x14);
  if ((int)*(unsigned int ********)(param_3 + 0x14) < (int)puVar14[0xf]) {
    temp_v26 = (unsigned int *******)puVar14[0xf];
  }
  iStack_34 = param_1;
  puStack_30 = param_2;
  iStack_2c = param_3;
  temp_v31 = param_4;
  piVar2 = (int *)(**(romwright_code **)(*param_4 + 8))(param_4,temp_v3 * 0x18 + 0x90 + (int)temp_v26 * 0x1c,4)
  ;
  if (piVar2 == (int *)0x0) {
    return (int *)0x0;
  }
  piVar3 = piVar2;
  FUN_001cdbb4(piVar2,temp_v31,puVar14,param_3);
  temp_v1 = (**(romwright_code **)(*piVar3 + 0x24))(piVar3,temp_v31);
  if (temp_v1 < 0) {
    if (piVar3 != (int *)0x0) {
      (**(romwright_code **)*piVar3)(piVar3);
      (**(romwright_code **)(*(int *)piVar3[1] + 0xc))((int *)piVar3[1],piVar3);
    }
    return (int *)0x0;
  }
  temp_v11 = 0;
  if ((param_1 != 0) &&
     (((piVar5 = *(int **)(param_1 + 0xc), piVar5 == (int *)0x0 ||
       ((piVar5 != piVar3 && (nw_gfx_SceneNode_IsCircularReference(), piVar5 == (int *)0x0)))) &&
      (piVar3[3] == 0)))) {
    temp_v7 = *(unsigned int *)(param_1 + 0x20) & 0x3fffffff;
    if ((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) >> 2 >= (int)temp_v7) {
      if (temp_v7 == 0) {
        temp_v7 = 1;
      }
      else {
        temp_v7 = temp_v7 << 1;
      }
      if (temp_v7 > (*(unsigned int *)(param_1 + 0x20) & 0x3fffffff)) {
        if (((*(int *)(param_1 + 0x14) != 0) &&
            ((*(unsigned int *)(param_1 + 0x20) & 0xc0000000) == 0x40000000)) &&
           (puVar6 = (unsigned int *)
                     (**(romwright_code **)(**(int **)(param_1 + 0x14) + 8))
                               (*(int **)(param_1 + 0x14),temp_v7 << 2), puVar6 != (unsigned int *)0x0)
           ) {
          puVar7 = *(unsigned int **)(param_1 + 0x18);
          puVar15 = *(unsigned int **)(param_1 + 0x1c);
          temp_v1 = 0;
          puVar19 = puVar6;
          if (puVar7 != puVar15) {
            do {
              if (puVar19 != (unsigned int *)0x0) {
                *puVar19 = *puVar7;
              }
              puVar7 = puVar7 + 1;
              puVar19 = puVar19 + 1;
            } while (puVar7 != puVar15);
            temp_v1 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) >> 2;
          }
          if (*(int *)(param_1 + 0x18) != 0) {
            *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x18);
            (**(romwright_code **)(**(int **)(param_1 + 0x14) + 0xc))();
          }
          *(unsigned int **)(param_1 + 0x1c) = puVar6 + temp_v1;
          *(unsigned int **)(param_1 + 0x18) = puVar6;
          *(unsigned int *)(param_1 + 0x20) = (*(unsigned int *)(param_1 + 0x20) & 0xc0000000) | temp_v7;
          temp_v11 = 1;
          if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
            **(int **)(param_1 + 0x1c) = (int)piVar3;
          }
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 4;
        }
      }
      else {
        temp_v11 = 1;
        if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
          **(int **)(param_1 + 0x1c) = (int)piVar3;
        }
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 4;
      }
    }
    else {
      temp_v11 = 1;
      if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
        **(int **)(param_1 + 0x1c) = (int)piVar3;
      }
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 4;
    }
    if (temp_v11) {
      piVar3[3] = *(int *)(param_1 + 0x10);
    }
  }
  temp_v27 = 1;
  piVar2 = (int *)(((int)piVar2 + 0x93U) & 0xfffffffc);
  temp_v19 = (int *)0x0;
  ppiVar8 = (int **)(piVar3 + 0x15);
  temp_v20 = piVar2;
  temp_v21 = piVar2;
  temp_v22 = (int *)(temp_v3 & 0x3fffffff);
  if (ppiVar8 != &temp_v19) {
    temp_v20 = (int *)piVar3[0x16];
    temp_v21 = (int *)piVar3[0x17];
    temp_v22 = (int *)piVar3[0x18];
    temp_v19 = *ppiVar8;
    piVar3[0x18] = temp_v3 & 0x3fffffff;
    *ppiVar8 = (int *)0x0;
    piVar3[0x16] = (int)piVar2;
    piVar3[0x17] = (int)piVar2;
  }
  if (temp_v20 >= temp_v21) {
    temp_v7 = 0;
  }
  else {
    temp_v7 = (((int)temp_v21 - (int)temp_v20) / 0x18) & 1;
  }
  for (piVar5 = (int *)(temp_v7 + 1); (int)piVar5 < ((int)temp_v21 - (int)temp_v20) / 0x18 + 1;
      piVar5 = (int *)((int)piVar5 + 2)) {
  }
  temp_v21 = temp_v20;
  if (temp_v19 != (int *)0x0) {
    piVar5 = temp_v20;
  }
  if (temp_v19 != (int *)0x0 && piVar5 != (int *)0x0) {
    (**(romwright_code **)(*temp_v19 + 0xc))();
  }
  piVar2 = piVar2 + temp_v3 * 6;
  temp_v3 = puVar14[0xe];
  if (temp_v3 != 0) {
    piVar5 = (int *)(temp_v3 + (int)(puVar14 + 0xe));
  }
  else {
    piVar5 = (int *)0x0;
  }
  temp_v3 = puVar14[0xd];
  piVar25 = piVar5 + temp_v3;
  if (piVar5 != piVar25) {
    do {
      temp_v12 = (unsigned int)((unsigned long long)in_d8 >> 0x20);
      piVar22 = piVar5 + 1;
      temp_v25 = (unsigned int *******)0x0;
      if (*piVar5 != 0) {
        temp_v25 = (unsigned int *******)((int)piVar5 + *piVar5);
      }
      if (*(char *)(temp_v25 + 1) != '\0') {
        temp_v7 = (temp_v3 & 0xffffff00) | 1;
        temp_v28 = (unsigned int *******)
                   nw_gfx_ParticleUtil_DuplicateResParticleInitializer((unsigned int *******)&temp_v25,temp_v31);
        if (temp_v28 == (unsigned int *******)0x0) {
          temp_v27 = 0;
        }
      }
      else {
        temp_v7 = temp_v3 & 0xffffff00;
        temp_v28 = temp_v25;
      }
      in_d8 = romwright_piece_4_4(temp_v12,*temp_v25);
      temp_v5 = piVar3[0x18] & 0x3fffffff;
      piVar5 = piVar3 + 0x15;
      if ((piVar3[0x17] - piVar3[0x16]) / 0x18 >= (int)temp_v5) {
        if (temp_v5 == 0) {
          temp_v5 = 1;
        }
        else {
          temp_v5 = temp_v5 << 1;
        }
        if (temp_v5 <= (piVar3[0x18] & 0x3fffffffU)) goto LAB_001c87d4;
        temp_v3 = 0;
        if ((*piVar5 != 0) && (temp_v3 = piVar3[0x18] & 0xc0000000, temp_v3 == 0x40000000)) {
          puVar6 = (unsigned int *)
                   (**(romwright_code **)(*(int *)*piVar5 + 8))((int *)*piVar5,temp_v5 * 0x18,0x20);
          temp_v3 = 0;
          if (puVar6 != (unsigned int *)0x0) {
            puVar15 = (unsigned int *)piVar3[0x17];
            puVar19 = (unsigned int *)piVar3[0x16];
            temp_v30 = 0;
            puVar7 = puVar6;
            if (puVar19 != puVar15) {
              do {
                if (puVar7 != (unsigned int *)0x0) {
                  temp_v12 = puVar19[1];
                  temp_v13 = puVar19[2];
                  temp_v14 = puVar19[3];
                  temp_v15 = puVar19[4];
                  temp_v16 = puVar19[5];
                  *puVar7 = *puVar19;
                  puVar7[1] = temp_v12;
                  puVar7[2] = temp_v13;
                  puVar7[3] = temp_v14;
                  puVar7[4] = temp_v15;
                  puVar7[5] = temp_v16;
                }
                puVar19 = puVar19 + 6;
                puVar7 = puVar7 + 6;
              } while (puVar19 != puVar15);
              temp_v30 = (piVar3[0x17] - piVar3[0x16]) / 0x18;
            }
            temp_v3 = piVar3[0x16];
            if (temp_v3 != 0) {
              temp_v4 = piVar3[0x17];
              if (temp_v3 >= temp_v4) {
                temp_v10 = 0;
              }
              else {
                temp_v10 = ((int)(temp_v4 - temp_v3) / 0x18) & 1;
              }
              for (temp_v1 = temp_v10 + 1; temp_v1 < (int)(temp_v4 - temp_v3) / 0x18 + 1; temp_v1 = temp_v1 + 2)
              {
              }
              piVar3[0x17] = temp_v3;
              (**(romwright_code **)(*(int *)*piVar5 + 0xc))((int *)*piVar5,temp_v3);
            }
            piVar3[0x16] = (int)puVar6;
            piVar3[0x17] = (int)(puVar6 + temp_v30 * 6);
            piVar3[0x18] = (piVar3[0x18] & 0xc0000000U) | temp_v5;
            goto LAB_001c87d4;
          }
        }
      }
      else {
LAB_001c87d4:
        puVar9 = (unsigned int *)piVar3[0x17];
        if (puVar9 != (unsigned int *)0x0) {
          *puVar9 = temp_v7;
          puVar9[1] = (unsigned int)temp_v28;
          puVar9[2] = 0;
          puVar9[3] = (unsigned int)in_d8;
          puVar9[4] = (unsigned int)((unsigned long long)in_d8 >> 0x20);
          puVar9[5] = in_s18;
        }
        temp_v3 = piVar3[0x17] + 0x18;
        piVar3[0x17] = temp_v3;
      }
      piVar5 = piVar22;
    } while (piVar22 != piVar25);
  }
  ppiVar8 = (int **)(piVar3 + 0x19);
  temp_v21 = (int *)0x0;
  temp_v22 = piVar2;
  temp_v23 = piVar2;
  temp_v24 = (unsigned int)temp_v26 & 0x3fffffff;
  if (ppiVar8 != &temp_v21) {
    temp_v22 = (int *)piVar3[0x1a];
    temp_v23 = (int *)piVar3[0x1b];
    temp_v24 = piVar3[0x1c];
    temp_v21 = *ppiVar8;
    *ppiVar8 = (int *)0x0;
    piVar3[0x1a] = (int)piVar2;
    piVar3[0x1b] = (int)piVar2;
    piVar3[0x1c] = (unsigned int)temp_v26 & 0x3fffffff;
  }
  if (temp_v22 >= temp_v23) {
    temp_v3 = 0;
  }
  else {
    temp_v1 = (int)(((long long)((int)temp_v23 - (int)temp_v22) * -0x6db6db6d +
                  ((unsigned long long)(unsigned int)((int)temp_v23 - (int)temp_v22) << 0x20)) >> 0x20);
    temp_v3 = ((temp_v1 >> 4) - (temp_v1 >> 0x1f)) & 1;
  }
  temp_v7 = (int)temp_v23 - (int)temp_v22;
  temp_v9 = (int)(((long long)(int)temp_v7 * -0x6db6db6d + ((unsigned long long)temp_v7 << 0x20)) >> 0x20);
  temp_v1 = temp_v3 + 1;
  if (temp_v1 < ((temp_v9 >> 4) - (temp_v9 >> 0x1f)) + 1) {
    do {
      temp_v9 = (int)(((long long)(int)temp_v7 * -0x6db6db6d + ((unsigned long long)temp_v7 << 0x20)) >> 0x20);
      temp_v1 = temp_v1 + 2;
    } while (temp_v1 < ((temp_v9 >> 4) - (temp_v9 >> 0x1f)) + 1);
  }
  temp_v23 = temp_v22;
  piVar2 = (int *)0x0;
  if (temp_v21 != (int *)0x0) {
    piVar2 = temp_v22;
  }
  if (temp_v21 != (int *)0x0 && piVar2 != (int *)0x0) {
    (**(romwright_code **)(*temp_v21 + 0xc))();
  }
  temp_v3 = puVar14[0x10];
  if (temp_v3 != 0) {
    puVar9 = (unsigned int *)(temp_v3 + (int)(puVar14 + 0x10));
  }
  else {
    puVar9 = (unsigned int *)0x0;
  }
  puVar10 = puVar9 + puVar14[0xf];
  while (puVar9 != puVar10) {
    puVar12 = puVar9 + 1;
    temp_v26 = (unsigned int *******)*puVar9;
    if (temp_v26 != (unsigned int *******)0x0) {
      temp_v26 = (unsigned int *******)((int)temp_v26 + (int)puVar9);
    }
    if (*(char *)(temp_v26 + 1) != '\0') {
      temp_v18 = ((unsigned int)puVar10 & 0xffffff00) | 1;
      pppppppuVar11 = (unsigned int *******)&temp_v26;
      nw_gfx_ParticleUtil_DuplicateResParticleUpdater(pppppppuVar11,temp_v31);
      temp_v28 = pppppppuVar11;
      if (pppppppuVar11 == (unsigned int *******)0x0) {
        temp_v27 = 0;
      }
    }
    else {
      temp_v18 = (unsigned int)puVar10 & 0xffffff00;
      temp_v28 = temp_v26;
    }
    temp_v3 = 0;
    ppppppuVar23 = *temp_v26;
    temp_v29 = 0;
    temp_v11 = ppppppuVar23 == (unsigned int ******)0x800002 || ppppppuVar23 == (unsigned int ******)0x800001;
    if (ppppppuVar23 != (unsigned int ******)0x800002 && ppppppuVar23 != (unsigned int ******)0x800001) {
      temp_v11 = ppppppuVar23 == (unsigned int ******)0x800004;
    }
    if (temp_v11) {
      if (temp_v26[3] != (unsigned int ******)0x0) {
        temp_v1 = (int)temp_v26 + (int)(temp_v26[3] + 3);
      }
      else {
        temp_v1 = 0;
      }
      if ((temp_v1 != 0) &&
         (temp_v9 = *(int *)(temp_v1 + 0x20), temp_v9 != 0 && temp_v1 + 0x20 + temp_v9 != 0)) {
        temp_v3 = 1;
      }
    }
    if ((ppppppuVar23 == (unsigned int ******)0x80000) && (((unsigned int)temp_v26[4] & 0xff) == 1)) {
      *(unsigned char *)(piVar3 + 0x23) = 1;
    }
    piVar2 = piVar3 + 0x19;
    temp_v7 = piVar3[0x1c] & 0x3fffffff;
    temp_v1 = (int)(((long long)(piVar3[0x1b] - piVar3[0x1a]) * -0x6db6db6d +
                  ((unsigned long long)(unsigned int)(piVar3[0x1b] - piVar3[0x1a]) << 0x20)) >> 0x20);
    puVar9 = puVar12;
    if ((temp_v1 >> 4) - (temp_v1 >> 0x1f) < (int)temp_v7) goto LAB_001c8bfc;
    if (temp_v7 == 0) {
      temp_v20 = (int *)0x1;
    }
    else {
      temp_v20 = (int *)(temp_v7 << 1);
    }
    if (temp_v20 <= (int *)(piVar3[0x1c] & 0x3fffffffU)) goto LAB_001c8bfc;
    if (((*piVar2 != 0) && ((piVar3[0x1c] & 0xc0000000U) == 0x40000000)) &&
       (puVar6 = (unsigned int *)
                 (**(romwright_code **)(*(int *)*piVar2 + 8))((int *)*piVar2,(int)temp_v20 * 0x1c,0x20),
       puVar6 != (unsigned int *)0x0)) {
      puVar15 = (unsigned int *)piVar3[0x1b];
      puVar19 = (unsigned int *)piVar3[0x1a];
      temp_v25 = (unsigned int *******)0x0;
      puVar7 = puVar6;
      if (puVar19 != puVar15) {
        do {
          if (puVar7 != (unsigned int *)0x0) {
            temp_v12 = puVar19[1];
            temp_v13 = puVar19[2];
            temp_v14 = puVar19[3];
            temp_v15 = puVar19[4];
            temp_v16 = puVar19[5];
            temp_v17 = puVar19[6];
            *puVar7 = *puVar19;
            puVar7[1] = temp_v12;
            puVar7[2] = temp_v13;
            puVar7[3] = temp_v14;
            puVar7[4] = temp_v15;
            puVar7[5] = temp_v16;
            puVar7[6] = temp_v17;
          }
          puVar19 = puVar19 + 7;
          puVar7 = puVar7 + 7;
        } while (puVar19 != puVar15);
        temp_v1 = (int)(((long long)(piVar3[0x1b] - piVar3[0x1a]) * -0x6db6db6d +
                      ((unsigned long long)(unsigned int)(piVar3[0x1b] - piVar3[0x1a]) << 0x20)) >> 0x20);
        temp_v25 = (unsigned int *******)((temp_v1 >> 4) - (temp_v1 >> 0x1f));
      }
      temp_v7 = piVar3[0x1a];
      if (temp_v7 != 0) {
        temp_v5 = piVar3[0x1b];
        if (temp_v7 >= temp_v5) {
          temp_v4 = 0;
        }
        else {
          temp_v1 = (int)(((long long)(int)(temp_v5 - temp_v7) * -0x6db6db6d +
                        ((unsigned long long)(temp_v5 - temp_v7) << 0x20)) >> 0x20);
          temp_v4 = ((temp_v1 >> 4) - (temp_v1 >> 0x1f)) & 1;
        }
        temp_v5 = temp_v5 - temp_v7;
        temp_v9 = (int)(((long long)(int)temp_v5 * -0x6db6db6d + ((unsigned long long)temp_v5 << 0x20)) >> 0x20);
        temp_v1 = temp_v4 + 1;
        if (temp_v1 < ((temp_v9 >> 4) - (temp_v9 >> 0x1f)) + 1) {
          do {
            temp_v9 = (int)(((long long)(int)temp_v5 * -0x6db6db6d + ((unsigned long long)temp_v5 << 0x20)) >>
                          0x20);
            temp_v1 = temp_v1 + 2;
          } while (temp_v1 < ((temp_v9 >> 4) - (temp_v9 >> 0x1f)) + 1);
        }
        piVar3[0x1b] = temp_v7;
        (**(romwright_code **)(*(int *)*piVar2 + 0xc))((int *)*piVar2,temp_v7);
      }
      piVar3[0x1a] = (int)puVar6;
      piVar3[0x1b] = (int)(puVar6 + (int)temp_v25 * 7);
      piVar3[0x1c] = (piVar3[0x1c] & 0xc0000000U) | (unsigned int)temp_v20;
LAB_001c8bfc:
      puVar12 = (unsigned int *)piVar3[0x1b];
      if (puVar12 != (unsigned int *)0x0) {
        *puVar12 = temp_v18;
        puVar12[1] = (unsigned int)temp_v28;
        puVar12[2] = temp_v29;
        puVar12[3] = (unsigned int)ppppppuVar23;
        puVar12[4] = (unsigned int)in_d8;
        puVar12[5] = (unsigned int)((unsigned long long)in_d8 >> 0x20);
        puVar12[6] = temp_v3;
      }
      piVar3[0x1b] = piVar3[0x1b] + 0x1c;
    }
  }
  if (temp_v27 != 0) {
    temp_v3 = puVar14[0xc];
    if (temp_v3 != 0) {
      temp_v3 = temp_v3 + (int)(puVar14 + 0xc);
    }
    piVar2 = piVar3;
    FUN_001cf5a4(piVar3,temp_v3,temp_v31,param_5,param_6);
    if (piVar2 != (int *)0x0) {
      FUN_001ce8e4(param_6,piVar3);
      temp_v9 = piVar3[0x17];
      temp_v1 = piVar3[0x16];
      while (temp_v1 != temp_v9) {
        temp_v2 = temp_v1 + 0x18;
        temp_v6 = *(int *)(*(int *)(temp_v1 + 4) + 8);
        if (temp_v6 < 0) {
          *(unsigned int *)(temp_v1 + 0x10) = 0;
          *(unsigned int *)(temp_v1 + 0x14) = 0;
          temp_v1 = temp_v2;
        }
        else {
          temp_v0 = *(char *)((int)piVar2 + temp_v6 + 0xd1);
          if ((char)piVar2[0x34] != '\0') {
            temp_v8 = 0;
            if (temp_v0 != '\0') {
              temp_v8 = piVar2[temp_v6 * 2 + 0x3a];
            }
            *(int *)(temp_v1 + 0x14) = temp_v8;
            if (*(char *)((int)piVar2 + temp_v6 + 0xd1) == '\0') {
              temp_v6 = 0;
            }
            else {
              temp_v6 = piVar2[temp_v6 * 2 + ((char)piVar2[0x34] == '\0') + 0x39];
            }
            *(int *)(temp_v1 + 0x10) = temp_v6;
            temp_v1 = temp_v2;
          }
          else {
            temp_v8 = 0;
            if (temp_v0 != '\0') {
              temp_v8 = piVar2[temp_v6 * 2 + 0x39];
            }
            *(int *)(temp_v1 + 0x10) = temp_v8;
            if (*(char *)((int)piVar2 + temp_v6 + 0xd1) == '\0') {
              temp_v6 = 0;
            }
            else {
              temp_v6 = piVar2[temp_v6 * 2 + ((char)piVar2[0x34] == '\0') + 0x39];
            }
            *(int *)(temp_v1 + 0x14) = temp_v6;
            temp_v1 = temp_v2;
          }
        }
      }
      temp_v9 = piVar3[0x1b];
      temp_v1 = piVar3[0x1a];
      while (temp_v1 != temp_v9) {
        temp_v2 = temp_v1 + 0x1c;
        temp_v6 = *(int *)(*(int *)(temp_v1 + 4) + 8);
        if (temp_v6 < 0) {
          *(unsigned int *)(temp_v1 + 0x10) = 0;
          *(unsigned int *)(temp_v1 + 0x14) = 0;
          temp_v1 = temp_v2;
        }
        else {
          temp_v0 = *(char *)((int)piVar2 + temp_v6 + 0xd1);
          if ((char)piVar2[0x34] != '\0') {
            temp_v8 = 0;
            if (temp_v0 != '\0') {
              temp_v8 = piVar2[temp_v6 * 2 + 0x3a];
            }
            *(int *)(temp_v1 + 0x14) = temp_v8;
            if (*(char *)((int)piVar2 + temp_v6 + 0xd1) == '\0') {
              temp_v6 = 0;
            }
            else {
              temp_v6 = piVar2[temp_v6 * 2 + ((char)piVar2[0x34] == '\0') + 0x39];
            }
            *(int *)(temp_v1 + 0x10) = temp_v6;
            temp_v1 = temp_v2;
          }
          else {
            temp_v8 = 0;
            if (temp_v0 != '\0') {
              temp_v8 = piVar2[temp_v6 * 2 + 0x39];
            }
            *(int *)(temp_v1 + 0x10) = temp_v8;
            if (*(char *)((int)piVar2 + temp_v6 + 0xd1) == '\0') {
              temp_v6 = 0;
            }
            else {
              temp_v6 = piVar2[temp_v6 * 2 + ((char)piVar2[0x34] == '\0') + 0x39];
            }
            *(int *)(temp_v1 + 0x14) = temp_v6;
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
