#include "romwright_types.h"

extern "C" {


unsigned char * FUN_003075f2(unsigned char *param_1,unsigned char *param_2,unsigned char *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_3 = *param_1;
    param_3 = param_3 + 1;
  }
  return param_3;
}

} /* extern "C" */
