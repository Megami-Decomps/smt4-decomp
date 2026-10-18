/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023ea6c` (_code @ 0x23ea6c, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_0023ea6c(unsigned int param_1)

{
  unsigned int temp_v0;
  
  if (param_1 >= 0x43) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = 0;
    if (*(int *)(param_1 * 0x10 + 0x493830) != 0) {
      temp_v0 = 1;
    }
  }
  return temp_v0;
}
