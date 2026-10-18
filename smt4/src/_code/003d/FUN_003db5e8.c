/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003db5e8` (_code @ 0x3db5e8, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_0027d9e8(unsigned int, unsigned int);
extern unsigned int FUN_002939f4(void);


void FUN_003db5e8(int param_1,int param_2,unsigned int param_3)

{
  unsigned int temp_v0;
  int temp_v1;
  
  if ((*(unsigned int *)(param_2 + 0x50) & 0x20000) == 0) {
    temp_v1 = 0;
    while (-1 < *(int *)(param_1 + temp_v1 * 0x30 + 0x1398)) {
      temp_v1 = temp_v1 + 1;
      if (temp_v1 >= 0x32) {
        return;
      }
    }
    temp_v0 = FUN_002939f4();
    temp_v0 = FUN_0027d9e8(temp_v0,param_3);
    param_1 = param_1 + temp_v1 * 0x30;
    *(unsigned int *)(param_1 + 0x1398) = param_3;
    *(unsigned int *)(param_1 + 0x139c) = temp_v0;
  }
  return;
}
