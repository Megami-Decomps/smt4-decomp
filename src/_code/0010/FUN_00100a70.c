/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00100a70` (_code @ 0x100a70, 0xce bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp48; /* 0x48: local_48 */
} param_3_stack;

/* Supplied declaration required: FUN_00155afc. */
extern unsigned long long FUN_002c5f60(int, unsigned int);
/* Supplied declaration required: FUN_002c6614. */


void FUN_00100a70(int *param_1,int param_2,int param_3)

{
/* irregular: 6 native warning(s); review required */
  unsigned char **ppuVar1;
  int temp_v0;
  unsigned int ****ppppuVar3;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned char temp_v8;
  unsigned long long temp_v9;
  unsigned char *temp_v10;
  unsigned int uStack_44;
  int iStack_40;
  unsigned int ***temp_v11;
  unsigned int uStack_38;
  int iStack_34;
  int temp_v12;
  unsigned int temp_v13;
  int temp_v14;
  unsigned int temp_v15;
  int *temp_v16;
  int iStack_1c;
  int iStack_18;
  
  temp_v10 = (unsigned char *)0x3fff;
  uStack_44 = 0x80000000;
  iStack_40 = 0;
  temp_v11 = (unsigned int ***)0x3fff;
  uStack_38 = 0x80000000;
  iStack_34 = 0;
  temp_v16 = param_1;
  iStack_1c = param_2;
  iStack_18 = param_3;
  temp_v9 = FUN_002c5f60(param_2 + 0x1b9b,0x37);
  temp_v6 = (int)temp_v9 - 0x80;
  temp_v5 = (int)((unsigned long long)temp_v9 >> 0x20) - 0x1b;
  temp_v8 = (int)temp_v5 < 0;
  if (temp_v8) {
    temp_v5 = -temp_v5;
  }
  temp_v15 = (unsigned int)temp_v8;
  temp_v7 = 0;
  for (; temp_v5 != 0; temp_v5 = (int)temp_v5 >> 1) {
    if ((temp_v5 & 1) != 0) {
      ppuVar1 = &temp_v10;
      temp_v0 = param_3;
      FUN_002c6614(&temp_v10,temp_v7 * 0xc + 0x420654);
      temp_v10 = (unsigned char *)ppuVar1;
      uStack_44 = temp_v1;
      iStack_40 = temp_v0;
    }
    temp_v7 = temp_v7 + 1;
  }
  temp_v7 = 0;
  for (; temp_v6 != 0; temp_v6 = (int)temp_v6 >> 1) {
    if ((temp_v6 & 1) != 0) {
      temp_v0 = temp_v7 * 0x10;
      temp_v12 = *(unsigned int *)(temp_v0 + 0x420690);
      temp_v13 = *(unsigned int *)(temp_v0 + 0x420694);
      temp_v14 = *(int *)(temp_v0 + 0x420698);
      if (*(int *)(temp_v0 + 0x42069c) + param_3 == 0) {
        temp_v14 = temp_v14 + param_3;
      }
      ppppuVar3 = &temp_v11;
      temp_v0 = param_3;
      FUN_002c6614(ppppuVar3,&temp_v12);
      temp_v11 = (unsigned int ***)ppppuVar3;
      uStack_38 = temp_v2;
      iStack_34 = temp_v0;
    }
    temp_v7 = temp_v7 + 1;
  }
  if (temp_v15 != 0) {
    ppppuVar3 = &temp_v11;
    FUN_00155afc(ppppuVar3,&temp_v10);
    temp_v7 = temp_v3;
  }
  else {
    ppppuVar3 = &temp_v11;
    FUN_002c6614(ppppuVar3,&temp_v10);
    temp_v7 = temp_v4;
  }
  *temp_v16 = (int)ppppuVar3;
  temp_v16[1] = temp_v7;
  temp_v16[2] = param_3;
  return;
}
