/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e1b80` (_code @ 0x3e1b80, 0x488 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013cab8(int, int, int);
int dataTableGetEntries(void);
int dataTableFileGetTable(...);
int FUN_002e5924(int);
int FUN_003e0cd4(unsigned int *, int);
int FUN_003ed6e8(int);
int btlLoadBossAppearData(...);
int FUN_003f26d4(int);
int FUN_004aa2e0(unsigned int, int);
int FUN_004f3ee0(...);
int FUN_004f41b0(int, int, int);
int FUN_004f6d34(void);
int FUN_004f7b84(...);
int FUN_004fb670(...);
int FUN_004fd268(...);
int FUN_004fdcd8(...);

/* stack frame of param_3: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_3_stack;

extern unsigned char LAB_003e2014; /* 0x3e2014 */
extern unsigned char LAB_003e2028; /* 0x3e2028 */
extern unsigned int g_btlActionReflect; /* 0x5712f0 */
extern int g_btlCamera; /* 0x571508 */
extern int DAT_00573808; /* 0x573808 */
extern unsigned int DAT_00573858; /* 0x573858 */
extern unsigned int DAT_0057385c; /* 0x57385c */
extern unsigned int DAT_00573878; /* 0x573878 */
extern unsigned int DAT_0057387c; /* 0x57387c */
extern unsigned int DAT_00573888; /* 0x573888 */
extern unsigned int DAT_0057388c; /* 0x57388c */
extern unsigned int DAT_00573890; /* 0x573890 */
extern unsigned int DAT_00573894; /* 0x573894 */
extern unsigned int g_btlUiBlock; /* 0x57a9c8 */

/* Supplied declaration required: FUN_0013cab8. */
extern int FUN_0013def0(unsigned int);
extern int dataTableGetCount(unsigned int);
/* Supplied declaration required: dataTableGetEntries. */
/* Supplied declaration required: dataTableFileGetTable. */
/* Supplied declaration required: FUN_002e5924. */
/* Supplied declaration required: FUN_003e0cd4. */
/* Supplied declaration required: FUN_003ed6e8. */
extern int FUN_003f1230(int);
/* Supplied declaration required: btlLoadBossAppearData. */
/* Supplied declaration required: FUN_003f26d4. */
extern int chainCountIdUnflagged(unsigned int, unsigned int *);
/* Supplied declaration required: FUN_004aa2e0. */
/* Supplied declaration required: FUN_004f3ee0. */
/* Supplied declaration required: FUN_004f41b0. */
/* Supplied declaration required: FUN_004f6d34. */
/* Supplied declaration required: FUN_004f7b84. */
/* Supplied declaration required: FUN_004fb670. */
/* Supplied declaration required: FUN_004fd268. */
/* Supplied declaration required: FUN_004fdcd8. */


void FUN_003e1b80(unsigned int *param_1,int param_2,int param_3)

{
/* irregular: 1 goto(s); 16 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int *puVar10;
  
  temp_v7 = 4;
  temp_v0 = param_1[4];
  if (temp_v0 != 0) {
    if (temp_v0 != 1) {
      puVar10 = (unsigned int *)(param_2 + 0x45a0);
      if (temp_v0 != 2) {
        temp_v0 = chainCountIdUnflagged(g_btlActionReflect,param_1);
        if (0 < temp_v0) {
          return;
        }
        if ((*(unsigned int *)(param_2 + 0x45a4) & DAT_0057385c) == 0 && (DAT_00573858 & *puVar10) == 0) {
          FUN_003ed6e8(param_2);
          FUN_003f26d4(param_2);
          temp_v5 = DAT_0057387c | *(unsigned int *)(param_2 + 0x45a4) | DAT_00573894;
          *puVar10 = *puVar10 | DAT_00573878 | DAT_00573890;
          *(unsigned int *)(param_2 + 0x45a4) = temp_v5;
          FUN_004aa2e0(g_btlUiBlock,0);
        }
        param_1[4] = 0;
        *param_1 = 0x19;
        param_1[3] = 0;
        FUN_003e0cd4(param_1,param_2);
        return;
      }
      if ((param_1[3] & 2) != 0) {
        temp_v0 = DAT_00573808;
        FUN_004f6d34();
        if (temp_v0 == 0) {
          return;
        }
        if ((*(unsigned int *)(g_btlCamera + 0x64c) & 0x200) != 0) {
          return;
        }
        temp_v0 = FUN_0013def0(0);
        if (temp_v0 == 3) {
          FUN_0013cab8(0,10,0xff);
        }
        temp_v0 = FUN_0013def0(1);
        if (temp_v0 == 3) {
          FUN_0013cab8(1,10,0xff);
        }
        temp_v0 = *(int *)(param_2 + 0x2290);
        if (temp_v0 == 0) {
          piVar3 = (int *)0x0;
        }
        else {
          temp_v6 = param_2;
          temp_v2 = dataTableFileGetTable(temp_v0,1);
          temp_v3 = dataTableGetEntries();
          temp_v4 = dataTableGetCount(temp_v2);
          temp_v1 = temp_v4;
          if (0 < temp_v4) {
            temp_v1 = temp_v6;
          }
          temp_v6 = 0;
          if (temp_v6 < temp_v4) {
            do {
              piVar3 = (int *)(temp_v3 + temp_v6 * 0x14);
              if (*(int *)(temp_v1 + 0xf0) == *piVar3) goto LAB_003e1f28;
              temp_v6 = temp_v6 + 1;
            } while (temp_v6 < temp_v4);
          }
          dataTableFileGetTable(temp_v0,0);
          piVar3 = (int *)dataTableGetEntries();
        }
LAB_003e1f28:
        do {
          temp_v0 = *(int *)(param_2 + 0x1ed4) + temp_v7 * 0x1d0;
          if ((*(unsigned int *)(temp_v0 + 0x50) & 1) != 0 && (*(unsigned int *)(temp_v0 + 0x50) & 2) != 0) {
            FUN_004fd268((int)(short)piVar3[3],param_1,temp_v0,*(unsigned int *)(temp_v0 + 0x70),
                         (int)*(short *)((int)piVar3 + 0xe),1);
          }
          temp_v7 = temp_v7 + 1;
        } while (temp_v7 < 0x36);
        if ((*puVar10 & DAT_00573888) == 0 && (*(unsigned int *)(param_2 + 0x45a4) & DAT_0057388c) == 0) {
          FUN_002e5924(2);
          temp_v5 = *puVar10 | DAT_00573888;
          *(unsigned int *)(param_2 + 0x45a4) = DAT_0057388c | *(unsigned int *)(param_2 + 0x45a4);
          *puVar10 = temp_v5;
        }
        FUN_004f41b0(g_btlCamera,0,(int)(short)piVar3[2]);
        FUN_004fdcd8((int)*(short *)((int)piVar3 + 10),param_1,0,0,7,0,6,0);
        FUN_004fb670((int)(short)piVar3[4],param_1,(int)*(short *)((int)piVar3 + 0x12));
      }
    }
    else {
      if (((param_1[3] & 0x10) != 0) && (temp_v0 = FUN_003f1230(param_2), temp_v0 == 0)) {
        return;
      }
      temp_v0 = *(int *)(param_2 + 0x2290);
      if (temp_v0 != 0) {
        temp_v2 = dataTableFileGetTable(temp_v0,1);
        temp_v7 = dataTableGetEntries();
        temp_v1 = dataTableGetCount(temp_v2);
        if (0 < temp_v1) {
          param_3 = *(int *)(param_2 + 0xf0);
        }
        temp_v6 = 0;
        if (temp_v6 < temp_v1) {
          do {
            if (param_3 == *(int *)(temp_v7 + temp_v6 * 0x14)) {
              FUN_004f3ee0(g_btlCamera,1,0);
              param_1[4] = param_1[4] + 1;
              return;
            }
            temp_v6 = temp_v6 + 1;
          } while (temp_v6 < temp_v1);
        }
        dataTableFileGetTable(temp_v0,0);
        dataTableGetEntries();
      }
      FUN_004f3ee0(g_btlCamera,1,0);
    }
  }
  else {
    do {
      temp_v0 = *(int *)(param_2 + 0x1ed4) + temp_v7 * 0x1d0;
      temp_v5 = *(unsigned int *)(temp_v0 + 0x50);
      if ((temp_v5 & 1) != 0 && (temp_v5 & 2) != 0) {
        FUN_004fd268(0,param_1,temp_v0,0,0,1);
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < 0x36);
    if (param_1[3] == 0) {
      if ((*(unsigned int *)(param_2 + 0x110) & 0x80) != 0) {
        FUN_004f7b84(DAT_00573808,&LAB_003e2014);
      }
      else {
        FUN_004f7b84(DAT_00573808,&LAB_003e2028);
      }
      *(unsigned int *)(g_btlCamera + 0x64c) = *(unsigned int *)(g_btlCamera + 0x64c) | 0x4000;
      param_1[3] = param_1[3] | 2;
      btlLoadBossAppearData(param_2);
      param_1[3] = param_1[3] | 0x10;
    }
  }
  param_1[4] = param_1[4] + 1;
  return;
}

} /* extern "C" */
