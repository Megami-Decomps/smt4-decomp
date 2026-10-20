#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameGlobals; /* 0x44e140 */


void FUN_0020349c(unsigned short param_1)

{
  *(unsigned short *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x1eb6) = param_1;
  return;
}

} /* extern "C" */
