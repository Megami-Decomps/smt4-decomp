#include "romwright_types.h"

extern "C" {

extern int DAT_0044cdf0; /* 0x44cdf0 */


unsigned int NaviMain_GetPosX(void)

{
  return *(unsigned int *)(DAT_0044cdf0 + 0xc);
}

} /* extern "C" */
