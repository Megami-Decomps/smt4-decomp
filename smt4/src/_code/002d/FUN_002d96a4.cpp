#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameGlobals; /* 0x44e140 */


int FUN_002d96a4(void)

{
  return (int)*(short *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x12fc);
}

} /* extern "C" */
