/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032c8dc` (_code @ 0x32c8dc, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_002a1be8(unsigned int);


unsigned int FUN_0032c8dc(int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = 0xe7e3ffff;
  if (param_1 != 0) {
    if (param_1 == 1) {
      temp_v0 = 0;
    }
    return temp_v0;
  }
  temp_v0 = FUN_002a1be8(0xe7e3ffff);
  return temp_v0;
}

} /* extern "C" */
