/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00496674` (_code @ 0x496674, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_00496674(int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = *(unsigned int *)(param_1 + 0x16040);
  if (*(char *)(param_1 + 0x16044) != '\0') {
    temp_v0 = *(unsigned int *)(param_1 + 0x16038);
  }
  else if (*(char *)(param_1 + 0x16045) != '\0') {
    temp_v0 = *(unsigned int *)(param_1 + 0x1603c);
  }
  return temp_v0;
}

} /* extern "C" */
