/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027396c` (_code @ 0x27396c, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002c09bc(void);


void FUN_0027396c(unsigned int *param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  
  temp_v0 = FUN_002c09bc();
  temp_v1 = param_1[1];
  temp_v2 = param_1[2];
  temp_v3 = param_1[3];
  temp_v4 = param_1[4];
  temp_v5 = param_1[5];
  *(unsigned int *)(temp_v0 + 0x24b84) = *param_1;
  *(unsigned int *)(temp_v0 + 0x24b88) = temp_v1;
  *(unsigned int *)(temp_v0 + 0x24b8c) = temp_v2;
  *(unsigned int *)(temp_v0 + 0x24b90) = temp_v3;
  *(unsigned int *)(temp_v0 + 0x24b94) = temp_v4;
  *(unsigned int *)(temp_v0 + 0x24b98) = temp_v5;
  return;
}
