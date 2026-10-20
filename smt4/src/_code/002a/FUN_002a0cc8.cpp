#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameGlobals; /* 0x44e140 */


void FUN_002a0cc8(unsigned char param_1)

{
  if ((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) != 0) {
    *(unsigned char *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x1e64) = param_1;
  }
  return;
}

} /* extern "C" */
