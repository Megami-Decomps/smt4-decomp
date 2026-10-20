/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00376f94` (_code @ 0x376f94, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_00162e8c(void);


unsigned char FUN_00376f94(void)

{
  int temp_v0;
  
  temp_v0 = FUN_00162e8c();
  return *(unsigned char *)(temp_v0 + 3);
}

} /* extern "C" */
