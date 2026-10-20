#include "romwright_types.h"

extern "C" {

extern int DAT_00447e88; /* 0x447e88 */


unsigned int FUN_002a0b34(void)

{
  return *(unsigned int *)(DAT_00447e88 + 0x194);
}

} /* extern "C" */
