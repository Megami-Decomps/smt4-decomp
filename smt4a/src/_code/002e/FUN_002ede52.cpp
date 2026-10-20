/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ede52` (_code @ 0x2ede52, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_002f34ac(void);


unsigned int FUN_002ede52(void)

{
  unsigned int temp_v0;
  
  temp_v0 = FUN_002f34ac();
  return temp_v0 ^ 1;
}

} /* extern "C" */
