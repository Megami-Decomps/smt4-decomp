#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044e380; /* 0x44e380 */


unsigned char FUN_002c55c4(void)

{
  return (*(unsigned char *)((unsigned char *)&DAT_0044e380 + 0x6));
}

} /* extern "C" */
