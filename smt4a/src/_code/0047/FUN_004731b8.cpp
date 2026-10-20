/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004731b8` (_code @ 0x4731b8, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0014af84(void);


void FUN_004731b8(unsigned int *param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  
  temp_v0 = FUN_0014af84();
  temp_v1 = param_1[1];
  temp_v2 = param_1[2];
  temp_v3 = param_1[3];
  temp_v4 = param_1[4];
  temp_v5 = param_1[5];
  *(unsigned int *)(temp_v0 + 0x27e98) = *param_1;
  *(unsigned int *)(temp_v0 + 0x27e9c) = temp_v1;
  *(unsigned int *)(temp_v0 + 0x27ea0) = temp_v2;
  *(unsigned int *)(temp_v0 + 0x27ea4) = temp_v3;
  *(unsigned int *)(temp_v0 + 0x27ea8) = temp_v4;
  *(unsigned int *)(temp_v0 + 0x27eac) = temp_v5;
  return;
}

} /* extern "C" */
