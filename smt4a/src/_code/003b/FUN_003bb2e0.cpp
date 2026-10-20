/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bb2e0` (_code @ 0x3bb2e0, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_003958cc(void);


unsigned char FUN_003bb2e0(void)

{
  int temp_v0;
  
  temp_v0 = FUN_003958cc();
  return temp_v0 != 0;
}

} /* extern "C" */
