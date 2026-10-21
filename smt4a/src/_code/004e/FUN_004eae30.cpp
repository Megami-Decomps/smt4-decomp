/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004eae30` (_code @ 0x4eae30, 0x5f4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlGetMainState(void);
int FUN_00368cac(...);
int FUN_00368d74(...);
int FUN_00368e10(...);
int FUN_003e7fa4(...);
int FUN_003e8bb0(...);
int FUN_003f0e20(...);
int FUN_004c0f74(...);
int btlFindEntryValue(...);
int kindIdStore(...);
int btlCombatantGetSummaryValues(...);
int FUN_004c8340(...);

/* stack frame of param_4: 13 slot(s), 52 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
} param_4_stack;

extern int g_btlAction; /* 0x571138 */
extern unsigned int DAT_00571168; /* 0x571168 */
extern unsigned int DAT_0057116c; /* 0x57116c */

/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: FUN_00368cac. */
/* Supplied declaration required: FUN_00368d74. */
/* Supplied declaration required: FUN_00368e10. */
/* Supplied declaration required: FUN_003e7fa4. */
/* Supplied declaration required: FUN_003e8bb0. */
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: FUN_004c0f74. */
/* Supplied declaration required: btlFindEntryValue. */
/* Supplied declaration required: kindIdStore. */
/* Supplied declaration required: btlCombatantGetSummaryValues. */
/* Supplied declaration required: FUN_004c8340. */
extern int __aeabi_idivmod(int, unsigned int);


void FUN_004eae30(unsigned int *param_1,int param_2,int param_3,int param_4)

{
/* irregular: 1 goto(s); irregular input(s): in_s0, in_s1, in_s2; 12 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  unsigned int temp_v3;
  unsigned int *puVar6;
  int temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  int temp_v7;
  unsigned char temp_v8;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11 [4];
  unsigned char temp_v12 [12];
  unsigned char temp_v13 [4];
  int temp_v14;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int temp_v15;
  int temp_v16;
  unsigned int temp_v17 [13];
  
  if (param_2 == 0) {
    FUN_00368cac(0);
    return;
  }
  if (param_3 != -1) {
    if (g_btlAction == param_3) {
      return;
    }
    temp_v0 = *(int *)(*param_1 + 0x1ed4);
    g_btlAction = param_3;
    FUN_003e7fa4(*param_1,param_3,0);
    temp_v1 = *param_1;
    FUN_003f0e20(temp_v1,(int)*(short *)(temp_v0 + param_3 * 0x1d0 + 0x6a));
    temp_v0 = __aeabi_idivmod(*(int *)(temp_v1 + 600) * 100,*(unsigned int *)(temp_v1 + 0x25c));
    temp_v11[2] = (unsigned int)(temp_v0 < 0x14);
    temp_v2 = btlGetMainState();
    FUN_003e8bb0(temp_v13,temp_v2,*(unsigned int *)(param_4 + 0x20));
    switch(*(unsigned short *)(*(int *)(param_4 + 0x28) + 0x1be)) {
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
      temp_v0 = btlGetMainState();
      FUN_003f0e20(temp_v0,param_3);
      if (temp_v0 != 0) {
        temp_v9 = 0;
        temp_v10 = 0;
        btlCombatantGetSummaryValues((int)*(short *)(*(int *)(param_4 + 0x24) + 0x6a),&temp_v9,&temp_v10);
        temp_v3 = (unsigned int)*(short *)(*(int *)(param_4 + 0x24) + 0x6a);
        FUN_004c8340(temp_v3,param_3,temp_v9,temp_v10,0xffffffff);
        if ((temp_v3 & 0x20000) != 0) {
          temp_v4 = 3;
        }
        else if ((temp_v3 & 0x40000) != 0) {
          temp_v4 = 4;
        }
        else if ((temp_v3 & 0x10000) != 0) {
          temp_v4 = 1;
        }
        else if ((temp_v3 & 0x800000) != 0) {
          temp_v4 = 2;
        }
        else if ((temp_v3 & 0x80000) != 0) {
          temp_v4 = 5;
        }
      }
    }
    temp_v8 = 0;
    temp_v6 = 0;
    temp_v3 = 0;
    if (temp_v4 != 3) {
      if (temp_v4 == 1 || temp_v4 == 4) {
        temp_v9 = 0;
        temp_v10 = 0;
        btlCombatantGetSummaryValues((int)*(short *)(*(int *)(param_4 + 0x24) + 0x6a),&temp_v9,&temp_v10);
        kindIdStore(temp_v9,temp_v11);
        temp_v3 = *(unsigned int *)(param_4 + 0x20);
        FUN_004c0f74(temp_v3,temp_v11[0] & 0xff);
      }
    }
    else {
      temp_v10 = 0;
      temp_v9 = 0;
      btlCombatantGetSummaryValues((int)*(short *)(*(int *)(param_4 + 0x24) + 0x6a),&temp_v10,&temp_v9);
      if (temp_v9 != 0) {
        temp_v0 = btlFindEntryValue(param_3,0x15);
        temp_v8 = 0 < temp_v0;
      }
      else {
        temp_v0 = btlFindEntryValue(param_3,0x14);
        temp_v6 = 0 < temp_v0;
      }
    }
    temp_v9 = (*(unsigned short *)(temp_v1 + 0x274) & 0x10) >> 4;
    temp_v10 = temp_v3;
    temp_v11[0] = temp_v1;
    FUN_00368e10(temp_v12,*(unsigned short *)(temp_v1 + 0x166),temp_v4,temp_v11[2],temp_v6,temp_v8);
    temp_v2 = 1;
  }
  else {
    if (param_4 == 0) {
      return;
    }
    puVar4 = temp_v11 + 1;
    temp_v0 = 2;
    temp_v11[1] = 0xffffffff;
    puVar6 = puVar4;
    do {
      puVar6[1] = 0xffffffff;
      temp_v0 = temp_v0 - 1;
      puVar6 = puVar6 + 2;
      *puVar6 = 0xffffffff;
    } while (temp_v0 != 0);
    temp_v0 = 0;
    temp_v1 = 0;
    do {
      if ((*(char *)(param_4 + temp_v1 + 0x38) != '\0') &&
         (puVar6 = (unsigned int *)(*(int *)(*param_1 + 0x1ffc) + temp_v1 * 0x408),
         (*puVar6 & DAT_00571168) != 0 || (puVar6[1] & DAT_0057116c) != 0)) {
        temp_v4 = 0;
        if (temp_v4 < temp_v0) {
          do {
            if (puVar4[temp_v4] == temp_v1) goto LAB_004eafdc;
            temp_v4 = temp_v4 + 1;
          } while (temp_v4 < temp_v0);
        }
        puVar4[temp_v0] = temp_v1;
        temp_v0 = temp_v0 + 1;
LAB_004eafdc:
        if (temp_v0 == 5) break;
      }
      temp_v1 = temp_v1 + 1;
    } while ((int)temp_v1 < 0x6d);
    temp_v0 = 0;
    do {
      if (temp_v11[temp_v0 + 1] == 0xffffffff) break;
      temp_v9 = (unsigned int)*(short *)(*(int *)(*param_1 + 0x1ffc) + temp_v11[temp_v0 + 1] * 0x408 + 8);
      FUN_003e7fa4(*param_1,temp_v9,0);
      temp_v14 = in_s0;
      uStack_6c = in_s1;
      uStack_68 = in_s2;
      temp_v5 = *(int *)(*param_1 + 0x1ffc) + temp_v11[temp_v0 + 1] * 0x408 + 0x164;
      temp_v4 = __aeabi_idivmod(*(int *)(temp_v5 + 0xf4) * 100,*(unsigned int *)(temp_v5 + 0xf8));
      temp_v1 = temp_v9;
      temp_v15 = (unsigned int)(temp_v4 < 0x14);
      temp_v2 = btlGetMainState();
      FUN_003e8bb0(&temp_v16,temp_v2,*(unsigned int *)(param_4 + 0x20));
      switch(*(unsigned short *)(*(int *)(param_4 + 0x28) + 0x1be)) {
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
        temp_v4 = btlGetMainState();
        FUN_003f0e20(temp_v4,temp_v1);
        if (temp_v4 != 0) {
          temp_v10 = 0;
          temp_v11[0] = 0;
          btlCombatantGetSummaryValues((int)*(short *)(*(int *)(param_4 + 0x24) + 0x6a),&temp_v10,temp_v11);
          temp_v3 = (unsigned int)*(short *)(*(int *)(param_4 + 0x24) + 0x6a);
          FUN_004c8340(temp_v3,temp_v1,temp_v10,temp_v11[0],0xffffffff);
          if ((temp_v3 & 0x20000) != 0) {
            temp_v7 = 3;
          }
          else if ((temp_v3 & 0x40000) != 0) {
            temp_v7 = 4;
          }
          else if ((temp_v3 & 0x10000) != 0) {
            temp_v7 = 1;
          }
          else if ((temp_v3 & 0x800000) != 0) {
            temp_v7 = 2;
          }
          else if ((temp_v3 & 0x80000) != 0) {
            temp_v7 = 5;
          }
        }
      }
      temp_v3 = 0;
      temp_v8 = 0;
      temp_v1 = 0;
      if (temp_v7 != 3) {
        if (temp_v7 == 1 || temp_v7 == 4) {
          temp_v11[0] = 0;
          temp_v16 = 0;
          btlCombatantGetSummaryValues((int)*(short *)(*(int *)(param_4 + 0x24) + 0x6a),temp_v11,&temp_v16);
          kindIdStore(temp_v11[0],temp_v17);
          temp_v1 = *(unsigned int *)(param_4 + 0x20);
          FUN_004c0f74(temp_v1,temp_v17[0] & 0xff);
        }
      }
      else {
        temp_v16 = 0;
        temp_v11[0] = 0;
        btlCombatantGetSummaryValues((int)*(short *)(*(int *)(param_4 + 0x24) + 0x6a),&temp_v16,temp_v11);
        if (temp_v11[0] != 0) {
          temp_v4 = btlFindEntryValue(temp_v9,0x15);
          temp_v3 = (unsigned int)(0 < temp_v4);
        }
        else {
          temp_v4 = btlFindEntryValue(temp_v9,0x14);
          temp_v8 = 0 < temp_v4;
        }
      }
      temp_v10 = (*(unsigned short *)(temp_v5 + 0x110) & 0x10) >> 4;
      temp_v9 = temp_v3;
      temp_v11[0] = temp_v1;
      FUN_00368d74(temp_v0,&temp_v14,*(unsigned short *)(temp_v5 + 2),temp_v7,temp_v15,temp_v8);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 5);
    temp_v2 = 2;
  }
  FUN_00368cac(temp_v2);
  return;
}

} /* extern "C" */
