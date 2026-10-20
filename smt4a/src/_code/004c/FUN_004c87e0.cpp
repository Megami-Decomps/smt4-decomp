#include "romwright_types.h"

extern "C" {

extern int DAT_005738e8; /* 0x5738e8 */


unsigned char FUN_004c87e0(void)

{
  return *(int *)(DAT_005738e8 + 8) >= 2;
}

} /* extern "C" */
