#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044e380; /* 0x44e380 */


int FUN_002c55b4(void)

{
  return (int)(*(signed char *)((unsigned char *)&DAT_0044e380 + 0x9));
}

} /* extern "C" */
