#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameGlobals; /* 0x44e140 */


void FUN_0029c4c8(unsigned char param_1)

{
  *(unsigned char *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x1e62) = param_1;
  return;
}

} /* extern "C" */
