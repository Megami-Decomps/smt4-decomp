#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameGlobals; /* 0x44e140 */


unsigned char FUN_0029563c(void)

{
  return *(int *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x12dc) == 8;
}

} /* extern "C" */
