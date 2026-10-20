/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00418858` (_code @ 0x418858, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_001ab940(void);


unsigned char FUN_00418858(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_001ab940();
  return *(unsigned char *)(temp_v0 + param_1 * 4 + 0x2a1);
}

} /* extern "C" */
