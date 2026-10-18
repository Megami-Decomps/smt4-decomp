/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00153f64` (_code @ 0x153f64, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001861c4(void);


unsigned int FUN_00153f64(void)

{
  int temp_v0;
  
  temp_v0 = FUN_001861c4();
  return *(unsigned int *)(temp_v0 + 8);
}
