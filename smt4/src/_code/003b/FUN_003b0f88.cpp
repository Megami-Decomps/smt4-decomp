/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b0f88` (_code @ 0x3b0f88, 0x11bc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int poolNodeUnlinkAndDestroy(...);
int FUN_0022c564(...);
int FUN_00396f3c(...);
int treeRebalanceAfterErase(...);
int FUN_003af304(...);
int FUN_003aff9c(...);
int FUN_003b0190(...);
int _ZN4__rw9__rb_treeIjSt4pairIKjN6MoLive12ObjectHandleEENS_11__select1stIS5_jEESt4lessIjENS3_12StlAllocatorIS5_EEE6insertERKS5_(...);

typedef int romwright_code(...);
/* stack frame of param_4: 31 slot(s), 124 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
} param_4_stack;

extern unsigned char LAB_003b156c; /* 0x3b156c */

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
extern unsigned int containerGrowCapacity(unsigned int, unsigned int);
/* Supplied declaration required: poolNodeUnlinkAndDestroy. */
/* Supplied declaration required: FUN_0022c564. */
/* Supplied declaration required: FUN_00396f3c. */
/* Supplied declaration required: treeRebalanceAfterErase. */
extern romwright_code *****FUN_003970f8(romwright_code *******);
extern romwright_code *****FUN_0039717c(romwright_code *******);
/* Supplied declaration required: FUN_003af304. */
/* Supplied declaration required: FUN_003aff9c. */
/* Supplied declaration required: FUN_003b0190. */
/* Supplied declaration required: _ZN4__rw9__rb_treeIjSt4pairIKjN6MoLive12ObjectHandleEENS_11__select1stIS5_jEESt4lessIjENS3_12StlAllocatorIS5_EEE6insertERKS5_. */


/* WARNING: Type propagation algorithm not settling */

unsigned int FUN_003b0f88(unsigned int *param_1,int param_2,unsigned int *param_3,romwright_code *param_4)

{
/* irregular: 1 goto(s); 9 native warning(s); review required */
  romwright_code *******pppppppcVar1;
  int temp_v0;
  romwright_code ******ppppppcVar3;
  romwright_code ******ppppppcVar4;
  romwright_code ******ppppppcVar5;
  romwright_code *******pppppppcVar6;
  int temp_v1;
  int *piVar8;
  romwright_code *******pppppppcVar9;
  unsigned int *puVar10;
  unsigned int *puVar11;
  unsigned int *puVar12;
  romwright_code ******ppppppcVar13;
  unsigned int temp_v2;
  romwright_code ******ppppppcVar15;
  int temp_v3;
  unsigned int temp_v4;
  romwright_code *****pppppcVar18;
  unsigned int *puVar19;
  romwright_code *****pppppcVar20;
  int *piVar21;
  unsigned int *puVar22;
  romwright_code *****pppppcVar23;
  unsigned int temp_v5;
  unsigned char temp_v6;
  romwright_code *****temp_v7;
  romwright_code *****temp_v8;
  romwright_code ******temp_v9;
  romwright_code ******temp_v10;
  unsigned char temp_v11 [4];
  romwright_code ******temp_v12;
  romwright_code *******temp_v13;
  romwright_code *******temp_v14;
  romwright_code *******temp_v15;
  romwright_code *******temp_v16;
  romwright_code *******temp_v17;
  romwright_code *******temp_v18;
  romwright_code *******temp_v19;
  romwright_code *******temp_v20;
  romwright_code *******temp_v21;
  romwright_code *******temp_v22;
  romwright_code *******temp_v23;
  romwright_code *******temp_v24;
  romwright_code *******temp_v25;
  romwright_code *******temp_v26;
  int temp_v27;
  int temp_v28;
  unsigned int *temp_v29;
  unsigned int *temp_v30;
  unsigned char *temp_v31;
  unsigned char *temp_v32;
  romwright_code ****temp_v33;
  int temp_v34 [6];
  unsigned int *puStack_34;
  int iStack_30;
  unsigned int *temp_v35;
  romwright_code *temp_v36;
  
  temp_v0 = *param_3 + param_2;
  puStack_34 = param_1;
  iStack_30 = param_2;
  temp_v35 = param_3;
  temp_v36 = param_4;
  FUN_003b0190(temp_v0,&temp_v12,param_3,param_4);
  temp_v29 = param_1 + 0x51e;
  temp_v30 = param_1 + 0x51f;
  temp_v31 = (unsigned char *)((int)param_1 + 0x1487);
  temp_v32 = (unsigned char *)((int)param_1 + 0x1489);
  if (temp_v0 != 0) {
    temp_v0 = *temp_v35 + param_2;
    FUN_003b0190(temp_v0,&temp_v33,temp_v35,temp_v36);
    if (temp_v0 != 0) {
      if (temp_v12 == (romwright_code ******)0x0) {
        *temp_v35 = (unsigned int)((int)temp_v33 + *temp_v35);
        return 0x100;
      }
      piVar21 = (int *)(param_1 + 0x51b);
      temp_v34[0] = *piVar21;
      temp_v19 = (romwright_code *******)(param_1 + 0x511);
      ppppppcVar5 = (romwright_code ******)(param_1 + 0x513);
      ppppppcVar15 = (romwright_code ******)param_1[0x512];
      pppppppcVar9 = (romwright_code *******)ppppppcVar5;
      while (ppppppcVar3 = ppppppcVar15, ppppppcVar3 != ppppppcVar5) {
        if (ppppppcVar3[4] < (romwright_code *****)temp_v12) {
          ppppppcVar15 = (romwright_code ******)ppppppcVar3[1];
        }
        else {
          ppppppcVar15 = (romwright_code ******)*ppppppcVar3;
          pppppppcVar9 = (romwright_code *******)ppppppcVar3;
        }
      }
      temp_v6 = ppppppcVar5 <= (romwright_code ******)pppppppcVar9;
      if (pppppppcVar9 != (romwright_code *******)ppppppcVar5) {
        ppppppcVar3 = pppppppcVar9[4];
        temp_v6 = temp_v12 <= ppppppcVar3;
      }
      if (temp_v6 && (pppppppcVar9 != (romwright_code *******)ppppppcVar5 && ppppppcVar3 != temp_v12)) {
        pppppppcVar9 = (romwright_code *******)ppppppcVar5;
      }
      if (pppppppcVar9 == (romwright_code *******)(param_1 + 0x513)) {
        temp_v16 = (romwright_code *******)FUN_003aff9c(temp_v34,temp_v12,0);
        pppppppcVar6 = temp_v26;
        pppppppcVar9 = temp_v19;
        if (temp_v16 == (romwright_code *******)0x0) {
          return 0x44;
        }
        temp_v15 = (romwright_code *******)*piVar21;
        temp_v20 = (romwright_code *******)temp_v12;
        temp_v17 = (romwright_code *******)&temp_v21;
        temp_v23 = (romwright_code *******)&temp_v15;
        temp_v26 = (romwright_code *******)((unsigned int)temp_v26 & 0xffffff00);
        ppppppcVar13 = (romwright_code ******)(temp_v19 + 2);
        temp_v10 = (romwright_code ******)(temp_v19 + 1);
        ppppppcVar3 = temp_v19[1];
        ppppppcVar15 = ppppppcVar13;
        ppppppcVar5 = ppppppcVar13;
        while (ppppppcVar3 != ppppppcVar13) {
          ppppppcVar15 = (romwright_code ******)*temp_v10;
          ppppppcVar4 = ppppppcVar15;
          temp_v10 = ppppppcVar15;
          if (ppppppcVar15[4] < (romwright_code *****)temp_v12) {
            ppppppcVar4 = ppppppcVar5;
            temp_v10 = ppppppcVar15 + 1;
          }
          ppppppcVar5 = ppppppcVar4;
          ppppppcVar3 = (romwright_code ******)*temp_v10;
        }
        temp_v18 = temp_v17;
        temp_v21 = temp_v15;
        temp_v22 = temp_v16;
        temp_v24 = temp_v23;
        if ((ppppppcVar5 != ppppppcVar13) && (temp_v12 >= (romwright_code ******)ppppppcVar5[4])) {
          temp_v26 = (romwright_code *******)((unsigned int)pppppppcVar6 & 0xffffff00);
        }
        else {
          ppppppcVar5 = (romwright_code ******)(*(romwright_code *)**temp_v19[9])(temp_v19[9],0x24);
          if (ppppppcVar5 != (romwright_code ******)0x0) {
            if (ppppppcVar5 + 4 != (romwright_code ******)0x0) {
              pppppppcVar6 = (romwright_code *******)(ppppppcVar5 + 5);
              ppppppcVar5[4] = (romwright_code *****)temp_v20;
              *pppppppcVar6 = (romwright_code ******)temp_v21;
              ppppppcVar5[6] = (romwright_code *****)temp_v22;
              ppppppcVar5[8] = (romwright_code *****)temp_v24;
              temp_v24[2] = (romwright_code ******)pppppppcVar6;
              ppppppcVar5[7] = (romwright_code *****)&temp_v21;
              temp_v24 = pppppppcVar6;
            }
            ppppppcVar5[2] = (romwright_code *****)ppppppcVar15;
          }
          else {
            (*(romwright_code *)(*pppppppcVar9[9])[2])(pppppppcVar9[9],&LAB_003b156c,0x24);
          }
          if (ppppppcVar5 == (romwright_code ******)0x0) {
            ppppppcVar5 = (romwright_code ******)(pppppppcVar9 + 2);
          }
          else {
            *temp_v10 = (romwright_code *****)ppppppcVar5;
            FUN_00396f3c(pppppppcVar9,ppppppcVar5);
            temp_v26 = (romwright_code *******)romwright_piece_3_1((((unsigned int)(temp_v26) >> 8) & 0xffffffU),1);
          }
        }
        temp_v25 = (romwright_code *******)ppppppcVar5;
        if (temp_v23 == (romwright_code *******)0x0 || (romwright_code ********)temp_v23 == &temp_v21) {
          if (temp_v22 != (romwright_code *******)0x0) {
            (*(romwright_code *)**temp_v22)();
            (*(romwright_code *)(*temp_v21)[1])(temp_v21,temp_v22);
          }
        }
        else {
          temp_v23[3] = (romwright_code ******)temp_v24;
          temp_v24[2] = (romwright_code ******)temp_v23;
          temp_v23 = (romwright_code *******)0x0;
          temp_v24 = (romwright_code *******)0x0;
        }
        temp_v22 = (romwright_code *******)0x0;
        if (temp_v17 == (romwright_code *******)0x0 || (romwright_code ********)temp_v17 == &temp_v15) {
          if (temp_v16 != (romwright_code *******)0x0) {
            (*(romwright_code *)**temp_v16)();
            (*(romwright_code *)(*temp_v15)[1])(temp_v15,temp_v16);
          }
        }
        else {
          temp_v17[3] = (romwright_code ******)temp_v18;
          temp_v18[2] = (romwright_code ******)temp_v17;
          temp_v17 = (romwright_code *******)0x0;
        }
        temp_v16 = (romwright_code *******)0x0;
        pppppppcVar9 = temp_v25;
        if (temp_v25 == temp_v19 + 2) {
          return 0x44;
        }
      }
      pppppcVar20 = (romwright_code *****)pppppppcVar9[6];
      if ((pppppcVar20[2] != temp_v33) ||
         (temp_v18 = pppppppcVar9,
         temp_v0 = (*(romwright_code *)(*pppppcVar20)[3])(pppppcVar20,*temp_v35 + param_2), temp_v0 == 0)) {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        *temp_v29 = 0x40;
        *temp_v30 = 0x10000;
        *temp_v31 = 0;
        *temp_v32 = 0;
        return 0x45;
      }
      temp_v0 = (*(romwright_code *)(*pppppcVar20)[4])(pppppcVar20);
      if (temp_v0 != 0) {
        temp_v0 = param_1[0x50a];
        temp_v1 = *(int *)(param_1[0x50a] + 4);
        while (temp_v1 != 0) {
          if (*(romwright_code *****)(temp_v1 + 0x10) >= pppppcVar20[5]) {
            temp_v0 = temp_v1;
            temp_v1 = *(int *)(temp_v1 + 8);
          }
          else {
            temp_v1 = *(int *)(temp_v1 + 0xc);
          }
        }
        temp_v28 = param_1[0x50a];
        temp_v1 = *(int *)(param_1[0x50a] + 4);
        while (temp_v1 != 0) {
          if (pppppcVar20[5] < *(romwright_code *****)(temp_v1 + 0x10)) {
            temp_v28 = temp_v1;
            temp_v1 = *(int *)(temp_v1 + 8);
          }
          else {
            temp_v1 = *(int *)(temp_v1 + 0xc);
          }
        }
        temp_v1 = temp_v0;
        temp_v27 = temp_v0;
        if (temp_v0 == param_1[0x50a]) {
          piVar8 = (int *)(*(romwright_code *)**(unsigned int **)*piVar21)((unsigned int *)*piVar21,0x74);
          if (piVar8 == (int *)0x0) {
            return 0x44;
          }
          temp_v0 = *piVar21;
          *piVar8 = temp_v0;
          piVar8[2] = 0;
          piVar8[1] = temp_v0;
          piVar8[3] = 0;
          piVar8[4] = 0;
          piVar8[5] = 0;
          piVar8[6] = 0;
          piVar8[7] = 0;
          piVar8[8] = temp_v0;
          piVar8[9] = 0;
          piVar8[10] = 0;
          piVar8[0xb] = 0;
          piVar8[0xc] = temp_v0;
          piVar8[0xd] = 0;
          piVar8[0xe] = 0;
          piVar8[0xf] = 0;
          piVar8[0x10] = 0;
          piVar8[0x11] = 0;
          piVar8[0x12] = 0;
          piVar8[0x16] = (int)(piVar8 + 0x13);
          piVar8[0x14] = 0;
          piVar8[0x13] = temp_v0;
          piVar8[0x15] = (int)(piVar8 + 0x13);
          piVar8[0x18] = 0;
          piVar8[0x17] = temp_v0;
          piVar8[0x19] = 0;
          piVar8[0x1a] = 0;
          piVar8[0x1b] = 0;
          *(unsigned char *)(piVar8 + 0x1c) = 1;
          FUN_003af304(piVar8,pppppcVar20[5],param_1 + 4);
          temp_v14 = (romwright_code *******)FUN_003aff9c(temp_v34,temp_v12,piVar8);
          if (temp_v14 == (romwright_code *******)0x0) {
            return 0x44;
          }
          (*(romwright_code *)(*temp_v14)[6])(temp_v14,pppppcVar20);
          temp_v0 = (*(romwright_code *)(*temp_v14)[4])(temp_v14);
          if (temp_v0 != 0) {
            temp_v14[5] = (romwright_code ******)pppppcVar20[5];
          }
          temp_v21 = (romwright_code *******)&temp_v13;
          temp_v17 = (romwright_code *******)pppppcVar20[5];
          temp_v13 = (romwright_code *******)*piVar21;
          temp_v16 = (romwright_code *******)&temp_v23;
          temp_v20 = (romwright_code *******)&temp_v23;
          temp_v15 = (romwright_code *******)&temp_v18;
          temp_v18 = temp_v13;
          temp_v19 = temp_v14;
          temp_v22 = temp_v17;
          temp_v23 = temp_v13;
          temp_v24 = temp_v14;
          temp_v25 = temp_v21;
          temp_v26 = temp_v15;
          _ZN4__rw9__rb_treeIjSt4pairIKjN6MoLive12ObjectHandleEENS_11__select1stIS5_jEESt4lessIjENS3_12StlAllocatorIS5_EEE6insertERKS5_(temp_v11,param_1 + 0x505);
          poolNodeUnlinkAndDestroy(&temp_v18);
          poolNodeUnlinkAndDestroy(&temp_v23);
          pppppppcVar9 = (romwright_code *******)&temp_v13;
        }
        else {
          while (temp_v1 != temp_v28) {
            if (*(char *)(*(int *)(*(int *)(temp_v1 + 0x18) + 0x10) + 0x70) != '\0') {
              if ((romwright_code *)param_1[0x520] != (romwright_code *)0x0) {
                (*(romwright_code *)param_1[0x520])
                          ("Found stream index %d but this stream is already present (duplicate?)...\n"
                           ,pppppcVar20[5]);
              }
              return 0x53;
            }
            temp_v3 = *(int *)(temp_v1 + 0xc);
            if (*(int *)(temp_v1 + 0xc) != 0) {
              do {
                temp_v1 = temp_v3;
                temp_v3 = *(int *)(temp_v1 + 8);
              } while (*(int *)(temp_v1 + 8) != 0);
            }
            else {
              temp_v3 = *(int *)(temp_v1 + 4);
              if (temp_v1 == *(int *)(temp_v3 + 0xc)) {
                do {
                  temp_v1 = temp_v3;
                  temp_v3 = *(int *)(temp_v1 + 4);
                } while (temp_v1 == *(int *)(temp_v3 + 0xc));
              }
              if (*(int *)(temp_v1 + 0xc) != temp_v3) {
                temp_v1 = temp_v3;
              }
            }
          }
          if (temp_v0 != temp_v28) {
            do {
              piVar8 = *(int **)(temp_v0 + 0x18);
              if (((romwright_code ****)piVar8[1] == pppppcVar20[1]) &&
                 (temp_v1 = (**(romwright_code **)(*piVar8 + 0x14))(piVar8,pppppcVar20), temp_v1 != 0)) {
                *(unsigned char *)(*(int *)(*(int *)(temp_v0 + 0x18) + 0x10) + 0x70) = 1;
                goto LAB_003b20d0;
              }
              temp_v1 = *(int *)(temp_v0 + 0xc);
              if (*(int *)(temp_v0 + 0xc) != 0) {
                do {
                  temp_v0 = temp_v1;
                  temp_v1 = *(int *)(temp_v0 + 8);
                } while (*(int *)(temp_v0 + 8) != 0);
              }
              else {
                temp_v1 = *(int *)(temp_v0 + 4);
                if (temp_v0 == *(int *)(temp_v1 + 0xc)) {
                  do {
                    temp_v0 = temp_v1;
                    temp_v1 = *(int *)(temp_v0 + 4);
                  } while (temp_v0 == *(int *)(temp_v1 + 0xc));
                }
                if (*(int *)(temp_v0 + 0xc) != temp_v1) {
                  temp_v0 = temp_v1;
                }
              }
            } while (temp_v0 != temp_v28);
          }
          piVar8 = (int *)(*(romwright_code *)**(unsigned int **)*piVar21)((unsigned int *)*piVar21,0x74);
          if (piVar8 == (int *)0x0) {
            return 0x44;
          }
          temp_v0 = *piVar21;
          *piVar8 = temp_v0;
          piVar8[2] = 0;
          piVar8[1] = temp_v0;
          piVar8[3] = 0;
          piVar8[4] = 0;
          piVar8[5] = 0;
          piVar8[6] = 0;
          piVar8[7] = 0;
          piVar8[8] = temp_v0;
          piVar8[9] = 0;
          piVar8[10] = 0;
          piVar8[0xb] = 0;
          piVar8[0xc] = temp_v0;
          piVar8[0xd] = 0;
          piVar8[0xe] = 0;
          piVar8[0xf] = 0;
          piVar8[0x10] = 0;
          piVar8[0x11] = 0;
          piVar8[0x12] = 0;
          piVar8[0x16] = (int)(piVar8 + 0x13);
          piVar8[0x14] = 0;
          piVar8[0x13] = temp_v0;
          piVar8[0x15] = (int)(piVar8 + 0x13);
          piVar8[0x18] = 0;
          piVar8[0x17] = temp_v0;
          piVar8[0x19] = 0;
          piVar8[0x1a] = 0;
          piVar8[0x1b] = 0;
          *(unsigned char *)(piVar8 + 0x1c) = 1;
          FUN_003af304(piVar8,pppppcVar20[5],param_1 + 4);
          pppppppcVar9 = (romwright_code *******)FUN_003aff9c(temp_v34,temp_v12,piVar8);
          if (pppppppcVar9 == (romwright_code *******)0x0) {
            return 0x44;
          }
          (*(romwright_code *)(*pppppppcVar9)[6])(pppppppcVar9,pppppcVar20);
          temp_v0 = (*(romwright_code *)(*pppppppcVar9)[4])(pppppppcVar9);
          if (temp_v0 != 0) {
            pppppppcVar9[5] = (romwright_code ******)pppppcVar20[5];
          }
          temp_v17 = (romwright_code *******)&temp_v23;
          temp_v13 = (romwright_code *******)pppppcVar20[5];
          temp_v14 = (romwright_code *******)*piVar21;
          temp_v26 = (romwright_code *******)&temp_v19;
          temp_v22 = (romwright_code *******)&temp_v14;
          temp_v16 = (romwright_code *******)&temp_v19;
          temp_v15 = pppppppcVar9;
          temp_v18 = temp_v13;
          temp_v19 = temp_v14;
          temp_v20 = pppppppcVar9;
          temp_v21 = temp_v17;
          temp_v23 = temp_v14;
          temp_v24 = pppppppcVar9;
          temp_v25 = temp_v22;
          _ZN4__rw9__rb_treeIjSt4pairIKjN6MoLive12ObjectHandleEENS_11__select1stIS5_jEESt4lessIjENS3_12StlAllocatorIS5_EEE6insertERKS5_(temp_v11,param_1 + 0x505);
          poolNodeUnlinkAndDestroy(&temp_v14);
          poolNodeUnlinkAndDestroy(&temp_v19);
          pppppppcVar9 = (romwright_code *******)&temp_v23;
        }
        poolNodeUnlinkAndDestroy(pppppppcVar9);
      }
      else {
        temp_v17 = pppppppcVar9 + 5;
        temp_v1 = param_1[0x510];
        temp_v0 = param_1[0x50e];
        temp_v2 = temp_v1 + 1;
        temp_v3 = temp_v0 + temp_v1 * 0x10;
        ppppppcVar15 = (romwright_code ******)((temp_v3 - temp_v0) >> 4);
        temp_v21 = (romwright_code *******)ppppppcVar15;
        if ((unsigned int)param_1[0x50f] >= temp_v2) {
          temp_v5 = (unsigned int)(temp_v1 - (int)ppppppcVar15 != 0);
          temp_v1 = (temp_v1 - (int)ppppppcVar15) - temp_v5;
          if (temp_v5 != 0) {
            puVar10 = (unsigned int *)(temp_v0 + (temp_v2 - temp_v5) * 0x10);
            puVar19 = (unsigned int *)(temp_v3 + temp_v5 * -0x10);
            do {
              if (puVar10 != (unsigned int *)0x0) {
                *puVar10 = *puVar19;
                puVar10[1] = puVar19[1];
                temp_v0 = puVar19[3];
                puVar10[3] = temp_v0;
                *(unsigned int **)(temp_v0 + 8) = puVar10;
                puVar10[2] = (unsigned int)puVar19;
                puVar19[3] = (unsigned int)puVar10;
              }
              temp_v5 = temp_v5 - 1;
              puVar10 = puVar10 + 4;
              puVar19 = puVar19 + 4;
            } while (temp_v5 != 0);
          }
          temp_v22 = (romwright_code *******)((int)ppppppcVar15 + 1);
          if (temp_v1 != 0) {
            if (ppppppcVar15 >= (romwright_code ******)temp_v22) {
              puVar10 = (unsigned int *)(param_1[0x50e] + (int)temp_v22 * 0x10);
              puVar19 = (unsigned int *)(param_1[0x50e] + (int)ppppppcVar15 * 0x10);
              do {
                if (puVar10 != puVar19) {
                  puVar11 = (unsigned int *)puVar10[2];
                  if (puVar11 == (unsigned int *)0x0 || puVar11 == puVar10) {
                    if ((unsigned int *)puVar10[1] != (unsigned int *)0x0) {
                      (*(romwright_code *)**(unsigned int **)puVar10[1])();
                      (**(romwright_code **)(*(int *)*puVar10 + 4))((int *)*puVar10,puVar10[1]);
                    }
                  }
                  else {
                    puVar11[3] = puVar10[3];
                    *(unsigned int *)(puVar10[3] + 8) = puVar10[2];
                    puVar10[2] = 0;
                    puVar10[3] = 0;
                  }
                  puVar10[1] = 0;
                  puVar10[1] = puVar19[1];
                  temp_v0 = puVar19[3];
                  puVar10[3] = temp_v0;
                  *(unsigned int **)(temp_v0 + 8) = puVar10;
                  puVar10[2] = (unsigned int)puVar19;
                  puVar19[3] = (unsigned int)puVar10;
                }
                temp_v1 = temp_v1 - 1;
                puVar10 = puVar10 + 4;
                puVar19 = puVar19 + 4;
              } while (temp_v1 != 0);
            }
            else {
              puVar10 = (unsigned int *)((int)temp_v22 * 0x10 + temp_v1 * 0x10 + param_1[0x50e]);
              puVar19 = (unsigned int *)((int)ppppppcVar15 * 0x10 + temp_v1 * 0x10 + param_1[0x50e]);
              do {
                puVar22 = puVar10 + -4;
                puVar11 = puVar19 + -4;
                if (puVar22 != puVar11) {
                  puVar12 = (unsigned int *)puVar10[-2];
                  if (puVar12 == (unsigned int *)0x0 || puVar12 == puVar22) {
                    if ((unsigned int *)puVar10[-3] != (unsigned int *)0x0) {
                      (*(romwright_code *)**(unsigned int **)puVar10[-3])();
                      (**(romwright_code **)(*(int *)*puVar22 + 4))((int *)*puVar22,puVar10[-3]);
                    }
                  }
                  else {
                    puVar12[3] = puVar10[-1];
                    *(unsigned int *)(puVar10[-1] + 8) = puVar10[-2];
                    puVar10[-2] = 0;
                    puVar10[-1] = 0;
                  }
                  puVar10[-3] = 0;
                  puVar10[-3] = puVar19[-3];
                  temp_v0 = puVar19[-1];
                  puVar10[-1] = temp_v0;
                  *(unsigned int **)(temp_v0 + 8) = puVar22;
                  puVar10[-2] = (unsigned int)puVar11;
                  puVar19[-1] = (unsigned int)puVar22;
                }
                temp_v1 = temp_v1 - 1;
                puVar10 = puVar22;
                puVar19 = puVar11;
              } while (temp_v1 != 0);
            }
          }
          pppppppcVar9 = temp_v22;
          if ((romwright_code ******)param_1[0x510] <= (romwright_code ******)temp_v22) {
            pppppppcVar9 = (romwright_code *******)param_1[0x510];
          }
          FUN_0022c564(param_1 + 0x50d,ppppppcVar15);
        }
        else {
          temp_v5 = containerGrowCapacity(param_1[0x50f],temp_v2);
          temp_v14 = (romwright_code *******)param_1[0x50d];
          temp_v15 = (romwright_code *******)0x0;
          temp_v16 = (romwright_code *******)0x0;
          pppppppcVar9 = temp_v15;
          pppppppcVar6 = temp_v16;
          if (temp_v5 != 0) {
            temp_v23 = (romwright_code *******)(temp_v5 << 4);
            pppppppcVar9 = (romwright_code *******)(*(romwright_code *)**temp_v14)(temp_v14,temp_v23);
            pppppppcVar6 = (romwright_code *******)temp_v5;
            if (pppppppcVar9 == (romwright_code *******)0x0) {
              (*(romwright_code *)(*temp_v14)[2])
                        (temp_v14,"MoLive::Allocator: not enough memory to allocate %d bytes !!!\n",
                         temp_v23);
              if (temp_v2 == temp_v5) {
                temp_v15 = (romwright_code *******)0x0;
                (*(romwright_code *)(*temp_v14)[1])(temp_v14,0);
                return 0x44;
              }
              pppppppcVar6 = temp_v16;
              if (temp_v2 != 0) {
                temp_v15 = pppppppcVar9;
                pppppppcVar9 = (romwright_code *******)(*(romwright_code *)**temp_v14)(temp_v14,temp_v2 * 0x10);
                pppppppcVar6 = (romwright_code *******)temp_v2;
                if (pppppppcVar9 == (romwright_code *******)0x0) {
                  (*(romwright_code *)(*temp_v14)[2])
                            (temp_v14,
                             "MoLive::Allocator: not enough memory to allocate %d bytes !!!\n",
                             temp_v2 * 0x10);
                  temp_v15 = (romwright_code *******)0x0;
                  (*(romwright_code *)(*temp_v14)[1])(temp_v14,0);
                  return 0x44;
                }
              }
            }
          }
          temp_v16 = pppppppcVar6;
          temp_v15 = pppppppcVar9;
          pppppcVar20 = (romwright_code *****)param_1[0x50e];
          pppppppcVar9 = temp_v15;
          for (ppppppcVar5 = ppppppcVar15; ppppppcVar5 != (romwright_code ******)0x0;
              ppppppcVar5 = (romwright_code ******)((int)ppppppcVar5 - 1)) {
            if (pppppppcVar9 != (romwright_code *******)0x0) {
              *pppppppcVar9 = (romwright_code ******)*pppppcVar20;
              pppppppcVar9[1] = (romwright_code ******)pppppcVar20[1];
              pppppcVar23 = (romwright_code *****)pppppcVar20[3];
              pppppppcVar9[3] = (romwright_code ******)pppppcVar23;
              pppppcVar23[2] = (romwright_code ****)pppppppcVar9;
              pppppppcVar9[2] = (romwright_code ******)pppppcVar20;
              pppppcVar20[3] = (romwright_code ****)pppppppcVar9;
            }
            pppppcVar20 = pppppcVar20 + 4;
            pppppppcVar9 = pppppppcVar9 + 4;
          }
          temp_v0 = param_1[0x510] - (int)ppppppcVar15;
          if (temp_v0 != 0) {
            ppppppcVar5 = (romwright_code ******)(temp_v15 + (int)((int)ppppppcVar15 + 1) * 4);
            pppppcVar20 = (romwright_code *****)(param_1[0x50e] + (int)ppppppcVar15 * 0x10);
            do {
              if (ppppppcVar5 != (romwright_code ******)0x0) {
                *ppppppcVar5 = (romwright_code *****)*pppppcVar20;
                ppppppcVar5[1] = (romwright_code *****)pppppcVar20[1];
                pppppcVar23 = (romwright_code *****)pppppcVar20[3];
                ppppppcVar5[3] = pppppcVar23;
                pppppcVar23[2] = (romwright_code ****)ppppppcVar5;
                ppppppcVar5[2] = pppppcVar20;
                pppppcVar20[3] = (romwright_code ****)ppppppcVar5;
              }
              temp_v0 = temp_v0 - 1;
              ppppppcVar5 = ppppppcVar5 + 4;
              pppppcVar20 = pppppcVar20 + 4;
            } while (temp_v0 != 0);
          }
          ppppppcVar15 = (romwright_code ******)param_1[0x50e];
          param_1[0x50e] = (unsigned int)temp_v15;
          temp_v4 = param_1[0x50f];
          param_1[0x50f] = (unsigned int)temp_v16;
          temp_v15 = (romwright_code *******)ppppppcVar15;
          temp_v16 = (romwright_code *******)temp_v4;
          FUN_0022c564(&temp_v14,0,param_1[0x510]);
          pppppppcVar9 = (romwright_code *******)(*temp_v14)[1];
          (*(romwright_code *)pppppppcVar9)(temp_v14,temp_v15);
          temp_v15 = (romwright_code *******)0x0;
          temp_v16 = (romwright_code *******)0x0;
        }
        pppppppcVar1 = temp_v19;
        pppppppcVar6 = temp_v18;
        param_1[0x510] = temp_v2;
        pppppcVar20 = (romwright_code *****)(param_1[0x50e] + (int)temp_v21 * 0x10);
        if (pppppcVar20 != (romwright_code *****)0x0) {
          *pppppcVar20 = (romwright_code ****)*temp_v17;
          pppppcVar20[1] = (romwright_code ****)temp_v17[1];
          pppppppcVar9 = (romwright_code *******)temp_v17[3];
          pppppcVar20[3] = (romwright_code ****)pppppppcVar9;
          pppppppcVar9[2] = (romwright_code ******)pppppcVar20;
          pppppcVar20[2] = (romwright_code ****)temp_v17;
          temp_v17[3] = (romwright_code ******)pppppcVar20;
        }
        pppppcVar20 = (romwright_code *****)FUN_003970f8(temp_v18);
        ppppppcVar15 = *pppppppcVar6;
        ppppppcVar5 = (romwright_code ******)(pppppppcVar1 + 2);
        if (ppppppcVar15 != ppppppcVar5) {
          pppppppcVar9 = (romwright_code *******)pppppppcVar6[1];
        }
        if (!(ppppppcVar15 != ppppppcVar5 && pppppppcVar9 != (romwright_code *******)ppppppcVar5)) {
          if ((romwright_code *******)pppppppcVar1[6] == pppppppcVar6) {
            pppppppcVar1[6] = (romwright_code ******)pppppcVar20;
          }
          if ((romwright_code *******)pppppppcVar1[7] == pppppppcVar6) {
            pppppcVar20 = (romwright_code *****)FUN_0039717c(pppppppcVar6);
            pppppppcVar1[7] = (romwright_code ******)pppppcVar20;
          }
          ppppppcVar3 = pppppppcVar6[2];
          if (ppppppcVar3 == ppppppcVar5) {
            ppppppcVar15 = (romwright_code ******)(pppppppcVar1 + 1);
          }
          else {
            ppppppcVar15 = ppppppcVar3;
            if ((romwright_code *******)*ppppppcVar3 != pppppppcVar6) {
              ppppppcVar15 = ppppppcVar3 + 1;
            }
          }
          ppppppcVar13 = *pppppppcVar6;
          if (ppppppcVar13 == ppppppcVar5) {
            ppppppcVar13 = pppppppcVar6[1];
          }
          *ppppppcVar15 = (romwright_code *****)ppppppcVar13;
          ppppppcVar13[2] = (romwright_code *****)ppppppcVar3;
          ppppppcVar15 = (romwright_code ******)*ppppppcVar15;
          if (ppppppcVar15 == ppppppcVar5) {
            ppppppcVar15 = pppppppcVar6[2];
          }
          (*(romwright_code *)**pppppppcVar1)(pppppppcVar1,pppppppcVar6);
        }
        else {
          ppppppcVar15 = (romwright_code ******)ppppppcVar15[1];
          pppppppcVar9 = pppppppcVar6;
          while (ppppppcVar15 != ppppppcVar5) {
            pppppppcVar9 = (romwright_code *******)(*pppppppcVar9 + 1);
            ppppppcVar15 = (romwright_code ******)(*pppppppcVar9)[1];
          }
          temp_v9 = (romwright_code ******)(pppppppcVar6 + 5);
          pppppcVar20 = (romwright_code *****)pppppppcVar6[4];
          pppppcVar23 = (romwright_code *****)*pppppppcVar9;
          temp_v7 = *temp_v9;
          temp_v8 = (romwright_code *****)pppppppcVar6[6];
          temp_v10 = pppppppcVar6[8];
          temp_v10[2] = (romwright_code *****)&temp_v7;
          pppppppcVar6[8] = &temp_v7;
          ppppppcVar15 = (romwright_code ******)(pppppppcVar6 + 5);
          pppppppcVar6[4] = (romwright_code ******)pppppcVar23[4];
          temp_v17 = (romwright_code *******)(pppppcVar23 + 5);
          if ((romwright_code *******)ppppppcVar15 != temp_v17) {
            ppppppcVar3 = pppppppcVar6[7];
            if (ppppppcVar3 == (romwright_code ******)0x0 || ppppppcVar3 == ppppppcVar15) {
              if (pppppppcVar6[6] != (romwright_code ******)0x0) {
                (*(romwright_code *)**pppppppcVar6[6])();
                (*(romwright_code *)(**ppppppcVar15)[1])(*ppppppcVar15,pppppppcVar6[6]);
              }
            }
            else {
              ppppppcVar3[3] = (romwright_code *****)pppppppcVar6[8];
              pppppppcVar6[8][2] = (romwright_code *****)pppppppcVar6[7];
              pppppppcVar6[7] = (romwright_code ******)0x0;
              pppppppcVar6[8] = (romwright_code ******)0x0;
            }
            pppppppcVar6[6] = (romwright_code ******)0x0;
            pppppppcVar6[6] = temp_v17[1];
            pppppcVar18 = (romwright_code *****)temp_v17[3];
            pppppppcVar6[8] = (romwright_code ******)pppppcVar18;
            pppppcVar18[2] = (romwright_code ****)ppppppcVar15;
            pppppppcVar6[7] = (romwright_code ******)temp_v17;
            temp_v17[3] = ppppppcVar15;
          }
          ppppppcVar15 = (romwright_code ******)(pppppcVar23 + 5);
          pppppcVar23[4] = (romwright_code ****)pppppcVar20;
          if (ppppppcVar15 != &temp_v7) {
            ppppppcVar3 = (romwright_code ******)pppppcVar23[7];
            if (ppppppcVar3 == (romwright_code ******)0x0 || ppppppcVar3 == ppppppcVar15) {
              if (pppppcVar23[6] != (romwright_code ****)0x0) {
                (*(romwright_code *)**pppppcVar23[6])();
                (*(romwright_code *)(**ppppppcVar15)[1])(*ppppppcVar15,pppppcVar23[6]);
              }
            }
            else {
              ppppppcVar3[3] = (romwright_code *****)pppppcVar23[8];
              pppppcVar23[8][2] = (romwright_code ***)pppppcVar23[7];
              pppppcVar23[7] = (romwright_code ****)0x0;
              pppppcVar23[8] = (romwright_code ****)0x0;
            }
            pppppcVar23[6] = (romwright_code ****)0x0;
            pppppcVar23[6] = (romwright_code ****)temp_v8;
            pppppcVar23[8] = (romwright_code ****)temp_v10;
            temp_v10[2] = (romwright_code *****)ppppppcVar15;
            pppppcVar23[7] = (romwright_code ****)&temp_v7;
            temp_v10 = ppppppcVar15;
          }
          if (temp_v9 == (romwright_code ******)0x0 || temp_v9 == &temp_v7) {
            if (temp_v8 != (romwright_code *****)0x0) {
              (*(romwright_code *)**temp_v8)();
              (*(romwright_code *)(*temp_v7)[1])(temp_v7,temp_v8);
            }
          }
          else {
            temp_v9[3] = (romwright_code *****)temp_v10;
            temp_v10[2] = (romwright_code *****)temp_v9;
            temp_v9 = (romwright_code ******)0x0;
            temp_v10 = (romwright_code ******)0x0;
          }
          temp_v8 = (romwright_code *****)0x0;
          (*pppppcVar23)[2] = (romwright_code ***)pppppcVar23[2];
          ppppppcVar15 = (romwright_code ******)*pppppcVar23;
          *pppppppcVar9 = ppppppcVar15;
          if (ppppppcVar15 == ppppppcVar5) {
            ppppppcVar15 = (romwright_code ******)pppppcVar23[2];
          }
          (*(romwright_code *)**pppppppcVar1)(pppppppcVar1,pppppcVar23);
        }
        pppppppcVar1[8] = (romwright_code ******)((int)pppppppcVar1[8] - 1);
        pppppppcVar1[4] = pppppppcVar1[1];
        ppppppcVar3 = (romwright_code ******)ppppppcVar15[2];
        while (ppppppcVar13 = ppppppcVar3, ppppppcVar13 != ppppppcVar5) {
          ppppppcVar3 = ppppppcVar13;
          if ((romwright_code ******)*ppppppcVar13 != ppppppcVar15) {
            ppppppcVar3 = ppppppcVar13 + 1;
          }
          treeRebalanceAfterErase(ppppppcVar3);
          ppppppcVar15 = ppppppcVar13;
          ppppppcVar3 = (romwright_code ******)ppppppcVar13[2];
        }
        treeRebalanceAfterErase(pppppppcVar1 + 1);
        pppppppcVar1[4] = pppppppcVar1[1];
      }
LAB_003b20d0:
      temp_v2 = *temp_v35;
      *temp_v35 = (int)temp_v33 + temp_v2;
      if ((romwright_code *)((int)temp_v33 + temp_v2) <= temp_v36) {
        return 0;
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *temp_v29 = 0x40;
  *temp_v30 = 0x10000;
  *temp_v31 = 0;
  *temp_v32 = 0;
  return 0x43;
}

} /* extern "C" */
