#include "romwright_types.h"

extern "C" {

extern int DAT_0057f574; /* 0x57f574 */


unsigned int NaviMain_GetPosY(void)

{
  return *(unsigned int *)(DAT_0057f574 + 0x10);
}

} /* extern "C" */
