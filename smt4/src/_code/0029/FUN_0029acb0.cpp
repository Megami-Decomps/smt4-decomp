#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameGlobals; /* 0x44e140 */


int FUN_0029acb0(void)

{
  return (*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x1300;
}

} /* extern "C" */
