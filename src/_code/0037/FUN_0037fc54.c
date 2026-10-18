/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037fc54` (_code @ 0x37fc54, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002a17e4(int);
extern int FUN_0037e940(void);


void FUN_0037fc54(int param_1,unsigned int param_2)

{
  int temp_v0;
  
  temp_v0 = FUN_002a17e4(param_1 + 8);
  if ((temp_v0 != 0) && (temp_v0 = FUN_0037e940(), temp_v0 != 0)) {
    *(unsigned int *)(temp_v0 + 0xc0) = param_2;
    *(unsigned int *)(temp_v0 + 200) = *(unsigned int *)(param_1 + 4);
  }
  return;
}
