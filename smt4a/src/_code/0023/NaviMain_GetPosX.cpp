#include "romwright_types.h"

extern "C" {

extern int DAT_0057f574; /* 0x57f574 */


unsigned int NaviMain_GetPosX(void)

{
  return *(unsigned int *)(DAT_0057f574 + 0xc);
}

} /* extern "C" */
