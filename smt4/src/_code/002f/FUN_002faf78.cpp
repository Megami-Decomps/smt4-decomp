/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002faf78` (_code @ 0x2faf78, 0x10 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002c2950(void);


unsigned int FUN_002faf78(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002c2950();
  return *(unsigned int *)(temp_v0 + 0x18);
}

} /* extern "C" */
