/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fda64` (_code @ 0x3fda64, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_001a7a20(int, unsigned int, unsigned int);
extern unsigned int FUN_002e3390(unsigned int);


unsigned char FUN_003fda64(int param_1,unsigned int param_2,unsigned int *param_3)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  
  temp_v0 = *(int *)(param_1 + 0x210);
  temp_v1 = FUN_002e3390(param_2);
  temp_v0 = FUN_001a7a20(temp_v0 + 0x74,param_2,temp_v1);
  if (temp_v0 != 0xffff) {
    puVar3 = (unsigned int *)(*(int *)(*(int *)(param_1 + 0x108) + 0x14) + temp_v0 * 0x30);
    temp_v1 = puVar3[1];
    temp_v2 = puVar3[2];
    temp_v3 = puVar3[3];
    temp_v4 = puVar3[4];
    temp_v5 = puVar3[5];
    temp_v6 = puVar3[6];
    temp_v7 = puVar3[7];
    *param_3 = *puVar3;
    param_3[1] = temp_v1;
    param_3[2] = temp_v2;
    param_3[3] = temp_v3;
    param_3[4] = temp_v4;
    param_3[5] = temp_v5;
    param_3[6] = temp_v6;
    param_3[7] = temp_v7;
    temp_v1 = puVar3[8];
    temp_v2 = puVar3[9];
    temp_v3 = puVar3[10];
    param_3[0xb] = puVar3[0xb];
    param_3[8] = temp_v1;
    param_3[9] = temp_v2;
    param_3[10] = temp_v3;
  }
  return temp_v0 != 0xffff;
}

} /* extern "C" */
