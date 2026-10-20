/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00398048` (_code @ 0x398048, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_00162e8c(void);


int FUN_00398048(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_00162e8c();
  if ((temp_v0 != 0) && (7 >= param_1)) {
    temp_v0 = temp_v0 + param_1 * 4 + 0x1590;
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
