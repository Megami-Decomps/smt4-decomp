/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00148f28` (_code @ 0x148f28, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0015fe30(void);


unsigned int FUN_00148f28(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  if ((*(int *)(param_1 + 4) != 0) && (temp_v0 = FUN_0015fe30(), temp_v1 = 0, temp_v0 != 0)) {
    temp_v1 = 1;
  }
  return temp_v1;
}
