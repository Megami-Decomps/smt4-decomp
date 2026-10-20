/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004fa0c4` (_code @ 0x4fa0c4, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_003c5d8c(void);


unsigned char FUN_004fa0c4(void)

{
  int temp_v0;
  
  temp_v0 = FUN_003c5d8c();
  return temp_v0 != 0;
}

} /* extern "C" */
