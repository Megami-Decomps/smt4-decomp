/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004adf7c` (_code @ 0x4adf7c, 0x123c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004ac1fc(...);
int FUN_004ad228(...);
int FUN_004d8f4c(...);
int FUN_004d8ffc(...);
int FUN_0050d0ac(...);
int vtblCopyAssign(...);
int listNodeUnlinkOrFree(...);
int FUN_00521c8c(...);
int FUN_00522e18(...);

typedef int romwright_code(...);
/* stack frame of param_4: 36 slot(s), 144 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
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
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
} param_4_stack;

extern unsigned char LAB_004ae5dc; /* 0x4ae5dc */

/* Supplied declaration required: FUN_004ac1fc. */
/* Supplied declaration required: FUN_004ad228. */
extern int *****FUN_004d8f18(int *****);
/* Supplied declaration required: FUN_004d8f4c. */
/* Supplied declaration required: FUN_004d8ffc. */
extern romwright_code ***FUN_004d91b0(romwright_code *****);
extern romwright_code ***FUN_004d9234(romwright_code *****);
/* Supplied declaration required: FUN_0050d0ac. */
/* Supplied declaration required: vtblCopyAssign. */
extern int FUN_0050d178(unsigned int *, unsigned int, romwright_code ***);
/* Supplied declaration required: listNodeUnlinkOrFree. */
/* Supplied declaration required: FUN_00521c8c. */
/* Supplied declaration required: FUN_00522e18. */


/* WARNING: Type propagation algorithm not settling */

int FUN_004adf7c(unsigned int *param_1,int param_2,unsigned int *param_3,unsigned int param_4)

{
/* irregular: 1 goto(s); 11 native warning(s); review required */
  romwright_code *****pppppcVar1;
  romwright_code *****pppppcVar2;
  int temp_v0;
  romwright_code ****ppppcVar4;
  romwright_code ****ppppcVar5;
  int temp_v1;
  unsigned int *puVar7;
  unsigned int *puVar8;
  int *****pppppiVar9;
  romwright_code ****ppppcVar10;
  int *****pppppiVar11;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int *puVar14;
  romwright_code ****ppppcVar15;
  romwright_code ****ppppcVar16;
  romwright_code *****pppppcVar17;
  romwright_code ***pppcVar18;
  unsigned int *puVar19;
  unsigned int *puVar20;
  romwright_code ****ppppcVar21;
  romwright_code ***pppcVar22;
  unsigned int *puVar23;
  romwright_code ***pppcVar24;
  unsigned char temp_v4;
  unsigned int temp_v5;
  romwright_code ****temp_v6;
  romwright_code ****temp_v7;
  romwright_code *****temp_v8;
  romwright_code *****temp_v9;
  unsigned int *temp_v10;
  romwright_code ****temp_v11;
  romwright_code ***temp_v12;
  romwright_code ****temp_v13;
  romwright_code ****temp_v14;
  int *****temp_v15;
  romwright_code ****temp_v16;
  romwright_code *****temp_v17;
  romwright_code *****temp_v18;
  romwright_code *****temp_v19;
  int *****temp_v20;
  romwright_code *****temp_v21;
  romwright_code *****temp_v22;
  romwright_code *****temp_v23;
  romwright_code ****temp_v24;
  romwright_code ****temp_v25;
  int *****temp_v26;
  romwright_code *****temp_v27;
  romwright_code ****temp_v28;
  int *****temp_v29;
  romwright_code ****temp_v30;
  romwright_code *****temp_v31;
  romwright_code *****temp_v32;
  unsigned int *temp_v33;
  unsigned int *temp_v34;
  unsigned char *temp_v35;
  unsigned char *temp_v36;
  romwright_code **temp_v37;
  romwright_code ****temp_v38 [2];
  unsigned int *puStack_34;
  int temp_v39;
  unsigned int *puStack_2c;
  unsigned int temp_v40;
  
  temp_v0 = param_2 + *param_3;
  puStack_34 = param_1;
  temp_v39 = param_2;
  puStack_2c = param_3;
  temp_v40 = param_4;
  FUN_004ad228(temp_v0,temp_v38,param_3,param_4);
  temp_v33 = param_1 + 0x520;
  temp_v34 = param_1 + 0x521;
  temp_v35 = (unsigned char *)((int)param_1 + 0x148f);
  temp_v36 = (unsigned char *)((int)param_1 + 0x1491);
  if (temp_v0 != 0) {
    temp_v0 = temp_v39 + *param_3;
    FUN_004ad228(temp_v0,&temp_v37,param_3,temp_v40);
    if (temp_v0 != 0) {
      if (temp_v38[0] == (romwright_code ****)0x0) {
        *param_3 = (int)temp_v37 + *param_3;
        return 0x100;
      }
      temp_v11 = (romwright_code ****)(param_1 + 0x513);
      ppppcVar15 = (romwright_code ****)(param_1 + 0x514);
      ppppcVar16 = (romwright_code ****)(param_1 + 0x514);
      ppppcVar4 = ppppcVar15;
      ppppcVar5 = (romwright_code ****)*temp_v11;
      while (ppppcVar5 != ppppcVar15) {
        if (ppppcVar5[4] < (romwright_code ***)temp_v38[0]) {
          ppppcVar5 = (romwright_code ****)ppppcVar5[1];
        }
        else {
          ppppcVar4 = ppppcVar5;
          ppppcVar5 = (romwright_code ****)*ppppcVar5;
        }
      }
      temp_v4 = ppppcVar16 <= ppppcVar4;
      if (ppppcVar4 != ppppcVar16) {
        ppppcVar15 = (romwright_code ****)ppppcVar4[4];
        temp_v4 = temp_v38[0] <= ppppcVar15;
      }
      puVar19 = param_1 + 0x51d;
      if (temp_v4 && (ppppcVar4 != ppppcVar16 && ppppcVar15 != temp_v38[0])) {
        ppppcVar4 = ppppcVar16;
      }
      temp_v10 = param_1 + 0x525;
      if (ppppcVar4 == (romwright_code ****)(param_1 + 0x514)) {
        temp_v0 = FUN_0050d0ac(temp_v10,temp_v38[0],&temp_v13,0);
        ppppcVar15 = temp_v11;
        if (temp_v0 != 0) {
          return temp_v0;
        }
        temp_v15 = (int *****)*puVar19;
        temp_v21 = (romwright_code *****)temp_v13;
        temp_v28 = temp_v38[0];
        temp_v30 = temp_v13;
        temp_v18 = (romwright_code *****)&temp_v20;
        temp_v17 = (romwright_code *****)&temp_v29;
        temp_v14 = temp_v38[0];
        temp_v16 = temp_v13;
        temp_v22 = (romwright_code *****)&temp_v15;
        temp_v19 = &temp_v24;
        temp_v25 = (romwright_code ****)((unsigned int)temp_v25 & 0xffffff00);
        ppppcVar10 = temp_v11 + 1;
        ppppcVar16 = (romwright_code ****)*temp_v11;
        ppppcVar4 = ppppcVar10;
        ppppcVar5 = ppppcVar10;
        temp_v7 = temp_v11;
        while (ppppcVar16 != ppppcVar10) {
          ppppcVar4 = (romwright_code ****)*temp_v7;
          ppppcVar21 = ppppcVar4;
          temp_v7 = ppppcVar4;
          if (ppppcVar4[4] < (romwright_code ***)temp_v38[0]) {
            ppppcVar21 = ppppcVar5;
            temp_v7 = ppppcVar4 + 1;
          }
          ppppcVar5 = ppppcVar21;
          ppppcVar16 = (romwright_code ****)*temp_v7;
        }
        temp_v20 = temp_v15;
        temp_v23 = temp_v17;
        temp_v29 = temp_v15;
        temp_v31 = temp_v18;
        temp_v32 = temp_v22;
        if ((ppppcVar5 != temp_v11 + 1) && (temp_v38[0] >= (romwright_code ****)ppppcVar5[4])) {
                    /* WARNING: Ignoring partial resolution of indirect */
          (*(unsigned char *)((unsigned char *)&temp_v25 + 0)) = 0;
        }
        else {
          ppppcVar5 = (romwright_code ****)(***temp_v11[9])(temp_v11[9],0x24);
          if (ppppcVar5 != (romwright_code ****)0x0) {
            if (ppppcVar5 + 4 != (romwright_code ****)0x0) {
              pppppcVar17 = (romwright_code *****)(ppppcVar5 + 5);
              ppppcVar5[4] = (romwright_code ***)temp_v14;
              *pppppcVar17 = (romwright_code ****)temp_v15;
              ppppcVar5[6] = (romwright_code ***)temp_v16;
              ppppcVar5[8] = (romwright_code ***)temp_v18;
              temp_v18[2] = (romwright_code ****)pppppcVar17;
              ppppcVar5[7] = (romwright_code ***)&temp_v15;
              temp_v18 = pppppcVar17;
            }
            ppppcVar5[2] = (romwright_code ***)ppppcVar4;
          }
          else {
            (*(*ppppcVar15[9])[2])(ppppcVar15[9],&LAB_004ae5dc,0x24);
          }
          if (ppppcVar5 == (romwright_code ****)0x0) {
            ppppcVar5 = ppppcVar15 + 1;
          }
          else {
            *temp_v7 = (romwright_code ***)ppppcVar5;
            FUN_004d8f4c(ppppcVar15,ppppcVar5);
            *(unsigned char *)(temp_v19 + 1) = 1;
          }
        }
        temp_v24 = ppppcVar5;
        if (temp_v17 == (romwright_code *****)0x0 || (int ******)temp_v17 == &temp_v15) {
          if (temp_v16 != (romwright_code ****)0x0) {
            (*(romwright_code *)**temp_v16)();
            (*(romwright_code *)(*temp_v15)[1])(temp_v15,temp_v16);
          }
        }
        else {
          temp_v17[3] = (romwright_code ****)temp_v18;
          temp_v18[2] = (romwright_code ****)temp_v17;
          temp_v17 = (romwright_code *****)0x0;
          temp_v18 = (romwright_code *****)0x0;
        }
        temp_v16 = (romwright_code ****)0x0;
        if (temp_v31 == (romwright_code *****)0x0 || (int ******)temp_v31 == &temp_v29) {
          if (temp_v30 != (romwright_code ****)0x0) {
            (*(romwright_code *)**temp_v30)();
            (*(romwright_code *)(*temp_v29)[1])(temp_v29,temp_v30);
          }
        }
        else {
          temp_v31[3] = (romwright_code ****)temp_v32;
          temp_v32[2] = (romwright_code ****)temp_v31;
          temp_v31 = (romwright_code *****)0x0;
          temp_v32 = (romwright_code *****)0x0;
        }
        temp_v30 = (romwright_code ****)0x0;
        if (temp_v22 == (romwright_code *****)0x0 || (int ******)temp_v22 == &temp_v20) {
          if (temp_v21 != (romwright_code *****)0x0) {
            (*(romwright_code *)**temp_v21)();
            (*(romwright_code *)(*temp_v20)[1])(temp_v20,temp_v21);
          }
        }
        else {
          temp_v22[3] = (romwright_code ****)temp_v23;
          temp_v23[2] = (romwright_code ****)temp_v22;
          temp_v22 = (romwright_code *****)0x0;
          temp_v23 = (romwright_code *****)0x0;
        }
        ppppcVar4 = temp_v24;
        if (temp_v24 == temp_v11 + 1) {
          return 0x44;
        }
      }
      pppcVar22 = ppppcVar4[6];
      if ((pppcVar22[2] != temp_v37) ||
         (temp_v21 = (romwright_code *****)ppppcVar4,
         temp_v0 = (*(*pppcVar22)[3])(pppcVar22,temp_v39 + *param_3), temp_v0 == 0)) {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        *temp_v33 = 0x40;
        *temp_v34 = 0x10000;
        *temp_v35 = 0;
        *temp_v36 = 0;
        return 0x45;
      }
      temp_v0 = (*(*pppcVar22)[4])(pppcVar22);
      if (temp_v0 != 0) {
        temp_v0 = param_1[0x50c];
        temp_v1 = *(int *)(param_1[0x50c] + 4);
        while (temp_v1 != 0) {
          if (*(romwright_code ***)(temp_v1 + 0x10) >= pppcVar22[5]) {
            temp_v0 = temp_v1;
            temp_v1 = *(int *)(temp_v1 + 8);
          }
          else {
            temp_v1 = *(int *)(temp_v1 + 0xc);
          }
        }
        temp_v17 = (romwright_code *****)param_1[0x50c];
        temp_v1 = *(int *)(param_1[0x50c] + 4);
        while (temp_v1 != 0) {
          if (pppcVar22[5] < *(romwright_code ***)(temp_v1 + 0x10)) {
            temp_v17 = (romwright_code *****)temp_v1;
            temp_v1 = *(int *)(temp_v1 + 8);
          }
          else {
            temp_v1 = *(int *)(temp_v1 + 0xc);
          }
        }
        temp_v1 = temp_v0;
        temp_v16 = (romwright_code ****)temp_v0;
        if (temp_v0 == param_1[0x50c]) {
          puVar7 = (unsigned int *)(*(romwright_code *)**(unsigned int **)*puVar19)((unsigned int *)*puVar19,0x6c);
          if (puVar7 == (unsigned int *)0x0) {
            return 0x44;
          }
          temp_v5 = *puVar19;
          *puVar7 = temp_v5;
          puVar7[1] = temp_v5;
          puVar7[2] = 0;
          puVar7[3] = 0;
          puVar7[4] = 0;
          puVar7[5] = 0;
          puVar7[6] = 4;
          puVar7[7] = temp_v5;
          puVar7[8] = 0;
          puVar7[9] = 0;
          puVar7[10] = 0;
          puVar7[0xb] = temp_v5;
          puVar7[0xc] = 0;
          puVar7[0xd] = 0;
          puVar7[0xe] = 0;
          puVar7[0xf] = 0;
          puVar7[0x10] = 1;
          puVar7[0x11] = temp_v5;
          puVar7[0x14] = (unsigned int)(puVar7 + 0x11);
          puVar7[0x12] = 0;
          puVar7[0x13] = (unsigned int)(puVar7 + 0x11);
          puVar7[0x15] = temp_v5;
          puVar7[0x16] = 0;
          puVar7[0x17] = 0;
          puVar7[0x18] = 0;
          puVar7[0x19] = 0;
          *(unsigned char *)(puVar7 + 0x1a) = 1;
          FUN_004ac1fc(puVar7,pppcVar22[5],param_1 + 6);
          temp_v0 = FUN_0050d0ac(temp_v10,temp_v38[0],&temp_v13,puVar7);
          if (temp_v0 != 0) {
            return temp_v0;
          }
          vtblCopyAssign(temp_v10,temp_v13,pppcVar22);
          temp_v6 = (romwright_code ****)*puVar19;
          temp_v18 = (romwright_code *****)pppcVar22[5];
          temp_v25 = temp_v13;
          temp_v9 = &temp_v24;
          temp_v20 = (int *****)temp_v13;
          temp_v27 = (romwright_code *****)&temp_v19;
          temp_v7 = temp_v13;
          temp_v22 = &temp_v6;
          temp_v8 = (romwright_code *****)&temp_v19;
          temp_v19 = (romwright_code *****)temp_v6;
          temp_v21 = temp_v9;
          temp_v24 = temp_v6;
          temp_v26 = (int *****)temp_v22;
          FUN_00522e18(&temp_v30,param_1 + 0x507);
          listNodeUnlinkOrFree(&temp_v6);
          listNodeUnlinkOrFree(&temp_v19);
          pppppcVar17 = &temp_v24;
        }
        else {
          while ((romwright_code *****)temp_v1 != temp_v17) {
            if (*(char *)(*(int *)(*(int *)(temp_v1 + 0x18) + 0x10) + 0x68) != '\0') {
              if ((romwright_code *)param_1[0x522] != (romwright_code *)0x0) {
                (*(romwright_code *)param_1[0x522])
                          ("Found stream index %d but this stream is already present (duplicate?)...\n"
                           ,pppcVar22[5]);
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
          if ((romwright_code *****)temp_v0 != temp_v17) {
            do {
              temp_v1 = FUN_0050d178(temp_v10,*(unsigned int *)(temp_v0 + 0x18),pppcVar22);
              if (temp_v1 != 0) {
                *(unsigned char *)(*(int *)(*(int *)(temp_v0 + 0x18) + 0x10) + 0x68) = 1;
                goto LAB_004af14c;
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
            } while ((romwright_code *****)temp_v0 != temp_v17);
          }
          puVar7 = (unsigned int *)(*(romwright_code *)**(unsigned int **)*puVar19)((unsigned int *)*puVar19,0x6c);
          if (puVar7 == (unsigned int *)0x0) {
            return 0x44;
          }
          temp_v5 = *puVar19;
          *puVar7 = temp_v5;
          puVar7[1] = temp_v5;
          puVar7[2] = 0;
          puVar7[3] = 0;
          puVar7[4] = 0;
          puVar7[5] = 0;
          puVar7[6] = 4;
          puVar7[7] = temp_v5;
          puVar7[8] = 0;
          puVar7[9] = 0;
          puVar7[10] = 0;
          puVar7[0xb] = temp_v5;
          puVar7[0xc] = 0;
          puVar7[0xd] = 0;
          puVar7[0xe] = 0;
          puVar7[0xf] = 0;
          puVar7[0x10] = 1;
          puVar7[0x11] = temp_v5;
          puVar7[0x14] = (unsigned int)(puVar7 + 0x11);
          puVar7[0x12] = 0;
          puVar7[0x13] = (unsigned int)(puVar7 + 0x11);
          puVar7[0x15] = temp_v5;
          puVar7[0x16] = 0;
          puVar7[0x17] = 0;
          puVar7[0x18] = 0;
          puVar7[0x19] = 0;
          *(unsigned char *)(puVar7 + 0x1a) = 1;
          FUN_004ac1fc(puVar7,pppcVar22[5],param_1 + 6);
          temp_v0 = FUN_0050d0ac(temp_v10,temp_v38[0],&temp_v13,puVar7);
          if (temp_v0 != 0) {
            return temp_v0;
          }
          vtblCopyAssign(temp_v10,temp_v13,pppcVar22);
          temp_v6 = (romwright_code ****)*puVar19;
          temp_v18 = (romwright_code *****)pppcVar22[5];
          temp_v7 = temp_v13;
          temp_v25 = temp_v13;
          temp_v22 = &temp_v6;
          temp_v9 = &temp_v24;
          temp_v20 = (int *****)temp_v13;
          temp_v8 = (romwright_code *****)&temp_v19;
          temp_v19 = (romwright_code *****)temp_v6;
          temp_v21 = temp_v9;
          temp_v23 = temp_v18;
          temp_v24 = temp_v6;
          temp_v26 = (int *****)temp_v22;
          temp_v27 = temp_v8;
          FUN_00522e18(&temp_v30,param_1 + 0x507);
          listNodeUnlinkOrFree(&temp_v19);
          listNodeUnlinkOrFree(&temp_v24);
          pppppcVar17 = &temp_v6;
        }
        listNodeUnlinkOrFree(pppppcVar17);
      }
      else {
        puVar7 = param_1 + 0x50f;
        temp_v17 = (romwright_code *****)(ppppcVar4 + 5);
        temp_v0 = param_1[0x512];
        puVar19 = (unsigned int *)(param_1[0x510] + temp_v0 * 0x10);
        temp_v6 = (romwright_code ****)(((int)puVar19 - param_1[0x510]) >> 4);
        temp_v9 = (romwright_code *****)(temp_v0 + 1);
        temp_v22 = (romwright_code *****)puVar7;
        temp_v23 = (romwright_code *****)temp_v6;
        if ((int *****)param_1[0x511] >= (int *****)temp_v9) {
          temp_v2 = (unsigned int)(temp_v0 - (int)temp_v6 != 0);
          temp_v1 = (temp_v0 - (int)temp_v6) - temp_v2;
          temp_v0 = (int)temp_v9 - temp_v2;
          for (puVar23 = puVar19 + temp_v2 * -4; puVar23 != puVar19; puVar23 = puVar23 + 4) {
            puVar14 = (unsigned int *)(param_1[0x510] + temp_v0 * 0x10);
            temp_v0 = temp_v0 + 1;
            if (puVar14 != (unsigned int *)0x0) {
              *puVar14 = *puVar23;
              puVar14[1] = puVar23[1];
              temp_v3 = puVar23[3];
              puVar14[3] = temp_v3;
              *(unsigned int **)(temp_v3 + 8) = puVar14;
              puVar14[2] = (unsigned int)puVar23;
              puVar23[3] = (unsigned int)puVar14;
            }
          }
          temp_v18 = (romwright_code *****)((int)temp_v6 + 1);
          puVar23 = (unsigned int *)(param_1[0x510] + (int)temp_v6 * 0x10);
          puVar19 = (unsigned int *)(param_1[0x510] + (int)temp_v18 * 0x10);
          if (temp_v1 != 0) {
            if (puVar23 < puVar19) {
              puVar23 = puVar23 + temp_v1 * 4;
              puVar19 = puVar19 + temp_v1 * 4;
              do {
                puVar20 = puVar19 + -4;
                puVar14 = puVar23 + -4;
                if (puVar20 != puVar14) {
                  puVar8 = (unsigned int *)puVar19[-2];
                  if (puVar8 == (unsigned int *)0x0 || puVar8 == puVar20) {
                    if ((unsigned int *)puVar19[-3] != (unsigned int *)0x0) {
                      (*(romwright_code *)**(unsigned int **)puVar19[-3])();
                      (**(romwright_code **)(*(int *)*puVar20 + 4))((int *)*puVar20,puVar19[-3]);
                    }
                  }
                  else {
                    puVar8[3] = puVar19[-1];
                    *(unsigned int *)(puVar19[-1] + 8) = puVar19[-2];
                    puVar19[-2] = 0;
                    puVar19[-1] = 0;
                  }
                  puVar19[-3] = 0;
                  puVar19[-3] = puVar23[-3];
                  temp_v0 = puVar23[-1];
                  puVar19[-1] = temp_v0;
                  *(unsigned int **)(temp_v0 + 8) = puVar20;
                  puVar19[-2] = (unsigned int)puVar14;
                  puVar23[-1] = (unsigned int)puVar20;
                }
                temp_v1 = temp_v1 - 1;
                puVar23 = puVar14;
                puVar19 = puVar20;
              } while (temp_v1 != 0);
            }
            else {
              do {
                if (puVar19 != puVar23) {
                  puVar14 = (unsigned int *)puVar19[2];
                  if (puVar14 == (unsigned int *)0x0 || puVar14 == puVar19) {
                    if ((unsigned int *)puVar19[1] != (unsigned int *)0x0) {
                      (*(romwright_code *)**(unsigned int **)puVar19[1])();
                      (**(romwright_code **)(*(int *)*puVar19 + 4))((int *)*puVar19,puVar19[1]);
                    }
                  }
                  else {
                    puVar14[3] = puVar19[3];
                    *(unsigned int *)(puVar19[3] + 8) = puVar19[2];
                    puVar19[2] = 0;
                    puVar19[3] = 0;
                  }
                  puVar19[1] = 0;
                  puVar19[1] = puVar23[1];
                  temp_v0 = puVar23[3];
                  puVar19[3] = temp_v0;
                  *(unsigned int **)(temp_v0 + 8) = puVar19;
                  puVar19[2] = (unsigned int)puVar23;
                  puVar23[3] = (unsigned int)puVar19;
                }
                temp_v1 = temp_v1 - 1;
                puVar19 = puVar19 + 4;
                puVar23 = puVar23 + 4;
              } while (temp_v1 != 0);
            }
          }
          pppppcVar17 = temp_v18;
          if ((romwright_code ****)param_1[0x512] <= (romwright_code ****)temp_v18) {
            pppppcVar17 = (romwright_code *****)param_1[0x512];
          }
          FUN_00521c8c(puVar7,temp_v6);
        }
        else {
          pppppiVar9 = (int *****)FUN_004d8f18((int *****)param_1[0x511]);
          temp_v18 = (romwright_code *****)*puVar7;
          temp_v19 = (romwright_code *****)0x0;
          temp_v20 = (int *****)0x0;
          pppppcVar17 = temp_v19;
          pppppcVar2 = (romwright_code *****)temp_v20;
          if (pppppiVar9 != (int *****)0x0) {
            temp_v15 = (int *****)((int)pppppiVar9 << 4);
            pppppcVar17 = (romwright_code *****)(*(romwright_code *)**temp_v18)(temp_v18,temp_v15);
            pppppcVar2 = (romwright_code *****)pppppiVar9;
            if (pppppcVar17 == (romwright_code *****)0x0) {
              (*(romwright_code *)(*temp_v18)[2])
                        (temp_v18,"MoLive::Allocator: not enough memory to allocate %d bytes !!!\n",
                         temp_v15);
              pppppcVar1 = temp_v9;
              if (temp_v9 == (romwright_code *****)pppppiVar9) {
                temp_v19 = (romwright_code *****)0x0;
                (*(romwright_code *)(*temp_v18)[1])(temp_v18,0);
                return 0x44;
              }
              pppppcVar2 = (romwright_code *****)temp_v20;
              if (temp_v9 != (romwright_code *****)0x0) {
                temp_v0 = (int)temp_v9 << 4;
                temp_v19 = pppppcVar17;
                pppppcVar17 = (romwright_code *****)(*(romwright_code *)**temp_v18)(temp_v18,temp_v0);
                pppppcVar2 = pppppcVar1;
                if (pppppcVar17 == (romwright_code *****)0x0) {
                  (*(romwright_code *)(*temp_v18)[2])
                            (temp_v18,
                             "MoLive::Allocator: not enough memory to allocate %d bytes !!!\n",temp_v0
                            );
                  temp_v19 = (romwright_code *****)0x0;
                  (*(romwright_code *)(*temp_v18)[1])(temp_v18,0);
                  return 0x44;
                }
              }
            }
          }
          temp_v20 = (int *****)pppppcVar2;
          temp_v19 = pppppcVar17;
          pppcVar22 = (romwright_code ***)param_1[0x510];
          temp_v0 = 0;
          pppcVar24 = pppcVar22 + (int)temp_v6 * 4;
          for (; pppcVar22 != pppcVar24; pppcVar22 = pppcVar22 + 4) {
            ppppcVar15 = (romwright_code ****)(temp_v19 + temp_v0 * 4);
            temp_v0 = temp_v0 + 1;
            if (ppppcVar15 != (romwright_code ****)0x0) {
              *ppppcVar15 = (romwright_code ***)*pppcVar22;
              ppppcVar15[1] = (romwright_code ***)pppcVar22[1];
              pppcVar18 = (romwright_code ***)pppcVar22[3];
              ppppcVar15[3] = pppcVar18;
              pppcVar18[2] = (romwright_code **)ppppcVar15;
              ppppcVar15[2] = pppcVar22;
              pppcVar22[3] = (romwright_code **)ppppcVar15;
            }
          }
          temp_v0 = param_1[0x510];
          temp_v1 = param_1[0x512];
          ppppcVar15 = temp_v6;
          for (pppcVar22 = (romwright_code ***)(temp_v0 + (int)temp_v6 * 0x10);
              pppcVar22 != (romwright_code ***)(temp_v0 + temp_v1 * 0x10); pppcVar22 = pppcVar22 + 4) {
            ppppcVar15 = (romwright_code ****)((int)ppppcVar15 + 1);
            ppppcVar4 = (romwright_code ****)(temp_v19 + (int)ppppcVar15 * 4);
            if (ppppcVar4 != (romwright_code ****)0x0) {
              *ppppcVar4 = (romwright_code ***)*pppcVar22;
              ppppcVar4[1] = (romwright_code ***)pppcVar22[1];
              pppcVar24 = (romwright_code ***)pppcVar22[3];
              ppppcVar4[3] = pppcVar24;
              pppcVar24[2] = (romwright_code **)ppppcVar4;
              ppppcVar4[2] = pppcVar22;
              pppcVar22[3] = (romwright_code **)ppppcVar4;
            }
          }
          ppppcVar15 = (romwright_code ****)param_1[0x510];
          param_1[0x510] = (unsigned int)temp_v19;
          ppppcVar4 = (romwright_code ****)param_1[0x511];
          param_1[0x511] = (unsigned int)temp_v20;
          temp_v19 = (romwright_code *****)ppppcVar15;
          temp_v20 = (int *****)ppppcVar4;
          FUN_00521c8c(&temp_v18,0,param_1[0x512]);
          pppppcVar17 = (romwright_code *****)(*temp_v18)[1];
          (*(romwright_code *)pppppcVar17)(temp_v18,temp_v19);
          temp_v19 = (romwright_code *****)0x0;
          temp_v20 = (int *****)0x0;
        }
        pppppcVar2 = temp_v21;
        ppppcVar15 = temp_v11;
        param_1[0x512] = (unsigned int)temp_v9;
        pppcVar22 = (romwright_code ***)((int)temp_v22[1] + (int)temp_v23 * 0x10);
        if (pppcVar22 != (romwright_code ***)0x0) {
          *pppcVar22 = (romwright_code **)*temp_v17;
          pppcVar22[1] = (romwright_code **)temp_v17[1];
          pppppcVar17 = (romwright_code *****)temp_v17[3];
          pppcVar22[3] = (romwright_code **)pppppcVar17;
          pppppcVar17[2] = (romwright_code ****)pppcVar22;
          pppcVar22[2] = (romwright_code **)temp_v17;
          temp_v17[3] = (romwright_code ****)pppcVar22;
        }
        pppcVar22 = (romwright_code ***)FUN_004d91b0(temp_v21);
        ppppcVar4 = *pppppcVar2;
        ppppcVar5 = ppppcVar15 + 1;
        if (ppppcVar4 != ppppcVar5) {
          pppppcVar17 = (romwright_code *****)pppppcVar2[1];
        }
        if (!(ppppcVar4 != ppppcVar5 && pppppcVar17 != (romwright_code *****)ppppcVar5)) {
          if ((romwright_code *****)ppppcVar15[5] == pppppcVar2) {
            ppppcVar15[5] = pppcVar22;
          }
          if ((romwright_code *****)ppppcVar15[6] == pppppcVar2) {
            pppcVar22 = (romwright_code ***)FUN_004d9234(pppppcVar2);
            ppppcVar15[6] = pppcVar22;
          }
          ppppcVar16 = pppppcVar2[2];
          ppppcVar4 = ppppcVar15;
          if ((ppppcVar16 != ppppcVar5) &&
             (ppppcVar4 = ppppcVar16, (romwright_code *****)*ppppcVar16 != pppppcVar2)) {
            ppppcVar4 = ppppcVar16 + 1;
          }
          ppppcVar10 = *pppppcVar2;
          if (ppppcVar10 == ppppcVar5) {
            ppppcVar10 = pppppcVar2[1];
          }
          *ppppcVar4 = (romwright_code ***)ppppcVar10;
          ppppcVar10[2] = (romwright_code ***)ppppcVar16;
          ppppcVar4 = (romwright_code ****)*ppppcVar4;
          if (ppppcVar4 == ppppcVar5) {
            ppppcVar4 = pppppcVar2[2];
          }
          (*(romwright_code *)ppppcVar15[8])(ppppcVar15,pppppcVar2);
        }
        else {
          ppppcVar4 = (romwright_code ****)ppppcVar4[1];
          pppppcVar17 = pppppcVar2;
          while (ppppcVar4 != ppppcVar5) {
            pppppcVar17 = (romwright_code *****)(*pppppcVar17 + 1);
            ppppcVar4 = (romwright_code ****)(*pppppcVar17)[1];
          }
          pppcVar24 = (romwright_code ***)*pppppcVar17;
          pppcVar22 = (romwright_code ***)pppppcVar2[4];
          ppppcVar4 = (romwright_code ****)(pppppcVar2 + 5);
          temp_v6 = pppppcVar2[5];
          temp_v8 = pppppcVar2 + 5;
          temp_v7 = pppppcVar2[6];
          temp_v9 = (romwright_code *****)pppppcVar2[8];
          temp_v9[2] = (romwright_code ****)&temp_v6;
          pppppcVar2[8] = (romwright_code ****)&temp_v6;
          pppppcVar2[4] = (romwright_code ****)pppcVar24[4];
          temp_v11 = (romwright_code ****)(pppcVar24 + 5);
          temp_v12 = pppcVar24;
          temp_v16 = ppppcVar4;
          if (ppppcVar4 != temp_v11) {
            ppppcVar16 = pppppcVar2[7];
            if (ppppcVar16 == (romwright_code ****)0x0 || ppppcVar16 == ppppcVar4) {
              if (pppppcVar2[6] != (romwright_code ****)0x0) {
                (*(romwright_code *)**pppppcVar2[6])();
                (*(**ppppcVar4)[1])(*ppppcVar4,pppppcVar2[6]);
              }
            }
            else {
              ppppcVar16[3] = (romwright_code ***)pppppcVar2[8];
              pppppcVar2[8][2] = (romwright_code ***)pppppcVar2[7];
              pppppcVar2[7] = (romwright_code ****)0x0;
              pppppcVar2[8] = (romwright_code ****)0x0;
            }
            pppppcVar2[6] = (romwright_code ****)0x0;
            temp_v16[1] = temp_v11[1];
            pppcVar18 = temp_v11[3];
            temp_v16[3] = pppcVar18;
            pppcVar18[2] = (romwright_code **)temp_v16;
            temp_v16[2] = (romwright_code ***)temp_v11;
            temp_v11[3] = (romwright_code ***)temp_v16;
          }
          pppppiVar9 = (int *****)(pppcVar24 + 5);
          pppcVar24[4] = (romwright_code **)pppcVar22;
          temp_v15 = (int *****)&temp_v6;
          if (pppppiVar9 != temp_v15) {
            pppppiVar11 = (int *****)pppcVar24[7];
            if (pppppiVar11 == (int *****)0x0 || pppppiVar11 == pppppiVar9) {
              if (pppcVar24[6] != (romwright_code **)0x0) {
                (**(romwright_code **)*pppcVar24[6])();
                (*(romwright_code *)(**pppppiVar9)[1])(*pppppiVar9,pppcVar24[6]);
              }
            }
            else {
              pppppiVar11[3] = (int ****)pppcVar24[8];
              pppcVar24[8][2] = (romwright_code *)pppcVar24[7];
              pppcVar24[7] = (romwright_code **)0x0;
              pppcVar24[8] = (romwright_code **)0x0;
            }
            pppcVar24[6] = (romwright_code **)0x0;
            pppcVar24[6] = (romwright_code **)temp_v7;
            pppcVar24[8] = (romwright_code **)temp_v9;
            temp_v9[2] = (romwright_code ****)pppppiVar9;
            pppcVar24[7] = (romwright_code **)temp_v15;
            temp_v9 = (romwright_code *****)pppppiVar9;
          }
          if (temp_v8 == (romwright_code *****)0x0 || temp_v8 == &temp_v6) {
            if (temp_v7 != (romwright_code ****)0x0) {
              (*(romwright_code *)**temp_v7)();
              (*(romwright_code *)(*temp_v6)[1])(temp_v6,temp_v7);
            }
          }
          else {
            temp_v8[3] = (romwright_code ****)temp_v9;
            temp_v9[2] = (romwright_code ****)temp_v8;
            temp_v8 = (romwright_code *****)0x0;
            temp_v9 = (romwright_code *****)0x0;
          }
          temp_v7 = (romwright_code ****)0x0;
          if (ppppcVar15[5] == temp_v12) {
            ppppcVar15[5] = (romwright_code ***)pppppcVar2;
          }
          (*temp_v12)[2] = (romwright_code *)temp_v12[2];
          ppppcVar4 = (romwright_code ****)*temp_v12;
          *pppppcVar17 = ppppcVar4;
          if (ppppcVar4 == ppppcVar5) {
            ppppcVar4 = (romwright_code ****)temp_v12[2];
          }
          (*(romwright_code *)ppppcVar15[8])(ppppcVar15,temp_v12);
        }
        ppppcVar15[7] = (romwright_code ***)((int)ppppcVar15[7] - 1);
        ppppcVar15[3] = *ppppcVar15;
        ppppcVar16 = (romwright_code ****)ppppcVar4[2];
        while (ppppcVar10 = ppppcVar16, ppppcVar10 != ppppcVar5) {
          ppppcVar16 = ppppcVar10;
          if ((romwright_code ****)*ppppcVar10 != ppppcVar4) {
            ppppcVar16 = ppppcVar10 + 1;
          }
          FUN_004d8ffc(ppppcVar16);
          ppppcVar4 = ppppcVar10;
          ppppcVar16 = (romwright_code ****)ppppcVar10[2];
        }
        FUN_004d8ffc(ppppcVar15);
        ppppcVar15[3] = *ppppcVar15;
      }
LAB_004af14c:
      temp_v2 = *param_3;
      *param_3 = (int)temp_v37 + temp_v2;
      if ((int)temp_v37 + temp_v2 <= temp_v40) {
        return 0;
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *temp_v33 = 0x40;
  *temp_v34 = 0x10000;
  *temp_v35 = 0;
  *temp_v36 = 0;
  return 0x43;
}

} /* extern "C" */
