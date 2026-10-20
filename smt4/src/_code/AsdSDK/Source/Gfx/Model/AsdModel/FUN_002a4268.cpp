#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_00464bac; /* 0x464bac */


unsigned int FUN_002a4268(int param_1)

{
  return (&DAT_00464bac)[param_1];
}

} /* extern "C" */
