/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00312b9c` (_code @ 0x312b9c, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int btlGetMainState(void);


unsigned int FUN_00312b9c(void)

{
  int temp_v0;
  
  temp_v0 = btlGetMainState();
  *(unsigned int *)(temp_v0 + 0x44a4) = *(unsigned int *)(temp_v0 + 0x44a4) | 1;
  return 1;
}

} /* extern "C" */
