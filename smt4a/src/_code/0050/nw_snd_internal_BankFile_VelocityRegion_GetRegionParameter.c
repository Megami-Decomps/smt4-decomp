/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_BankFile_VelocityRegion_GetRegionParameter` (_code @ 0x50ac9c, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int nw_snd_internal_BankFile_VelocityRegion_GetRegionParameter(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x21f) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 8;
  }
  return param_1;
}
