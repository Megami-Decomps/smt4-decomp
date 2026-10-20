#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_00464bb4; /* 0x464bb4 */


unsigned int FUN_00152884(int param_1)

{
  return (&DAT_00464bb4)[param_1];
}

} /* extern "C" */
