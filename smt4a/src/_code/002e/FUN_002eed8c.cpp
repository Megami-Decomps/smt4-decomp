/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eed8c` (_code @ 0x2eed8c, 0xe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_002eed8c(int param_1)

{
  unsigned short temp_v0;
  
  temp_v0 = 0;
  if (*(int *)(param_1 + 0xd8) != 0) {
    temp_v0 = *(unsigned int *)(*(int *)(param_1 + 0xd8) + 0x10);
  }
  return temp_v0;
}

} /* extern "C" */
