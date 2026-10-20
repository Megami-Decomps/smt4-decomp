#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_00464b9c; /* 0x464b9c */


unsigned int FUN_002a31f4(int param_1)

{
  return (&DAT_00464b9c)[param_1];
}

} /* extern "C" */
