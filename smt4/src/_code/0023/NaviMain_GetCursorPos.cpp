#include "romwright_types.h"

extern "C" {

extern int DAT_0044cdf0; /* 0x44cdf0 */


int NaviMain_GetCursorPos(void)

{
  return DAT_0044cdf0 + 0x38;
}

} /* extern "C" */
