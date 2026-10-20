/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a0d58` (_code @ 0x1a0d58, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_005c1bfc; /* 0x5c1bfc */


int FUN_001a0d58(void)

{
  int temp_v0;
  
  temp_v0 = DAT_005c1bfc;
  if (DAT_005c1bfc != 0) {
    temp_v0 = DAT_005c1bfc + 0x80;
  }
  return temp_v0;
}

} /* extern "C" */
