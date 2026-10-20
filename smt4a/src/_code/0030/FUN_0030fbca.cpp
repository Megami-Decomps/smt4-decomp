#include "romwright_types.h"

extern "C" {


void FUN_0030fbca(unsigned char *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = *param_1 | 0x80;
    return;
  }
  *param_1 = *param_1 & 0x7f;
  return;
}

} /* extern "C" */
