/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e71d0` (_code @ 0x3e71d0, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_003e71d0(int *param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (*param_1 != 0) {
    if (*(char *)(*param_1 + 4) == '\0') {
      temp_v0 = 1;
    }
    else {
      temp_v0 = 0;
    }
  }
  return temp_v0;
}
