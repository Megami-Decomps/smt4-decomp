/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eb83c` (_code @ 0x2eb83c, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002eb6ae(int, unsigned int);


unsigned int FUN_002eb83c(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002eb6ae(param_1,0x40);
  if ((temp_v0 == 0) || (temp_v1 = 0, *(int *)(param_1 + 0x118) != 0)) {
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
