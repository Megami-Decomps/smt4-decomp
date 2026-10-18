/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020db10` (_code @ 0x20db10, 0x21c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00447e88; /* 0x447e88 */
extern int DAT_0049fb34; /* 0x49fb34 */
extern int DAT_0049fb38; /* 0x49fb38 */
extern unsigned int DAT_0049fbb4; /* 0x49fbb4 */
extern unsigned int DAT_0049fbb8; /* 0x49fbb8 */
extern unsigned int DAT_0049fbbc; /* 0x49fbbc */
extern unsigned int DAT_0049fbc0; /* 0x49fbc0 */
extern unsigned int DAT_0049fbc4; /* 0x49fbc4 */
extern unsigned int DAT_0049fbc8; /* 0x49fbc8 */
extern unsigned int DAT_0049fbcc; /* 0x49fbcc */
extern unsigned int DAT_0049fbd0; /* 0x49fbd0 */
extern unsigned int DAT_0049fbd4; /* 0x49fbd4 */
extern unsigned int DAT_0049fbd8; /* 0x49fbd8 */
extern unsigned int DAT_0049fbdc; /* 0x49fbdc */
extern unsigned int DAT_0049fbe0; /* 0x49fbe0 */
extern int DAT_0049fd08; /* 0x49fd08 */
extern int DAT_0049fd0c; /* 0x49fd0c */

/* Supplied declaration required: FUN_0025318c. */
/* Supplied declaration required: FUN_002531a4. */
extern unsigned int FUN_0025bc18(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002a0428. */
extern unsigned short *FUN_002b63ac(void);
extern short *FUN_002d4ef4(int);
extern short *FUN_002d4f2c(int);


void FUN_0020db10(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned short *puVar1;
  unsigned short *puVar2;
  short *psVar3;
  unsigned int temp_v0;
  unsigned int *puVar5;
  int temp_v1;
  int temp_v2;
  
  puVar1 = (unsigned short *)FUN_002b63ac();
  temp_v1 = 0;
  puVar2 = puVar1;
  FUN_002531a4();
  if (0 < (int)puVar2) {
    do {
      psVar3 = (short *)FUN_002d4f2c(temp_v1);
      if ((int)*psVar3 == (unsigned int)*puVar1) {
        DAT_0049fb34 = DAT_0049fd08;
        if (DAT_0049fd08 == -1) {
          DAT_0049fb34 = (int)psVar3[1];
        }
        break;
      }
      temp_v1 = temp_v1 + 1;
      FUN_002531a4();
    } while (temp_v1 < (int)psVar3);
  }
  temp_v1 = DAT_0049fd08;
  if (DAT_0049fd08 == -1) {
    temp_v1 = DAT_0049fb34;
  }
  if (temp_v1 != 0) {
    if (temp_v1 != 1) {
      if (temp_v1 != 2) {
        if (temp_v1 == 3) {
          temp_v0 = FUN_0025bc18(DAT_0049fbcc,DAT_0049fbd0,0x1c0);
          *(unsigned int *)(DAT_00447e88 + 0x164) = temp_v0;
        }
      }
      else {
        temp_v0 = FUN_0025bc18(DAT_0049fbc4,DAT_0049fbc8,0x1c0);
        *(unsigned int *)(DAT_00447e88 + 0x164) = temp_v0;
      }
    }
    else {
      temp_v0 = FUN_0025bc18(DAT_0049fbbc,DAT_0049fbc0,0x1c0);
      *(unsigned int *)(DAT_00447e88 + 0x164) = temp_v0;
    }
  }
  else {
    temp_v0 = FUN_0025bc18(DAT_0049fbb4,DAT_0049fbb8,0x1c0);
    *(unsigned int *)(DAT_00447e88 + 0x164) = temp_v0;
  }
  FUN_002a0428(*(unsigned int *)(DAT_00447e88 + 0x164),1);
  temp_v2 = 0;
  puVar5 = *(unsigned int **)(DAT_00447e88 + 0x164);
  *puVar5 = *puVar5 | 2;
  *(unsigned char *)(*(int *)(puVar5[2] + 0x2c) + 0x1f6) = 0;
  temp_v1 = DAT_00447e88;
  *(unsigned int *)(DAT_00447e88 + 0x168) = 0;
  *(unsigned int *)(temp_v1 + 0x16c) = 0xffffffff;
  temp_v0 = FUN_0025bc18(DAT_0049fbd4,DAT_0049fbd8,0x1c0);
  *(unsigned int *)(DAT_00447e88 + 0x178) = temp_v0;
  FUN_002a0428(temp_v0,1);
  puVar5 = *(unsigned int **)(DAT_00447e88 + 0x178);
  *puVar5 = *puVar5 | 2;
  *(unsigned char *)(*(int *)(puVar5[2] + 0x2c) + 0x1f6) = 0;
  temp_v0 = FUN_0025bc18(DAT_0049fbdc,DAT_0049fbe0,0x1c0);
  *(unsigned int *)(DAT_00447e88 + 0x17c) = temp_v0;
  FUN_002a0428(temp_v0,1);
  puVar5 = *(unsigned int **)(DAT_00447e88 + 0x17c);
  *puVar5 = *puVar5 | 2;
  temp_v1 = *(int *)(puVar5[2] + 0x2c);
  *(unsigned char *)(temp_v1 + 0x1f6) = 0;
  FUN_0025318c();
  if (0 < temp_v1) {
    while (psVar3 = (short *)FUN_002d4ef4(temp_v2), (int)*psVar3 != (unsigned int)puVar1[4]) {
      temp_v2 = temp_v2 + 1;
      FUN_0025318c();
      if ((int)psVar3 <= temp_v2) {
        return;
      }
    }
    if (DAT_0049fd0c == -1) {
      DAT_0049fb38 = (int)psVar3[1];
    }
    else {
      DAT_0049fb38 = DAT_0049fd0c;
    }
  }
  return;
}
