/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00294688` (_code @ 0x294688, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_004bc850(void);


unsigned char FUN_00294688(void)

{
  int temp_v0;
  
  temp_v0 = FUN_004bc850();
  return *(unsigned char *)(temp_v0 + 0x5806e0);
}

} /* extern "C" */
