/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f27c0` (_code @ 0x2f27c0, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002eabfc(void);


int FUN_002f27c0(int param_1,unsigned char *param_2)

{
  int temp_v0;
  
  temp_v0 = FUN_002eabfc();
  if (temp_v0 != 0) {
    *(unsigned char *)(*(int *)(param_1 + 8) + temp_v0) = *param_2;
  }
  else {
    *(unsigned char *)(param_1 + 0xc) = *param_2;
  }
  return param_1;
}
