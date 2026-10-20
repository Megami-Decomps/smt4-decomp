#include "romwright_types.h"

extern "C" {

extern int DAT_0044cdf0; /* 0x44cdf0 */


unsigned int NaviMain_GetPosY(void)

{
  return *(unsigned int *)(DAT_0044cdf0 + 0x10);
}

} /* extern "C" */
