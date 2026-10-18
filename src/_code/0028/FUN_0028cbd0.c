/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028cbd0` (_code @ 0x28cbd0, 0xd4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044ea00; /* 0x44ea00 */

extern int FUN_0024ae60(int);
extern int FUN_002c540c(void);
extern int FUN_00343584(int);
extern int FUN_00343590(int);


void FUN_0028cbd0(unsigned int *param_1)

{
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  
  temp_v1 = *(int *)(DAT_0044ea00 + 0x528);
  temp_v0 = 0;
  if (*(char *)(DAT_0044ea00 + 0x5f4) != '\x03') {
    if (*(char *)(DAT_0044ea00 + 0x5f4) != '\x04') {
      temp_v2 = FUN_0024ae60(temp_v1);
    }
    else {
      temp_v2 = FUN_00343584(DAT_0044ea00);
      temp_v0 = 1;
    }
  }
  else {
    temp_v2 = FUN_00343590(DAT_0044ea00);
    temp_v0 = 1;
  }
  if (temp_v1 == 2) {
    puVar4 = (unsigned int *)(temp_v2 + 0x38);
  }
  else {
    temp_v3 = FUN_002c540c();
    if (temp_v3 != 1 || temp_v0) {
      puVar4 = (unsigned int *)(temp_v2 + 0x38);
    }
    else if (temp_v1 == 1) {
      puVar4 = (unsigned int *)(temp_v2 + 0x288);
    }
    else {
      puVar4 = (unsigned int *)(temp_v2 + 0x1d8);
    }
  }
  temp_v4 = puVar4[1];
  temp_v5 = puVar4[2];
  temp_v6 = puVar4[3];
  temp_v7 = puVar4[4];
  temp_v8 = puVar4[5];
  temp_v9 = puVar4[6];
  temp_v10 = puVar4[7];
  *param_1 = *puVar4;
  param_1[1] = temp_v4;
  param_1[2] = temp_v5;
  param_1[3] = temp_v6;
  param_1[4] = temp_v7;
  param_1[5] = temp_v8;
  param_1[6] = temp_v9;
  param_1[7] = temp_v10;
  temp_v4 = puVar4[8];
  temp_v5 = puVar4[9];
  temp_v6 = puVar4[10];
  param_1[0xb] = puVar4[0xb];
  param_1[8] = temp_v4;
  param_1[9] = temp_v5;
  param_1[10] = temp_v6;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0x3f800000;
  return;
}
