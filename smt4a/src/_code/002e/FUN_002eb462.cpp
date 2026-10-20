#include "romwright_types.h"

extern "C" {


void FUN_002eb462(unsigned char *param_1,char param_2,unsigned char param_3)

{
  *param_1 = (param_2 << 4) | param_3;
  return;
}

} /* extern "C" */
