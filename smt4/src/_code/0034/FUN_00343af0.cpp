/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00343af0` (_code @ 0x343af0, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002bbb5c(void);


unsigned char FUN_00343af0(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002bbb5c();
  return *(char *)(temp_v0 + 0x10) != '\0';
}

} /* extern "C" */
