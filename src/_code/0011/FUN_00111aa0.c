/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00111aa0` (_code @ 0x111aa0, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002bf85c(void);


unsigned int FUN_00111aa0(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  if ((*(int *)(param_1 + 4) != 0) && (temp_v0 = FUN_002bf85c(), temp_v1 = 0, temp_v0 != 0)) {
    temp_v1 = 1;
  }
  return temp_v1;
}
