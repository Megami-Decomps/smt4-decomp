/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002705c8` (_code @ 0x2705c8, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned long long FUN_002705f4(int, unsigned int);
extern unsigned int FUN_002c2b1c(void);


void FUN_002705c8(int param_1,unsigned char param_2)

{
  unsigned int temp_v0;
  unsigned long long temp_v1;
  
  temp_v0 = FUN_002c2b1c();
  temp_v1 = FUN_002705f4(param_1,temp_v0);
  if ((int)temp_v1 != 0) {
    *(unsigned char *)((int)((unsigned long long)temp_v1 >> 0x20) + param_1 + 0xe14) = param_2;
  }
  return;
}
