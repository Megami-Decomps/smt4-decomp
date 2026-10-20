/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00324c94` (_code @ 0x324c94, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_00162e8c(void);
extern unsigned long long FUN_00324f74(int, unsigned int);


void FUN_00324c94(int param_1,unsigned char param_2)

{
  unsigned int temp_v0;
  unsigned long long temp_v1;
  
  temp_v0 = FUN_00162e8c();
  temp_v1 = FUN_00324f74(param_1,temp_v0);
  if ((int)temp_v1 != 0) {
    *(unsigned char *)((int)((unsigned long long)temp_v1 >> 0x20) + param_1 + 0xe48) = param_2;
  }
  return;
}

} /* extern "C" */
