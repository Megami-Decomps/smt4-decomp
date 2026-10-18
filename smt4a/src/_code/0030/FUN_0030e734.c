/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030e734` (_code @ 0x30e734, 0x42 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00558ce4; /* 0x558ce4 */

extern int FUN_002f4424(void);
extern int FUN_002f4474(int, int);


unsigned int * FUN_0030e734(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
  int temp_v0;
  int temp_v1;
  
  *param_1 = (unsigned int)&DAT_00558ce4;
  param_1[1] = 0;
  param_1[4] = param_3;
  param_1[3] = param_2;
  param_1[2] = 0;
  *(unsigned char *)(param_1 + 5) = 0;
  temp_v0 = FUN_002f4424();
  temp_v1 = FUN_002f4474(temp_v0 + 4,temp_v0 + 0xc);
  if (temp_v1 != 0) {
    *(unsigned int **)(*(int *)(temp_v0 + 8) + 4) = param_1;
    param_1[2] = *(unsigned int *)(temp_v0 + 8);
    *(unsigned int **)(temp_v0 + 8) = param_1;
  }
  else {
    *(unsigned int **)(temp_v0 + 4) = param_1;
    *(unsigned int **)(temp_v0 + 8) = param_1;
  }
  *(int *)(temp_v0 + 0x10) = *(int *)(temp_v0 + 0x10) + 1;
  return param_1;
}
