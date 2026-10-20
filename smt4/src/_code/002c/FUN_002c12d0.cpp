#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044e380; /* 0x44e380 */


unsigned char FUN_002c12d0(void)

{
  return (*(unsigned char *)((unsigned char *)&DAT_0044e380 + 0xc));
}

} /* extern "C" */
