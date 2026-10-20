/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c1c0c` (_code @ 0x2c1c0c, 0x10 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002b93b0(void);


unsigned int FUN_002c1c0c(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002b93b0();
  return *(unsigned int *)(temp_v0 + 8);
}

} /* extern "C" */
