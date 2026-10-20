#include "romwright_types.h"

extern "C" {

extern signed char DAT_005b3fe0; /* 0x5b3fe0 */


int FUN_002371b4(signed char param_1)

{
  int temp_v0;
  
  temp_v0 = (int)DAT_005b3fe0;
  DAT_005b3fe0 = param_1;
  return temp_v0;
}

} /* extern "C" */
