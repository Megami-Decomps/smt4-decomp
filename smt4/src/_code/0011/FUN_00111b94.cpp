/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00111b94` (_code @ 0x111b94, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002bf684(void);


unsigned int FUN_00111b94(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  if ((*(int *)(param_1 + 4) != 0) && (temp_v0 = FUN_002bf684(), temp_v1 = 0, temp_v0 != 0)) {
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
