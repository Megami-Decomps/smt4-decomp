#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_00464ba4; /* 0x464ba4 */


unsigned int FUN_002a4278(int param_1)

{
  return (&DAT_00464ba4)[param_1];
}

} /* extern "C" */
