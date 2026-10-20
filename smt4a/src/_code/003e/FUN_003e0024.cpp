/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e0024` (_code @ 0x3e0024, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_001801a4(void);


int FUN_003e0024(void)

{
  int temp_v0;
  
  temp_v0 = FUN_001801a4();
  return (int)*(short *)(temp_v0 + 0x2a);
}

} /* extern "C" */
