#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005c6000; /* 0x5c6000 */


unsigned char * FUN_002a398c(int param_1)

{
  return &DAT_005c6000 + param_1 * 0x148;
}

} /* extern "C" */
