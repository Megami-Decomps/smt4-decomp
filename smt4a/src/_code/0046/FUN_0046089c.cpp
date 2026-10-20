/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0046089c` (_code @ 0x46089c, 0x134 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0017572c(...);
int FUN_0019102c(int, int);

extern int FUN_00175678(void);
/* Supplied declaration required: FUN_0017572c. */
/* Supplied declaration required: FUN_0019102c. */


void FUN_0046089c(int param_1,unsigned int *param_2,unsigned int *param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  
  temp_v2 = FUN_00175678();
  temp_v4 = temp_v2;
  FUN_0019102c(temp_v2,0x10);
  *(unsigned int *)(temp_v4 + 0xc) = *(unsigned int *)(temp_v2 + 0x184);
  *(unsigned char *)(temp_v4 + 4) = 0xf;
  *(int *)(temp_v4 + 0x10) = param_1 + 0x128;
  temp_v1 = param_2[9];
  temp_v5 = param_2[1];
  temp_v6 = param_2[2];
  temp_v7 = param_2[3];
  temp_v8 = param_2[4];
  temp_v9 = param_2[5];
  temp_v10 = param_2[6];
  temp_v11 = param_2[7];
  temp_v12 = param_2[8];
  temp_v13 = *param_3;
  *(unsigned int *)(temp_v4 + 0x14) = *param_2;
  *(unsigned int *)(temp_v4 + 0x18) = temp_v5;
  *(unsigned int *)(temp_v4 + 0x1c) = temp_v6;
  *(unsigned int *)(temp_v4 + 0x20) = temp_v7;
  *(unsigned int *)(temp_v4 + 0x24) = temp_v8;
  *(unsigned int *)(temp_v4 + 0x28) = temp_v9;
  *(unsigned int *)(temp_v4 + 0x2c) = temp_v10;
  *(unsigned int *)(temp_v4 + 0x30) = temp_v11;
  *(unsigned int *)(temp_v4 + 0x34) = temp_v12;
  *(unsigned int *)(temp_v4 + 0x38) = temp_v1;
  *(unsigned int *)(temp_v4 + 0x3c) = temp_v13;
  FUN_0017572c(temp_v2);
  temp_v4 = param_3[2];
  if (0 < temp_v4) {
    temp_v0 = *(unsigned char *)(param_3 + 1);
    temp_v3 = FUN_00175678();
    temp_v2 = temp_v3;
    FUN_0019102c(temp_v3,7);
    *(unsigned int *)(temp_v2 + 0xc) = *(unsigned int *)(temp_v3 + 0x184);
    *(unsigned char *)(temp_v2 + 4) = 0x10;
    *(int *)(temp_v2 + 0x10) = param_1 + 0x128;
    *(unsigned int *)(temp_v2 + 0x14) = (unsigned int)temp_v0;
    *(int *)(temp_v2 + 0x18) = temp_v4;
    FUN_0017572c(temp_v3,temp_v2);
  }
  *(unsigned char *)(param_1 + 0x121) = 1;
  return;
}

} /* extern "C" */
