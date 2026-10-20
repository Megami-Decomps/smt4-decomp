#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00409ba8; /* 0x409ba8 */


unsigned char FUN_0024dd80(int param_1)

{
  return (&DAT_00409ba8)[param_1];
}

} /* extern "C" */
