/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f4d2c` (_code @ 0x2f4d2c, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002e7328(int, unsigned int);
extern int FUN_002e76b6(unsigned int);


int FUN_002f4d2c(int param_1,unsigned int *param_2)

{
  int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = FUN_002e7328(param_1,4);
  if (temp_v0 != 0) {
    temp_v0 = FUN_002e76b6(*(unsigned int *)(param_1 + 8));
    puVar2 = (unsigned int *)(temp_v0 + *(int *)(param_1 + 0xc));
    *param_2 = (*puVar2 & 0xffffff) | ((unsigned int)*(unsigned char *)((int)puVar2 + 3) << 0x18);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 4;
  }
  else {
    *param_2 = 0;
  }
  return param_1;
}

} /* extern "C" */
