#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00478000; /* 0x478000 */


unsigned char * FUN_001ed250(int param_1)

{
  return &DAT_00478000 + param_1 * 0x148;
}

} /* extern "C" */
