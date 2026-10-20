#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044e380; /* 0x44e380 */


unsigned char FUN_002bb0e0(void)

{
  return ((*(unsigned int *)((unsigned char *)&DAT_0044e380 + 0x18)) & 7) == 2;
}

} /* extern "C" */
