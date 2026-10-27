/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004fc094` (_code @ 0x4fc094, 0xd48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "battle/BtlMainAccess.h"
#include "romwright_types.h"
#include "battle/btlReflect.h"

extern "C" {

int countersRaiseA(...);

int qsort(int [5], int, int, unsigned char *);
int FUN_001568f8(int, int);
int FUN_003f0e20(unsigned int *, int);
int FUN_00408184(...);

int btlCombatantGetSummaryValues(...);
int btlAdjustPropertyClamped(...);
int FUN_004c8340(...);
int FUN_004fb43c(...);
int FUN_004fd0ec(...);
int FUN_004fd3f0(int, unsigned int, int);
int FUN_004fde5c(int, unsigned int, int, int);
int FUN_004feb50(int, unsigned int, int, int);
int SBORROW4(int, int);
int VectorSignedToFloat(...);

/* stack frame of param_26: 15 slot(s), 60 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp124; /* 0x124: local_124 */
    unsigned int sp128; /* 0x128: local_128 */
    unsigned int sp12C; /* 0x12c: local_12c */
    unsigned int sp130; /* 0x130: local_130 */
    unsigned int sp134; /* 0x134: local_134 */
    unsigned int sp138; /* 0x138: local_138 */
    unsigned int sp13C; /* 0x13c: local_13c */
    unsigned int sp140; /* 0x140: local_140 */
} param_26_stack;

extern unsigned char FUN_00221a7c; /* 0x221a7c */
extern unsigned int g_btlScriptUnit; /* 0x57113c */
extern int g_btlAux; /* 0x573808 */
extern unsigned int DAT_00573c08; /* 0x573c08 */
extern unsigned int DAT_00573c0c; /* 0x573c0c */
extern unsigned int DAT_00573c10; /* 0x573c10 */
extern unsigned int DAT_00573c14; /* 0x573c14 */
extern unsigned int DAT_00573c18; /* 0x573c18 */
extern unsigned int DAT_00573c1c; /* 0x573c1c */
extern unsigned char DAT_0057a574; /* 0x57a574 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: qsort. */
/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: FUN_001568f8. */
extern int btlScriptUnitHasFlags(unsigned int *);
extern int FUN_003eb1cc(void);
extern int idSetFindSubjectIndex(unsigned int, int);
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: FUN_00408184. */
/* Supplied declaration required: countersRaiseA. */
extern int btlStatusFlagsHaveAilment(int);
extern short btlFindEntryValue(int, unsigned int);
/* Supplied declaration required: btlCombatantGetSummaryValues. */
/* Supplied declaration required: btlAdjustPropertyClamped. */
/* Supplied declaration required: FUN_004c8340. */
extern int btlUnitGet(unsigned int);
/* Supplied declaration required: FUN_004fb43c. */
/* Supplied declaration required: FUN_004fd0ec. */
/* Supplied declaration required: FUN_004fd3f0. */
/* Supplied declaration required: FUN_004fde5c. */
/* Supplied declaration required: FUN_004feb50. */


/* WARNING: Removing unreachable block (ram,0x004fc6bc) */
/* WARNING: Type propagation algorithm not settling */

unsigned int
FUN_004fc094(int param_1,unsigned int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            unsigned int param_8,unsigned int param_9,unsigned int param_10,int param_11,
            unsigned int param_12,int param_13,int param_14,int param_15,int param_16,int param_17,
            int param_18,int param_19,int param_20,int param_21,short param_22,int param_23,
            int param_24,int param_25,int param_26)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 19 native warning(s); review required */
  unsigned char temp_v0;
  int *piVar2;
  short temp_v1;
  short temp_v2;
  unsigned int *puVar5;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned char temp_v8;
  unsigned char temp_v9;
  unsigned int in_fpscr;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  unsigned int temp_v13;
  int temp_v14 [5];
  int temp_v15;
  unsigned int *temp_v16;
  int temp_v17;
  unsigned int *temp_v18;
  unsigned int *temp_v19;
  unsigned int temp_v20;
  int temp_v21;
  int temp_v22;
  unsigned char *temp_v23;
  int iStack_34;
  unsigned int uStack_30;
  int temp_v24;
  int iStack_28;
  
  temp_v20 = (*(unsigned int *)(param_4 + 0x50) & 0x10) >> 4;
  iStack_34 = param_1;
  uStack_30 = param_2;
  temp_v24 = param_3;
  iStack_28 = param_4;
  puVar5 = (unsigned int *)reinterpret_cast<int>(btlGetMainState());
  temp_v21 = param_1 + param_17;
  temp_v23 = &DAT_0057a574 + param_14 * 0xc;
  temp_v18 = puVar5;
  FUN_003f0e20(puVar5,(int)*(short *)(param_4 + 0x6a));
  temp_v22 = 1;
  temp_v0 = *(short *)(param_4 + 0x6a) < 0x6d;
  temp_v2 = (short)param_1;
  temp_v19 = puVar5;
  if (temp_v0) {
    if (param_16 == 0) {
      btlAdjustPropertyClamped((int)*(short *)(param_4 + 0x6a),0,1);
    }
    if (param_13 != 1) {
      if (param_11 != 0) {
        temp_v17 = (int)(short)(temp_v2 + param_22 + 1);
        temp_v3 = reinterpret_cast<int>(btlQueueReflectAction(g_btlActionReflect,temp_v17,0,param_2));
        *(unsigned char *)(temp_v3 + 4) = 0x1b;
        *(int *)(temp_v3 + 0x14) = param_4;
        *(int *)(temp_v3 + 0x4c) = param_11;
        temp_v3 = reinterpret_cast<int>(btlQueueReflectAction(g_btlActionReflect,temp_v17,0,param_2));
        *(unsigned char *)(temp_v3 + 4) = 9;
        *(int *)(temp_v3 + 0x14) = param_4;
        *(int *)(temp_v3 + 0x28) = param_11;
        temp_v14[2] = 1;
        temp_v3 = reinterpret_cast<int>(btlQueueReflectAction(g_btlActionReflect,(int)(short)(temp_v2 + param_22),0,param_2));
        *(unsigned char *)(temp_v3 + 4) = 0x26;
        *(int *)(temp_v3 + 0x14) = param_4;
        *(int *)(temp_v3 + 0x28) = temp_v14[2];
        *(int *)(temp_v3 + 0x4c) = param_11;
        temp_v3 = btlStatusFlagsHaveAilment(param_11);
        if (temp_v3 == 0) {
          temp_v22 = 0;
        }
      }
      if (temp_v20 != 0) {
        temp_v4 = 0;
        temp_v3 = 0;
        puVar5 = temp_v18 + 0x7b5;
        do {
          temp_v5 = *puVar5 + temp_v4 * 0x1d0;
          temp_v6 = *(unsigned int *)(temp_v5 + 0x50);
          if ((((temp_v6 & 1) != 0 && (temp_v6 & 2) != 0) && (temp_v6 & 0x10) != 0) &&
             ((*(unsigned int *)(temp_v5 + 0x10c) & 2) == 0)) {
            temp_v3 = temp_v3 + 1;
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < 0x6d);
        temp_v1 = (short)temp_v18[0x7b0];
        temp_v10 = (float)VectorSignedToFloat(param_9,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v11 = (float)VectorSignedToFloat(param_10,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v4 = (int)(char)(((char)((int)temp_v1 / 10) + (char)(temp_v1 >> 7)) -
                           (char)(temp_v1 * 0x6667 >> 0x1f));
        if (temp_v4 < 3) {
          temp_v4 = 3;
        }
        temp_v12 = (float)VectorSignedToFloat(temp_v1 + temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v5 = (int)(char)(int)((temp_v12 * temp_v10) / temp_v11);
        if (temp_v5 < temp_v4) {
          temp_v5 = temp_v4;
        }
        temp_v5 = temp_v3 - temp_v5;
        if (0 < temp_v5) {
          temp_v5 = (int)(char)temp_v5;
          temp_v3 = temp_v5;
        }
        if (0 < temp_v5) {
          temp_v4 = btlUnitGet(g_btlScriptUnit);
          *(unsigned char *)(temp_v4 + 0x59c) = 1;
          temp_v4 = 0;
          if (param_14 == 0) {
            *(unsigned int *)(g_btlAux + 0x339c) = *(unsigned int *)(g_btlAux + 0x339c) | 0x8000;
          }
          temp_v5 = 4;
          do {
            temp_v7 = *puVar5 + temp_v5 * 0x1d0;
            temp_v6 = *(unsigned int *)(temp_v7 + 0x50);
            if (((((temp_v6 & 1) != 0 && (temp_v6 & 0x10) != 0) && (temp_v6 & 2) != 0) &&
                ((*(unsigned int *)(temp_v7 + 0x10c) & 2) == 0 && (*(unsigned int *)(temp_v7 + 0x10c) & 4) == 0)) &&
               (*(short *)(temp_v7 + 0x6a) != *(short *)(param_4 + 0x6a))) {
              temp_v14[temp_v4] = temp_v7;
              temp_v4 = (int)(char)((char)temp_v4 + '\x01');
            }
            temp_v5 = temp_v5 + 1;
          } while (temp_v5 < 0x36);
          qsort(temp_v14,temp_v4,4,&FUN_00221a7c);
          temp_v5 = 0;
          temp_v4 = 0;
          do {
            piVar2 = temp_v14 + temp_v4;
            temp_v5 = (int)(char)((char)temp_v5 + '\x01');
            temp_v9 = SBORROW4(temp_v5,temp_v3);
            temp_v7 = temp_v5 - temp_v3;
            if (temp_v5 < temp_v3) {
              temp_v4 = temp_v4 + 1;
            }
            if (temp_v5 < temp_v3) {
              temp_v9 = SBORROW4(temp_v4,0x32);
              temp_v7 = temp_v4 - 0x32;
            }
            *(unsigned int *)(*piVar2 + 0x10c) = *(unsigned int *)(*piVar2 + 0x10c) | 4;
          } while (temp_v7 < 0 != temp_v9);
        }
        temp_v3 = 4;
        temp_v16 = temp_v18 + 0xc00;
        do {
          temp_v4 = *puVar5 + temp_v3 * 0x1d0;
          temp_v6 = *(unsigned int *)(temp_v4 + 0x50);
          if (((((temp_v6 & 1) != 0 && (temp_v6 & 0x10) != 0) && (temp_v6 & 2) != 0) &&
              ((*(unsigned int *)(temp_v4 + 0x10c) & 2) == 0)) &&
             (*(short *)(temp_v4 + 0x6a) != *(short *)(param_4 + 0x6a) &&
              (*(unsigned int *)(temp_v4 + 0x10c) & 4) != 0)) {
            *(char *)(temp_v16 + 1) = (char)temp_v16[1] + '\x01';
            switch(param_14) {
            case 0:
            case 1:
              *(unsigned int *)(temp_v4 + 0x10c) = *(unsigned int *)(temp_v4 + 0x10c) | 2;
              temp_v14[2] = 0;
              temp_v5 = reinterpret_cast<int>(btlQueueReflectAction(g_btlActionReflect, (int)(short)((short)*(unsigned int *)(temp_v4 + 100) + (short)temp_v21),0, param_2));
              *(unsigned char *)(temp_v5 + 4) = 0x1b;
              *(int *)(temp_v5 + 0x14) = temp_v4;
              *(int *)(temp_v5 + 0x4c) = temp_v14[2];
              FUN_004fd3f0(temp_v21 + *(int *)(temp_v4 + 100),param_2,temp_v4);
              temp_v4 = reinterpret_cast<int>(btlQueueReflectAction(g_btlActionReflect, (int)(short)((short)*(unsigned int *)(param_4 + 100) + temp_v2 + 5),0,param_2 ));
              *(unsigned char *)(temp_v4 + 4) = 0x24;
              break;
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 0xb:
            case 0xc:
            case 0xd:
            case 0xe:
              *(unsigned int *)(temp_v4 + 0x10c) = *(unsigned int *)(temp_v4 + 0x10c) | 2;
              temp_v14[1] = 0;
              temp_v5 = reinterpret_cast<int>(btlQueueReflectAction(g_btlActionReflect, (int)(short)((short)*(unsigned int *)(temp_v4 + 100) + (short)temp_v21),0, param_2));
              *(unsigned char *)(temp_v5 + 4) = 0x1b;
              *(int *)(temp_v5 + 0x14) = temp_v4;
              *(int *)(temp_v5 + 0x4c) = temp_v14[1];
              if (param_14 != 9) {
                temp_v14[3] = param_14;
                if ((*(unsigned int *)(temp_v4 + 0x50) & 1) != 0) {
                  temp_v5 = reinterpret_cast<int>(g_btlActionReflect->head);
                  do {
                    if (temp_v5 == 0) {
                      temp_v5 = reinterpret_cast<int>(btlQueueReflectAction(g_btlActionReflect, (int)(short)((short)*(int *)(temp_v4 + 100) + (short)temp_v21),0,param_2));
                      temp_v14[0] = temp_v5;
                      temp_v5 = reinterpret_cast<int>(btlGetMainState());
                      FUN_001568f8(temp_v5,(int)*(short *)(temp_v4 + 0x6a));
                      temp_v14[4] = temp_v5;
                      temp_v13 = reinterpret_cast<int>(btlGetMainState());
                      temp_v5 = idSetFindSubjectIndex(temp_v13,temp_v4);
                      if (temp_v5 < 0) {
                        temp_v5 = 0;
                      }
                      *(unsigned char *)(temp_v14[0] + 4) = 0x2f;
                      *(int *)(temp_v14[0] + 0x14) = temp_v4;
                      *(int *)(temp_v14[0] + 0x28) = temp_v14[3];
                      *(short *)(temp_v14[0] + 0x24) =
                           (short)*(unsigned int *)(temp_v14[4] + temp_v5 * 4 + 0xc);
                      break;
                    }
                    temp_v6 = (unsigned int)*(unsigned char *)(temp_v5 + 4);
                    temp_v9 = temp_v6 == 0x2f;
                    if (temp_v9) {
                      temp_v6 = *(unsigned int *)(temp_v5 + 8);
                    }
                    temp_v8 = temp_v9 && temp_v6 == param_2;
                    if (temp_v9 && temp_v6 == param_2) {
                      temp_v8 = *(int *)(temp_v5 + 0x14) == temp_v4;
                    }
                    temp_v5 = *(int *)(temp_v5 + 0xc);
                  } while (!temp_v8);
                }
              }
              else {
                FUN_004feb50(temp_v21 + *(int *)(temp_v4 + 100),param_2,temp_v4,9);
              }
              temp_v5 = reinterpret_cast<int>(btlQueueReflectAction(g_btlActionReflect, (int)(short)((short)temp_v21 + (short)*(unsigned int *)(temp_v4 + 100) + *(short *)(temp_v23 + 10)),0,param_2));
              *(unsigned char *)(temp_v5 + 4) = 0x20;
              *(int *)(temp_v5 + 0x28) = param_14;
            }
          }
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < 0x36);
      }
    }
    else {
      temp_v14[0] = 1;
      temp_v14[1] = 1;
      FUN_004fde5c(temp_v21,param_2,param_4,param_14);
    }
    btlAdjustPropertyClamped((int)*(short *)(param_4 + 0x6a),1,1,0);
    if ((-1 < param_18) && (temp_v22 != 0)) {
      temp_v15 = (int)(short)((short)param_18 + temp_v2);
      temp_v13 = 0x3f800000;
      temp_v3 = reinterpret_cast<int>(btlQueueReflectAction(g_btlActionReflect,temp_v15,0,param_2));
      *(unsigned char *)(temp_v3 + 4) = 0x1a;
      *(int *)(temp_v3 + 0x14) = param_4;
      *(unsigned int *)(temp_v3 + 0x30) = temp_v13;
      *(int *)(temp_v3 + 0x4c) = param_5;
      *(short *)(temp_v3 + 0x24) = (short)param_24;
      if (temp_v20 != 0) {
        temp_v3 = 4;
        puVar5 = temp_v18 + 0x7b5;
        do {
          temp_v4 = *puVar5 + temp_v3 * 0x1d0;
          temp_v6 = *(unsigned int *)(temp_v4 + 0x50);
          if ((((temp_v6 & 1) != 0 && (temp_v6 & 0x10) != 0) && (temp_v6 & 2) != 0) &&
             (*(short *)(temp_v4 + 0x6a) != *(short *)(param_4 + 0x6a))) {
            temp_v14[3] = param_5;
            temp_v14[4] = param_24;
            temp_v5 = reinterpret_cast<int>(btlQueueReflectAction(g_btlActionReflect,temp_v15,0,param_2));
            *(unsigned char *)(temp_v5 + 4) = 0x1a;
            *(int *)(temp_v5 + 0x14) = temp_v4;
            *(unsigned int *)(temp_v5 + 0x30) = temp_v13;
            *(int *)(temp_v5 + 0x4c) = temp_v14[3];
            *(short *)(temp_v5 + 0x24) = (short)temp_v14[4];
          }
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < 0x36);
      }
      temp_v3 = btlScriptUnitHasFlags(temp_v18);
      if (temp_v3 != 0) {
        temp_v14[0] = 1;
        temp_v14[1] = 0;
        temp_v14[2] = 0;
        FUN_004fb43c(0,0,0x1000242,0);
      }
    }
    puVar5 = temp_v19;
    if (((-1 < param_19) && (temp_v19 != (unsigned int *)0x0)) && (-1 < param_21)) {
      temp_v3 = reinterpret_cast<int>(btlQueueReflectAction(g_btlActionReflect,(int)(short)((short)param_19 + temp_v2),0,param_2));
      *(unsigned char *)(temp_v3 + 4) = 7;
      *(unsigned int **)(temp_v3 + 0x18) = puVar5;
      *(int *)(temp_v3 + 0x28) = param_21;
    }
  }
  temp_v3 = (int)(short)(temp_v2 + (short)param_20 + (short)param_16);
  param_16 = param_20 + param_1 + param_16;
  if (param_6 >= 0) {
    if (param_7 >= 0) {
      if (((temp_v0) && (-1 < param_20)) && (param_26 != 0)) {
        temp_v14[1] = param_7;
        temp_v14[2] = 4;
        temp_v14[4] = param_15;
        if (param_15 != 0) {
          temp_v14[4] = 1;
        }
        temp_v14[0] = param_6;
        temp_v14[3] = param_25;
        FUN_004fd0ec(param_16,0,param_2,param_4);
        temp_v4 = reinterpret_cast<int>(btlQueueReflectAction(g_btlActionReflect,temp_v3,0,param_2));
        *(unsigned char *)(temp_v4 + 4) = 0x3d;
      }
      temp_v14[3] = 0;
      temp_v4 = reinterpret_cast<int>(btlQueueReflectAction(g_btlActionReflect,temp_v3,0,param_2));
      *(unsigned char *)(temp_v4 + 4) = 0x25;
      *(int *)(temp_v4 + 0x14) = param_4;
      *(int *)(temp_v4 + 0x28) = temp_v14[3];
      *(int *)(temp_v4 + 0x4c) = -param_6;
      temp_v4 = reinterpret_cast<int>(btlQueueReflectAction(g_btlActionReflect,temp_v3,0,param_2));
      *(unsigned char *)(temp_v4 + 4) = 0x25;
      *(int *)(temp_v4 + 0x14) = param_4;
      *(unsigned int *)(temp_v4 + 0x28) = 1;
      *(int *)(temp_v4 + 0x4c) = -param_7;
    }
    else {
LAB_004fca64:
      if (((temp_v0) && (-1 < param_20)) && (param_26 != 0)) {
        temp_v14[1] = 0;
        temp_v14[2] = 0;
        temp_v14[4] = param_15;
        if (param_15 != 0) {
          temp_v14[4] = 1;
        }
        temp_v14[0] = param_6;
        temp_v14[3] = param_25;
        FUN_004fd0ec(param_16,0,param_2,param_4);
        temp_v4 = reinterpret_cast<int>(btlQueueReflectAction(g_btlActionReflect,temp_v3,0,param_2));
        *(unsigned char *)(temp_v4 + 4) = 0x3d;
      }
      temp_v4 = reinterpret_cast<int>(btlQueueReflectAction(g_btlActionReflect,temp_v3,0,param_2));
      *(unsigned char *)(temp_v4 + 4) = 0x25;
      *(int *)(temp_v4 + 0x14) = param_4;
      *(unsigned int *)(temp_v4 + 0x28) = 0;
      *(int *)(temp_v4 + 0x4c) = -param_6;
    }
  }
  else if (param_7 >= 0) {
    if (((temp_v0) && (-1 < param_20)) && (param_26 != 0)) {
      temp_v14[1] = 0;
      temp_v14[2] = 1;
      temp_v14[4] = param_15;
      if (param_15 != 0) {
        temp_v14[4] = 1;
      }
      temp_v14[0] = param_7;
      temp_v14[3] = param_25;
      FUN_004fd0ec(param_16,0,param_2,param_4);
      temp_v4 = reinterpret_cast<int>(btlQueueReflectAction(g_btlActionReflect,temp_v3,0,param_2));
      *(unsigned char *)(temp_v4 + 4) = 0x3d;
    }
    temp_v4 = reinterpret_cast<int>(btlQueueReflectAction(g_btlActionReflect,temp_v3,0,param_2));
    *(unsigned char *)(temp_v4 + 4) = 0x25;
    *(int *)(temp_v4 + 0x14) = param_4;
    *(unsigned int *)(temp_v4 + 0x28) = 1;
    *(int *)(temp_v4 + 0x4c) = -param_7;
  }
  else if (-1 < param_6) goto LAB_004fca64;
  if ((param_15 == 1 && temp_v0) && (param_5 != 0)) {
    if (param_5 != 1) {
      if (param_5 == 2) {
        temp_v4 = reinterpret_cast<int>(btlQueueReflectAction(g_btlActionReflect,temp_v3,0,param_2));
        *(unsigned char *)(temp_v4 + 4) = 8;
        *(int *)(temp_v4 + 0x14) = param_4;
        *(unsigned int *)(temp_v4 + 0x28) = 1;
        temp_v2 = btlFindEntryValue((int)*(short *)(param_4 + 0x6a),1);
        *(short *)(temp_v4 + 0x24) = temp_v2 - 1;
        *(unsigned short *)(temp_v4 + 0x48) = 0;
        *(unsigned char *)(temp_v4 + 5) = *(unsigned char *)(temp_v4 + 5) | 4;
      }
    }
    else {
      temp_v14[1] = 0;
      temp_v14[3] = 0;
      btlCombatantGetSummaryValues((int)*(short *)(temp_v24 + 0x6a),temp_v14 + 1,temp_v14 + 3);
      temp_v14[0] = -1;
      temp_v6 = (unsigned int)*(short *)(temp_v24 + 0x6a);
      FUN_004c8340(temp_v6,(int)*(short *)(param_4 + 0x6a),temp_v14[1],temp_v14[3]);
      temp_v4 = reinterpret_cast<int>(btlQueueReflectAction(g_btlActionReflect,temp_v3,0,param_2));
      *(unsigned char *)(temp_v4 + 4) = 8;
      *(int *)(temp_v4 + 0x14) = param_4;
      *(unsigned int *)(temp_v4 + 0x28) = 2;
      temp_v2 = btlFindEntryValue((int)*(short *)(param_4 + 0x6a),1);
      *(short *)(temp_v4 + 0x24) = temp_v2 - 1;
      *(unsigned short *)(temp_v4 + 0x48) = (unsigned short)((temp_v6 & 0x800000) != 0);
      *(unsigned char *)(temp_v4 + 5) = *(unsigned char *)(temp_v4 + 5) | 4;
    }
  }
  if (((param_23 != 0) && (param_6 >= 0)) && (temp_v19 != (unsigned int *)0x0)) {
    if (!((DAT_00573c18 & *temp_v19) == 0 && (DAT_00573c1c & temp_v19[1]) == 0)) {
      FUN_00408184(6,param_6);
      if (param_5 != 2) {
        if (param_5 == 1) {
          temp_v14[1] = 0;
          temp_v14[2] = 0;
          btlCombatantGetSummaryValues((int)*(short *)(temp_v24 + 0x6a),temp_v14 + 1,temp_v14 + 2);
          temp_v14[0] = -1;
          temp_v6 = (unsigned int)*(short *)(temp_v24 + 0x6a);
          FUN_004c8340(temp_v6,(int)*(short *)(param_4 + 0x6a),temp_v14[1],temp_v14[2]);
          if ((temp_v6 & 0x800000) != 0) {
            FUN_00408184(0x2d,1);
          }
        }
      }
      else {
        FUN_00408184(0x2d,1);
      }
      countersRaiseA(0xe,param_6);
    }
    else if ((*temp_v19 & (DAT_00573c08 | DAT_00573c10)) != 0 ||
             (temp_v19[1] & (DAT_00573c0c | DAT_00573c14)) != 0) {
      FUN_00408184(7,param_6);
    }
  }
  if ((temp_v24 != 0) && ((*(unsigned int *)(temp_v24 + 0x50) & 0x800) != 0)) {
    if ((-1 < param_6) || (param_11 != 0)) {
      temp_v3 = reinterpret_cast<int>(btlQueueReflectAction(g_btlActionReflect,0,0,0));
      *(unsigned char *)(temp_v3 + 4) = 0x41;
      reinterpret_cast<int>(btlGetMainState());
      temp_v4 = FUN_003eb1cc();
      if (temp_v4 == 0) {
        *(unsigned int *)(temp_v3 + 0x28) = 1;
      }
    }
    if (param_5 == 2) {
      temp_v3 = reinterpret_cast<int>(btlQueueReflectAction(g_btlActionReflect,0,0,0));
      *(unsigned char *)(temp_v3 + 4) = 0x41;
      reinterpret_cast<int>(btlGetMainState());
      temp_v4 = FUN_003eb1cc();
      if (temp_v4 == 0) {
        *(unsigned int *)(temp_v3 + 0x28) = 1;
      }
    }
  }
  return 1;
}

} /* extern "C" */
