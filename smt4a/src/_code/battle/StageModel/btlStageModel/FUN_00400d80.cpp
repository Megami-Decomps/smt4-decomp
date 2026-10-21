/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00400d80` (_code @ 0x400d80, 0x354 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(...);
int btlGetMainState(void);
int FUN_00178b04(...);
int FUN_001cd3ec(void);
int FUN_0040ae70(int, int);
int FUN_0040afe0(int, int, int);
int resourceOwnerLoadNamed(int, int *);
int VectorUnsignedToFloat(unsigned int, int);

/* stack frame of param_4: 17 slot(s), 68 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
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
    unsigned int sp68; /* 0x68: local_68 */
} param_4_stack;

extern unsigned char LAB_004010dc; /* 0x4010dc */
extern unsigned char LAB_004010f0; /* 0x4010f0 */
extern unsigned char LAB_00401104; /* 0x401104 */
extern unsigned char LAB_0040111c; /* 0x40111c */
extern int g_handleRegistry; /* 0x56fcc0 */
extern unsigned int g_engineOptionalWork; /* 0x5710d8 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: FUN_00178b04. */
extern unsigned int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);
extern unsigned int dataTableFileGetTable(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001cd3ec. */
extern int FUN_00240c34(unsigned int *);
extern unsigned int modelListInit(void);
/* Supplied declaration required: FUN_0040ae70. */
extern int FUN_0040af60(int);
/* Supplied declaration required: FUN_0040afe0. */
/* Supplied declaration required: resourceOwnerLoadNamed. */


void FUN_00400d80(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_fpscr; 8 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned short *puVar8;
  int temp_v7;
  unsigned int in_fpscr;
  unsigned int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  unsigned int temp_v24;
  unsigned int temp_v25;
  
  *(unsigned int *)(param_1 + 8) = param_2;
  *(unsigned int *)(param_1 + 0xc) = param_3;
  temp_v0 = dataTableFileGetTable(g_engineOptionalWork,0);
  temp_v1 = dataTableGetEntries();
  temp_v2 = dataTableGetCount(temp_v0);
  if (temp_v2 != 0) {
    param_4 = *(unsigned int *)(param_1 + 8);
  }
  temp_v3 = 0;
  if (temp_v3 < temp_v2) {
    do {
      puVar8 = (unsigned short *)(temp_v1 + temp_v3 * 0x50);
      if ((*puVar8 == param_4) && ((unsigned int)puVar8[1] == *(unsigned int *)(param_1 + 0xc))) {
        temp_v2 = temp_v1 + temp_v3 * 0x50;
        if (temp_v2 != 0) {
          temp_v3 = (unsigned int)*(unsigned short *)(temp_v2 + 0x4c);
          if (temp_v3 != 0) {
            temp_v2 = (unsigned int)*(unsigned short *)(temp_v2 + 0x4e);
          }
          if (temp_v3 != 0 && temp_v2 != 0) {
            param_3 = temp_v2;
            param_2 = temp_v3;
          }
        }
        break;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < temp_v2);
  }
  temp_v10 = 0;
  temp_v11 = 0;
  temp_v12 = 0;
  temp_v13 = 0;
  temp_v14 = 0;
  temp_v15 = 0;
  temp_v16 = 0;
  temp_v17 = 0;
  temp_v18 = 0;
  temp_v19 = 0;
  temp_v20 = 0;
  temp_v21 = 0;
  temp_v22 = 0;
  temp_v23 = 0;
  temp_v24 = 0;
  temp_v25 = 0;
  btlGetMainState();
  temp_v1 = g_handleRegistry;
  textFormatBuffer(&temp_v10,&LAB_004010f0,&LAB_004010dc,param_2,param_3);
  temp_v4 = FUN_00240c34((unsigned int *)&temp_v10);
  if (temp_v4 == 0) {
    textFormatBuffer(&temp_v10,&LAB_004010f0,&LAB_004010dc,1,1);
  }
  resourceOwnerLoadNamed(temp_v1,&temp_v10);
  temp_v4 = FUN_0040af60(temp_v1);
  if (temp_v4 != 0) {
    if ((param_2 != 8) || (!(param_3 == 6 || param_3 == 7))) {
      FUN_0040ae70(temp_v1,0);
    }
    else {
      FUN_0040afe0(temp_v1,3,0);
    }
    *(unsigned char *)(*(int *)(temp_v1 + 0x14) + 0xc4) = 0;
    *(unsigned int *)(*(int *)(temp_v1 + 4) + 4) = *(unsigned int *)(*(int *)(temp_v1 + 4) + 4) | 2;
  }
  textFormatBuffer(&temp_v10,&LAB_00401104,&LAB_004010dc,param_2,param_3);
  temp_v1 = FUN_00240c34((unsigned int *)&temp_v10);
  if (temp_v1 == 0) {
    textFormatBuffer(&temp_v10,&LAB_00401104,&LAB_004010dc,1,1);
    *(unsigned int *)(param_1 + 8) = 1;
    *(unsigned int *)(param_1 + 0xc) = 1;
  }
  temp_v2 = 0xd9;
  temp_v1 = 0x20;
  FUN_00178b04(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\StageModel\\btlStageModel.cpp");
  temp_v0 = 0;
  if (temp_v1 != 0) {
    temp_v0 = modelListInit();
  }
  *(unsigned int *)(param_1 + 0x1c) = temp_v0;
  FUN_001cd3ec();
  temp_v0 = dataTableFileGetTable(g_engineOptionalWork,0);
  temp_v1 = dataTableGetEntries();
  temp_v3 = dataTableGetCount(temp_v0);
  if (temp_v3 != 0) {
    temp_v2 = *(unsigned int *)(param_1 + 8);
  }
  temp_v5 = 0;
  if (temp_v3 != 0) {
    while ((puVar8 = (unsigned short *)(temp_v1 + temp_v5 * 0x50), *puVar8 != temp_v2 ||
           ((unsigned int)puVar8[1] != *(unsigned int *)(param_1 + 0xc)))) {
      temp_v5 = temp_v5 + 1;
      if (temp_v3 <= temp_v5) {
        return;
      }
    }
    temp_v1 = temp_v1 + temp_v5 * 0x50;
    if (temp_v1 != 0) {
      temp_v4 = 0;
      do {
        temp_v7 = temp_v1 + temp_v4 * 0x24;
        if (*(char *)(temp_v7 + 4) != '0') {
          textFormatBuffer(&temp_v10,&LAB_0040111c,&LAB_004010dc,temp_v7 + 4);
          temp_v6 = 0x20;
          FUN_00178b04(0x20,
                       "c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\StageModel\\btlStageModel.cpp",
                       0xf6);
          temp_v0 = 0;
          if (temp_v6 != 0) {
            temp_v0 = modelListInit();
          }
          *(unsigned int *)(param_1 + temp_v4 * 4 + 0x20) = temp_v0;
          FUN_001cd3ec();
          temp_v6 = param_1 + temp_v4 * 0xc;
          temp_v9 = VectorUnsignedToFloat
                             ((unsigned int)*(unsigned short *)(temp_v7 + 0x22),(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v8 = VectorUnsignedToFloat
                             ((unsigned int)*(unsigned short *)(temp_v7 + 0x26),(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v0 = VectorUnsignedToFloat
                            ((unsigned int)*(unsigned short *)(temp_v7 + 0x24),(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v6 + 0x34) = temp_v9;
          *(unsigned int *)(temp_v6 + 0x38) = temp_v0;
          *(unsigned int *)(temp_v6 + 0x3c) = temp_v8;
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 2);
    }
  }
  return;
}

} /* extern "C" */
