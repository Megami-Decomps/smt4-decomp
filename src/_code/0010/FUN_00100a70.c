/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00100a70` (_code @ 0x100a70, 0xce bytes) from smt4.cxi.
 * It reads the retail function; it does not reproduce its bytes. build.py only checks that it compiles. */
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

extern int DAT_00100b40; /* 0x100b40 */

/* Supplied declaration required: FUN_00155a08. */
extern unsigned long long FUN_002c615c(int, unsigned int);
/* Supplied declaration required: FUN_002c6810. */


void FUN_00100a70(int *param_1,int param_2,int param_3)

{
/* irregular: 6 native warning(s); review required */
  unsigned char **ppuVar1;
  unsigned int *puVar2;
  unsigned int ****ppppuVar3;
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned char temp_v9;
  unsigned long long temp_v10;
  unsigned char *temp_v11;
  unsigned int uStack_44;
  int iStack_40;
  unsigned int ***temp_v12;
  unsigned int uStack_38;
  int iStack_34;
  int temp_v13;
  unsigned int temp_v14;
  int temp_v15;
  unsigned int temp_v16;
  int *temp_v17;
  int iStack_1c;
  int iStack_18;
  
  temp_v11 = *(unsigned char **)(DAT_00100b40 + 0x100af8);
  uStack_44 = *(unsigned int *)(DAT_00100b40 + 0x100afc);
  iStack_40 = *(int *)(DAT_00100b40 + 0x100b00);
  temp_v12 = *(unsigned int ****)(DAT_00100b40 + 0x100b04);
  uStack_38 = *(unsigned int *)(DAT_00100b40 + 0x100b08);
  iStack_34 = *(int *)(DAT_00100b40 + 0x100b0c);
  temp_v17 = param_1;
  iStack_1c = param_2;
  iStack_18 = param_3;
  temp_v10 = FUN_002c615c(param_2 + 0x1b9b,0x37);
  temp_v6 = (int)temp_v10 - 0x80;
  temp_v5 = (int)((unsigned long long)temp_v10 >> 0x20) - 0x1b;
  temp_v9 = (int)temp_v5 < 0;
  if (temp_v9) {
    temp_v5 = -temp_v5;
  }
  temp_v16 = (unsigned int)temp_v9;
  temp_v7 = 0;
  for (; temp_v5 != 0; temp_v5 = (int)temp_v5 >> 1) {
    if ((temp_v5 & 1) != 0) {
      ppuVar1 = &temp_v11;
      temp_v8 = param_3;
      FUN_002c6810(&temp_v11,temp_v7 * 0xc + DAT_00100b40 + 0x100a7c);
      temp_v11 = (unsigned char *)ppuVar1;
      uStack_44 = temp_v0;
      iStack_40 = temp_v8;
    }
    temp_v7 = temp_v7 + 1;
  }
  temp_v8 = DAT_00100b40 + 0x100ab8;
  temp_v7 = 0;
  for (; temp_v6 != 0; temp_v6 = (int)temp_v6 >> 1) {
    if ((temp_v6 & 1) != 0) {
      puVar2 = (unsigned int *)(temp_v7 * 0x10 + temp_v8);
      temp_v13 = *puVar2;
      temp_v14 = puVar2[1];
      temp_v15 = puVar2[2];
      if (puVar2[3] + param_3 == 0) {
        temp_v15 = temp_v15 + param_3;
      }
      ppppuVar3 = &temp_v12;
      temp_v4 = param_3;
      FUN_002c6810(ppppuVar3,&temp_v13);
      temp_v12 = (unsigned int ***)ppppuVar3;
      uStack_38 = temp_v1;
      iStack_34 = temp_v4;
    }
    temp_v7 = temp_v7 + 1;
  }
  if (temp_v16 != 0) {
    ppppuVar3 = &temp_v12;
    FUN_00155a08(ppppuVar3,&temp_v11);
    temp_v7 = temp_v2;
  }
  else {
    ppppuVar3 = &temp_v12;
    FUN_002c6810(ppppuVar3,&temp_v11);
    temp_v7 = temp_v3;
  }
  *temp_v17 = (int)ppppuVar3;
  temp_v17[1] = temp_v7;
  temp_v17[2] = param_3;
  return;
}
