#include "romwright_types.h"

extern "C" {


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

} /* extern "C" */
