#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_00464b7c; /* 0x464b7c */


unsigned int FUN_002a4258(int param_1)

{
  return (&DAT_00464b7c)[param_1];
}

} /* extern "C" */
