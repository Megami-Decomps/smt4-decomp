#include "romwright_types.h"

extern "C" {

extern int DAT_00447060; /* 0x447060 */


unsigned int FUN_002c8644(void)

{
  return *(unsigned int *)(DAT_00447060 + 0xcc);
}

} /* extern "C" */
