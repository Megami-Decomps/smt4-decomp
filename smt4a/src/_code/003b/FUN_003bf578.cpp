/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bf578` (_code @ 0x3bf578, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0018719c(unsigned int);


unsigned int FUN_003bf578(int *param_1)

{
  unsigned int temp_v0;
  int temp_v1;
  
  if (*(char *)(*param_1 + 0x9b4) == '\0') {
    temp_v0 = 0;
  }
  else {
    temp_v1 = FUN_0018719c(*(unsigned int *)(*param_1 + 0x9d8));
    temp_v0 = 0;
    if (temp_v1 != 0) {
      temp_v0 = 1;
    }
  }
  return temp_v0;
}

} /* extern "C" */
