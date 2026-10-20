#include "romwright_types.h"

extern "C" {


void FUN_002e7526(unsigned int param_1,unsigned char *param_2)

{
  *param_2 = (char)param_1;
  param_2[1] = (char)((unsigned int)param_1 >> 8);
  return;
}

} /* extern "C" */
