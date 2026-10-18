/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ffb58` (_code @ 0x4ffb58, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_004ffb58(int param_1)

{
  unsigned int *puVar1;
  int temp_v0;
  
  temp_v0 = param_1 + *(int *)(param_1 + 0x1c) * 0x30;
  if (*(int *)(temp_v0 + 0x30) != 0) {
    puVar1 = (unsigned int *)(temp_v0 + 0x24);
  }
  else if (*(int *)(param_1 + 0x90) != 0) {
    puVar1 = (unsigned int *)(param_1 + 0x84);
  }
  else {
    if (*(int *)(param_1 + 0xc0) == 0) {
      return 0xffff;
    }
    puVar1 = (unsigned int *)(param_1 + 0xb4);
  }
  return *puVar1;
}
