#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameGlobals; /* 0x44e140 */


unsigned char FUN_00295618(void)

{
  return *(int *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x12dc) == 3;
}

} /* extern "C" */
