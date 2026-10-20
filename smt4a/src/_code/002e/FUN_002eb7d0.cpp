/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eb7d0` (_code @ 0x2eb7d0, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_001149f0(void);


unsigned int FUN_002eb7d0(unsigned int param_1,int param_2)

{
  unsigned int temp_v0;
  
  if (param_2 != 0) {
    return 0;
  }
  temp_v0 = FUN_001149f0();
  return temp_v0;
}

} /* extern "C" */
