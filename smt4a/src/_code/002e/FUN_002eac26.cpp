#include "romwright_types.h"

extern "C" {


unsigned char * FUN_002eac26(unsigned char *param_1,unsigned char *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}

} /* extern "C" */
