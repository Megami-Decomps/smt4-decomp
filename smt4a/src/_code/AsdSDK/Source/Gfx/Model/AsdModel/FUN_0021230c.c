/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021230c` (_code @ 0x21230c, 0x1a4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_3_stack;

extern int DAT_005b3c34; /* 0x5b3c34 */

#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
/* Supplied declaration required: FUN_001630d4. */
/* Supplied declaration required: FUN_0019cbf8. */
/* Supplied declaration required: FUN_0019d57c. */
extern unsigned int FUN_001ad6fc(void);
/* Supplied declaration required: FUN_001b6d08. */
/* Supplied declaration required: FUN_00386548. */


void FUN_0021230c(unsigned int *param_1,unsigned int *param_2,int param_3)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  unsigned int *puVar4;
  int *piVar5;
  unsigned int *puVar6;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int uStack_38;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  
  puVar2 = (unsigned int *)&temp_v2;
  puVar4 = (unsigned int *)&temp_v2;
  if (param_3 != 1) {
    if (param_3 == 0) {
      temp_v1 = FUN_001ad6fc();
      temp_v2 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&temp_v2 + 2)),0x101);
      temp_v5 = 0x834;
      temp_v4 = 1;
      temp_v6 = 0;
      temp_v7 = 0;
      temp_v8 = 0;
      temp_v3 = 4;
      uStack_38 = 8;
      FUN_001b6d08(&temp_v2,0,*(unsigned int *)(param_2[0xb] + 8),temp_v1);
      param_1[0xb] = (unsigned int)puVar4;
    }
  }
  else {
    temp_v0 = *(int *)(*(int *)(param_2[0xb] + 0x220) + 8);
    *(unsigned int *)(temp_v0 + 0x28) = *(unsigned int *)(temp_v0 + 0x28) | 1;
    temp_v1 = FUN_001ad6fc();
    temp_v2 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&temp_v2 + 2)),0x101);
    temp_v4 = 1;
    temp_v5 = 0;
    temp_v3 = 4;
    uStack_38 = 8;
    temp_v8 = *(unsigned int *)(param_2[0xb] + 0x220);
    temp_v6 = param_2[0xb];
    temp_v7 = param_2[0xb];
    FUN_001b6d08(&temp_v2,0,*(unsigned int *)(param_2[0xb] + 8),temp_v1);
    param_1[0xb] = (unsigned int)puVar2;
  }
  if ((*param_2 & 2) != 0) {
    FUN_00386548(param_1[0xb]);
    *param_1 = *param_1 | 2;
    DAT_005b3c34 = DAT_005b3c34 + 1;
  }
  piVar5 = (int *)param_2[1];
  param_1[1] = (unsigned int)piVar5;
  *piVar5 = *piVar5 + 1;
  param_1[10] = 1;
  temp_v2 = 1;
  puVar6 = (unsigned int *)0x100;
  FUN_001630d4(0x100,0x100,0,param_1[10] << 2);
  param_1[9] = (unsigned int)puVar6;
  *puVar6 = param_1[0xb];
  if (param_3 == 0) {
    FUN_0019cbf8();
  }
  FUN_0019d57c(param_1,*(unsigned int *)(param_1[1] + 0xc));
  return;
}
