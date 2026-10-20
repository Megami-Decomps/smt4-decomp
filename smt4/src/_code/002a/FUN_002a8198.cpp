#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044e380; /* 0x44e380 */


unsigned int FUN_002a8198(void)

{
  return (*(unsigned int *)((unsigned char *)&DAT_0044e380 + 0x10));
}

} /* extern "C" */
