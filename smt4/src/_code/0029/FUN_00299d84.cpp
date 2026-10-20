#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameGlobals; /* 0x44e140 */


void FUN_00299d84(unsigned char param_1)

{
  *(unsigned char *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x1ea4) = param_1;
  return;
}

} /* extern "C" */
