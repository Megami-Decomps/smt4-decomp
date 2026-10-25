/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00229118` (_code @ 0x229118, 0x5bc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlGetListedSummaryValues(...);
int btlEntryHasSkillCategory(...);
int selectionCopySupportedValue(...);
int FUN_0023cd08(...);
int FUN_00246134(...);
int FUN_00247478(...);
int FUN_0027da30(int, int);
int btlMainFindEntryByListedId(...);
int btlGetMainState(void);
int FUN_002eb278(...);
int FUN_002eb340(...);
int btlTargetSelectSetInfoPanel(...);

/* stack frame of param_4: 14 slot(s), 56 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
} param_4_stack;

extern unsigned int g_btlAction; /* 0x434278 */

/* Supplied declaration required: btlGetListedSummaryValues. */
/* Supplied declaration required: btlEntryHasSkillCategory. */
/* Supplied declaration required: selectionCopySupportedValue. */
/* Supplied declaration required: FUN_0023cd08. */
/* Supplied declaration required: FUN_00246134. */
/* Supplied declaration required: FUN_00247478. */
extern int battleGetEntryHalfword(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0027da30. */
/* Supplied declaration required: btlMainFindEntryByListedId. */
/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: FUN_002eb278. */
/* Supplied declaration required: FUN_002eb340. */
/* Supplied declaration required: btlTargetSelectSetInfoPanel. */
extern int __aeabi_idivmod(int, int);


/* WARNING: Type propagation algorithm not settling */

void FUN_00229118(int *param_1,int param_2,unsigned int param_3,int param_4)

{
/* irregular: 1 goto(s); irregular input(s): in_s0, in_s1, in_s2; 13 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  int temp_v12;
  unsigned int temp_v13 [7];
  int temp_v14;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int temp_v15;
  int temp_v16;
  unsigned int temp_v17 [9];
  
  if (param_2 == 0) {
    FUN_002eb278(0);
    return;
  }
  if (param_3 != 0xffffffff) {
    if (g_btlAction == param_3) {
      return;
    }
    temp_v3 = *(int *)(*param_1 + 0x1e98);
    g_btlAction = param_3;
    FUN_0023cd08(*param_1,param_3,0);
    temp_v0 = *param_1;
    FUN_0027da30(temp_v0,(int)*(short *)(temp_v3 + param_3 * 0x114 + 0x62));
    temp_v3 = __aeabi_idivmod(*(short *)(temp_v0 + 0xe8) * 100,(int)*(short *)(temp_v0 + 0xea));
    temp_v13[0] = (unsigned int)(temp_v3 < 0x14);
    temp_v1 = btlGetMainState();
    FUN_00247478(temp_v13 + 5,temp_v1,*(unsigned int *)(param_4 + 0x20));
    switch(*(unsigned short *)(*(int *)(param_4 + 0x28) + 0x14c)) {
    case 7:
    case 9:
    case 10:
    case 0xb:
    case 0xd:
    case 0xe:
      temp_v4 = 0;
      break;
    default:
      temp_v4 = 0;
      temp_v3 = btlGetMainState();
      btlMainFindEntryByListedId(temp_v3,param_3);
      if (temp_v3 != 0) {
        temp_v9 = 0;
        temp_v10 = 0;
        btlGetListedSummaryValues((int)*(short *)(*(int *)(param_4 + 0x24) + 0x62),&temp_v9,&temp_v10);
        temp_v8 = param_3;
        FUN_00246134(param_3,temp_v9,temp_v10,0xffffffff);
        if ((temp_v8 & 0x20000) != 0) {
          temp_v4 = 3;
        }
        else if ((temp_v8 & 0x40000) != 0) {
          temp_v4 = 4;
        }
        else if ((temp_v8 & 0x10000) != 0) {
          temp_v4 = 1;
        }
        else if ((temp_v8 & 0x80000000) != 0) {
          temp_v4 = 2;
        }
        else if ((temp_v8 & 0x80000) != 0) {
          temp_v4 = 5;
        }
      }
    }
    temp_v5 = 0;
    temp_v6 = 0;
    temp_v8 = 0;
    if (temp_v4 != 3) {
      if (temp_v4 == 1 || temp_v4 == 4) {
        temp_v11 = 0;
        temp_v13[5] = 0;
        btlGetListedSummaryValues((int)*(short *)(*(int *)(param_4 + 0x24) + 0x62),&temp_v11,temp_v13 + 5);
        selectionCopySupportedValue(temp_v11,temp_v13 + 6);
        temp_v8 = *(unsigned int *)(param_4 + 0x20);
        btlEntryHasSkillCategory(temp_v8,temp_v13[6] & 0xff);
      }
    }
    else {
      temp_v13[5] = 0;
      temp_v11 = 0;
      btlGetListedSummaryValues((int)*(short *)(*(int *)(param_4 + 0x24) + 0x62),temp_v13 + 5,&temp_v11);
      if (temp_v11 != 0) {
        temp_v3 = battleGetEntryHalfword(param_3,0x13);
        temp_v5 = (unsigned int)(0 < temp_v3);
      }
      else {
        temp_v3 = battleGetEntryHalfword(param_3,0x12);
        temp_v6 = 0 < temp_v3;
      }
    }
    temp_v10 = (*(unsigned short *)(temp_v0 + 0xfa) & 0x10) >> 4;
    temp_v9 = temp_v5;
    temp_v11 = temp_v8;
    btlTargetSelectSetInfoPanel(temp_v13 + 1,*(unsigned short *)(temp_v0 + 2),temp_v4,temp_v13[0],temp_v6);
    temp_v1 = 1;
  }
  else {
    if (param_4 == 0) {
      return;
    }
    temp_v0 = 2;
    temp_v13[0] = 0xffffffff;
    puVar5 = temp_v13;
    do {
      puVar5[1] = 0xffffffff;
      temp_v0 = temp_v0 - 1;
      puVar5 = puVar5 + 2;
      *puVar5 = 0xffffffff;
    } while (temp_v0 != 0);
    temp_v0 = 0;
    temp_v8 = 0;
    do {
      if ((*(char *)(param_4 + temp_v8 + 0x38) != '\0') &&
         ((*(unsigned int *)(*(int *)(*param_1 + 0x1fc0) + temp_v8 * 0x288) & 0x10) != 0)) {
        temp_v3 = 0;
        if (temp_v3 < temp_v0) {
          do {
            if (temp_v13[temp_v3] == temp_v8) goto LAB_002292ac;
            temp_v3 = temp_v3 + 1;
          } while (temp_v3 < temp_v0);
        }
        temp_v13[temp_v0] = temp_v8;
        temp_v0 = temp_v0 + 1;
LAB_002292ac:
        if (temp_v0 == 5) break;
      }
      temp_v8 = temp_v8 + 1;
    } while ((int)temp_v8 < 0x6d);
    temp_v0 = 0;
    do {
      if (temp_v13[temp_v0] == 0xffffffff) break;
      temp_v9 = (unsigned int)*(short *)(*(int *)(*param_1 + 0x1fc0) + temp_v13[temp_v0] * 0x288 + 8);
      FUN_0023cd08(*param_1,temp_v9,0);
      temp_v14 = in_s0;
      uStack_5c = in_s1;
      uStack_58 = in_s2;
      temp_v4 = *(int *)(*param_1 + 0x1fc0) + temp_v13[temp_v0] * 0x288 + 0xcc;
      temp_v3 = __aeabi_idivmod(*(short *)(temp_v4 + 0xe8) * 100,(int)*(short *)(temp_v4 + 0xea));
      temp_v8 = temp_v9;
      temp_v15 = (unsigned int)(temp_v3 < 0x14);
      temp_v1 = btlGetMainState();
      FUN_00247478(&temp_v16,temp_v1,*(unsigned int *)(param_4 + 0x20));
      switch(*(unsigned short *)(*(int *)(param_4 + 0x28) + 0x14c)) {
      case 7:
      case 9:
      case 10:
      case 0xb:
      case 0xd:
      case 0xe:
        temp_v7 = 0;
        break;
      default:
        temp_v7 = 0;
        temp_v3 = btlGetMainState();
        btlMainFindEntryByListedId(temp_v3,temp_v8);
        if (temp_v3 != 0) {
          temp_v10 = 0;
          temp_v11 = 0;
          btlGetListedSummaryValues((int)*(short *)(*(int *)(param_4 + 0x24) + 0x62),&temp_v10,&temp_v11);
          FUN_00246134(temp_v8,temp_v10,temp_v11,0xffffffff);
          if ((temp_v8 & 0x20000) != 0) {
            temp_v7 = 3;
          }
          else if ((temp_v8 & 0x40000) != 0) {
            temp_v7 = 4;
          }
          else if ((temp_v8 & 0x10000) != 0) {
            temp_v7 = 1;
          }
          else if ((temp_v8 & 0x80000000) != 0) {
            temp_v7 = 2;
          }
          else if ((temp_v8 & 0x80000) != 0) {
            temp_v7 = 5;
          }
        }
      }
      temp_v8 = 0;
      temp_v5 = 0;
      temp_v3 = 0;
      if (temp_v7 != 3) {
        if (temp_v7 == 1 || temp_v7 == 4) {
          temp_v12 = 0;
          temp_v16 = 0;
          btlGetListedSummaryValues((int)*(short *)(*(int *)(param_4 + 0x24) + 0x62),&temp_v12,&temp_v16);
          selectionCopySupportedValue(temp_v12,temp_v17);
          temp_v3 = *(int *)(param_4 + 0x20);
          btlEntryHasSkillCategory(temp_v3,temp_v17[0] & 0xff);
        }
      }
      else {
        temp_v16 = 0;
        temp_v12 = 0;
        btlGetListedSummaryValues((int)*(short *)(*(int *)(param_4 + 0x24) + 0x62),&temp_v16,&temp_v12);
        if (temp_v12 != 0) {
          temp_v2 = battleGetEntryHalfword(temp_v9,0x13);
          temp_v8 = (unsigned int)(0 < temp_v2);
        }
        else {
          temp_v2 = battleGetEntryHalfword(temp_v9,0x12);
          temp_v5 = (unsigned int)(0 < temp_v2);
        }
      }
      temp_v11 = (*(unsigned short *)(temp_v4 + 0xfa) & 0x10) >> 4;
      temp_v9 = temp_v5;
      temp_v10 = temp_v8;
      temp_v12 = temp_v3;
      FUN_002eb340(temp_v0,&temp_v14,*(unsigned short *)(temp_v4 + 2),temp_v7,temp_v15);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 5);
    temp_v1 = 2;
  }
  FUN_002eb278(temp_v1);
  return;
}

} /* extern "C" */
