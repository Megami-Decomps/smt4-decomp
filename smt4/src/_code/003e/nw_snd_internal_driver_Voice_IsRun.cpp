/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_Voice_IsRun` (_code @ 0x3e71d0, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int nw_snd_internal_driver_Voice_IsRun(int *param_1)

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

} /* extern "C" */
