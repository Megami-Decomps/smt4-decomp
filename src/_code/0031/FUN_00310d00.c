/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00310d00` (_code @ 0x310d00, 0x18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002c85f0(void);


unsigned char FUN_00310d00(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002c85f0();
  return temp_v0 != 5;
}
