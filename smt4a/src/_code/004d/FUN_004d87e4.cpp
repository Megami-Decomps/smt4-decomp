/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d87e4` (_code @ 0x4d87e4, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0040ab8c(void);


unsigned int FUN_004d87e4(int *param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  if ((*param_1 != 0) && (temp_v0 = FUN_0040ab8c(), temp_v1 = 0, temp_v0 != 0)) {
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
