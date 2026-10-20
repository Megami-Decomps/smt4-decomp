#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameGlobals; /* 0x44e140 */


unsigned char FUN_0029e0f8(void)

{
  if (*(int *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x12dc) == 1) {
    return 0;
  }
  return 1;
}

} /* extern "C" */
