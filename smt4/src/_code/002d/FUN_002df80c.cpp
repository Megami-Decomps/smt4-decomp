/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002df80c` (_code @ 0x2df80c, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002c2950(void);


unsigned char FUN_002df80c(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002c2950();
  return *(unsigned char *)(temp_v0 + param_1 + 0xc18);
}

} /* extern "C" */
