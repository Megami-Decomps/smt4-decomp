/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_005070d4` (_code @ 0x5070d4, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_005070d4(int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  
  if (*(int *)(param_1 + 0x24) < 1) {
    return 0;
  }
  temp_v0 = *(unsigned int *)(*(int *)(param_1 + 0x1c) + 0x188);
  switch(param_2) {
  default:
    return 0;
  case 1:
    if ((~temp_v0 & 4) == 0) {
      return 1;
    }
    return 0;
  case 2:
    temp_v0 = ~temp_v0 & 0x20;
    break;
  case 3:
    temp_v0 = ~temp_v0 & 0x20;
    break;
  case 4:
    temp_v0 = ~temp_v0 & 0x800;
    break;
  case 5:
    temp_v0 = ~temp_v0 & 0x10;
  }
  if (temp_v0 == 0) {
    return 1;
  }
  return 0;
}
