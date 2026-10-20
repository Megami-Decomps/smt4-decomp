#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044e380; /* 0x44e380 */


unsigned int FUN_002bb100(void)

{
  return (*(unsigned int *)((unsigned char *)&DAT_0044e380 + 0x14));
}

} /* extern "C" */
