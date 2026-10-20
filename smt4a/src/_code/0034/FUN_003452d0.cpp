/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003452d0` (_code @ 0x3452d0, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0026140c(void);


void FUN_003452d0(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_0026140c();
  temp_v0 = temp_v0 + (param_1 >> 3);
  *(unsigned char *)(temp_v0 + 0x55) = *(unsigned char *)(temp_v0 + 0x55) | (unsigned char)(1 << (param_1 & 7));
  return;
}

} /* extern "C" */
