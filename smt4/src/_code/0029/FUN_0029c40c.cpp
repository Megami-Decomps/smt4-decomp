#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameGlobals; /* 0x44e140 */


unsigned int FUN_0029c40c(void)

{
  return *(unsigned int *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x12e4);
}

} /* extern "C" */
