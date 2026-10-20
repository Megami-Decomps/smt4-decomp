/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016f144` (_code @ 0x16f144, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_00188b30(void);


unsigned char FUN_0016f144(void)

{
  int temp_v0;
  
  temp_v0 = FUN_00188b30();
  return temp_v0 == 4;
}

} /* extern "C" */
