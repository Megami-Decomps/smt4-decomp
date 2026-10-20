#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005b401c; /* 0x5b401c */


void FUN_00139508(unsigned char param_1)

{
  DAT_005b401c = param_1;
  return;
}

} /* extern "C" */
