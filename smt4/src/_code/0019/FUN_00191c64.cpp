/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00191c64` (_code @ 0x191c64, 0x190 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002b63ac(void);


void FUN_00191c64(int param_1)

{
  short temp_v0;
  short temp_v1;
  short temp_v2;
  short temp_v3;
  short temp_v4;
  short temp_v5;
  short temp_v6;
  short temp_v7;
  short temp_v8;
  short temp_v9;
  int temp_v10;
  int *piVar12;
  
  temp_v10 = FUN_002b63ac();
  piVar12 = (int *)(param_1 + 0xcf78);
  temp_v0 = *(short *)(temp_v10 + 0x12);
  temp_v1 = *(short *)(param_1 + *piVar12 * 0x620 + 0x366a);
  temp_v10 = FUN_002b63ac();
  *(unsigned short *)(temp_v10 + 0x12) = *(unsigned short *)(param_1 + *piVar12 * 0x620 + 0x366a);
  temp_v10 = FUN_002b63ac();
  temp_v2 = *(short *)(temp_v10 + 0x14);
  temp_v3 = *(short *)(param_1 + *piVar12 * 0x620 + 0x366c);
  temp_v10 = FUN_002b63ac();
  *(unsigned short *)(temp_v10 + 0x14) = *(unsigned short *)(param_1 + *piVar12 * 0x620 + 0x366c);
  temp_v10 = FUN_002b63ac();
  temp_v4 = *(short *)(temp_v10 + 0x16);
  temp_v5 = *(short *)(param_1 + *piVar12 * 0x620 + 0x366e);
  temp_v10 = FUN_002b63ac();
  *(unsigned short *)(temp_v10 + 0x16) = *(unsigned short *)(param_1 + *piVar12 * 0x620 + 0x366e);
  temp_v10 = FUN_002b63ac();
  temp_v6 = *(short *)(temp_v10 + 0x18);
  temp_v7 = *(short *)(param_1 + *piVar12 * 0x620 + 0x3670);
  temp_v10 = FUN_002b63ac();
  *(unsigned short *)(temp_v10 + 0x18) = *(unsigned short *)(param_1 + *piVar12 * 0x620 + 0x3670);
  temp_v10 = FUN_002b63ac();
  temp_v8 = *(short *)(temp_v10 + 0x1a);
  temp_v9 = *(short *)(param_1 + *piVar12 * 0x620 + 0x3672);
  temp_v10 = FUN_002b63ac();
  *(unsigned short *)(temp_v10 + 0x1a) = *(unsigned short *)(param_1 + *piVar12 * 0x620 + 0x3672);
  *(int *)(param_1 + 0xcfcc) =
       *(int *)(param_1 + 0xcfcc) +
       ((int)temp_v0 - (int)temp_v1) + ((int)temp_v2 - (int)temp_v3) + ((int)temp_v4 - (int)temp_v5) +
       ((int)temp_v6 - (int)temp_v7) + ((int)temp_v8 - (int)temp_v9);
  return;
}

} /* extern "C" */
