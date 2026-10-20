#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameGlobals; /* 0x44e140 */


void FUN_00298d28(unsigned int param_1,unsigned int param_2)

{
  int b = *(int *)((unsigned char *)&g_gameGlobals + 0x4);
  *(unsigned int *)(b + 0x1e68) = param_1;
  *(unsigned int *)(b + 0x1e6c) = param_2;
  return;
}

} /* extern "C" */
