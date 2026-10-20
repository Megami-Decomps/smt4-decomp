#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameGlobals; /* 0x44e140 */


unsigned char FUN_0029ac94(void)

{
  return *(unsigned char *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x1e66);
}

} /* extern "C" */
