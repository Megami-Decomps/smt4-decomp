/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ed094` (_code @ 0x2ed094, 0x2a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_00310314(void);


unsigned int * FUN_002ed094(unsigned int *param_1,unsigned char param_2)

{
  int temp_v0;
  
  *param_1 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(unsigned char *)(param_1 + 6) = 0;
  *(unsigned char *)((int)param_1 + 0x19) = param_2;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  temp_v0 = FUN_00310314();
  param_1[4] = temp_v0;
  *(unsigned int *)(temp_v0 + 4) = 0;
  *(unsigned int *)(param_1[4] + 8) = param_1[4];
  *(unsigned int *)(param_1[4] + 0xc) = param_1[4];
  return param_1;
}

} /* extern "C" */
