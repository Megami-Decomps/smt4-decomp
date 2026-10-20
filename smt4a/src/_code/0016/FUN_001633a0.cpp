#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_00573c78; /* 0x573c78 */


unsigned int FUN_001633a0(int param_1)

{
  unsigned int *p = &DAT_00573c78;
  *p = *p * 0x41c64e6d + 0x3039;
  return (*p >> 0x10) * (param_1 + 1) >> 0x10;
}

} /* extern "C" */
