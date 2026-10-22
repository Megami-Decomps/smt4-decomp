/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00500994` (_code @ 0x500994, 0xe8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int asdGxGetPhysicalAddress(unsigned int);


unsigned int * FUN_00500994(unsigned int *param_1,unsigned int *param_2,unsigned int param_3,int param_4)

{
  unsigned int temp_v0;
  unsigned int *puVar2;
  
  if (param_4 != 0) {
    *param_2 = 1;
    param_2[1] = 0xf0111;
    param_2[2] = 1;
    param_2[3] = 0xf0110;
    param_2 = param_2 + 4;
  }
  if ((param_3 & 1) != 0) {
    if (*(unsigned char *)(param_1 + 1) == 0) {
      temp_v0 = 2;
    }
    else {
      temp_v0 = 0;
    }
    *param_2 = temp_v0 | ((unsigned int)*(unsigned char *)(param_1 + 1) << 0x10);
    param_2[1] = 0xf0117;
    temp_v0 = asdGxGetPhysicalAddress(*param_1);
    puVar2 = param_2 + 3;
    param_2[2] = temp_v0 >> 3;
    param_2 = param_2 + 4;
    *puVar2 = 0xf011d;
  }
  if ((param_3 & 6) != 0) {
    *param_2 = (unsigned int)*(unsigned char *)(param_1 + 10);
    param_2[1] = 0xf0116;
    temp_v0 = asdGxGetPhysicalAddress(param_1[9]);
    puVar2 = param_2 + 3;
    param_2[2] = temp_v0 >> 3;
    param_2 = param_2 + 4;
    *puVar2 = 0xf011c;
  }
  *param_2 = param_1[0x10] | (param_1[0x11] * 0x1000 - 0x1000U) | 0x1000000;
  param_2[1] = 0xf011e;
  param_2[2] = (param_1[0x11] * 0x1000 - 0x1000U) | 0x1000000 | param_1[0x10];
  param_2[3] = 0xf006e;
  param_2[4] = 1;
  param_2[5] = 0xf0111;
  param_2[6] = 1;
  param_2[7] = 0xf0110;
  return param_2 + 8;
}

} /* extern "C" */
