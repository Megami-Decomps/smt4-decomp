/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00126444` (_code @ 0x126444, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002c0ac8(void);


unsigned char FUN_00126444(unsigned int param_1,int param_2)

{
  int temp_v0;
  
  temp_v0 = FUN_002c0ac8();
  return *(unsigned char *)(*(int *)(temp_v0 + 8) + param_2 * 3 + 0x403830);
}
