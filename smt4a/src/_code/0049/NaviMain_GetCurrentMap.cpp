#include "romwright_types.h"

extern "C" {

extern int DAT_00587f28; /* 0x587f28 */


unsigned int NaviMain_GetCurrentMap(void)

{
  return *(unsigned int *)(DAT_00587f28 + 0x28);
}

} /* extern "C" */
