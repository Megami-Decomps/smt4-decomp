/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003df588` (_code @ 0x3df588, 0x10 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_003df588(int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    temp_v0 = *(unsigned int *)(*(int *)(param_1 + 4) + 8);
  }
  return temp_v0;
}
