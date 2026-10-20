/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016783c` (_code @ 0x16783c, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int jobGetWork(void);


int FUN_0016783c(void)

{
  int temp_v0;
  
  temp_v0 = jobGetWork();
  return (int)*(char *)(temp_v0 + 0x8c);
}

} /* extern "C" */
