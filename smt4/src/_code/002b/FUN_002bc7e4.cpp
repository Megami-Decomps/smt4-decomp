#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044e380; /* 0x44e380 */


int FUN_002bc7e4(void)

{
  return (int)(*(signed char *)((unsigned char *)&DAT_0044e380 + 0x1));
}

} /* extern "C" */
