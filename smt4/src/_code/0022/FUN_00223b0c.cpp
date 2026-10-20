#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameDataBlocks; /* 0x43e2a8 */


void FUN_00223b0c(unsigned int param_1)

{
  *(unsigned int *)((*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x1f4dc) = param_1;
  return;
}

} /* extern "C" */
