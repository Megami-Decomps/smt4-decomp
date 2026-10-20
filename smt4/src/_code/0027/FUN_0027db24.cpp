#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameDataBlocks; /* 0x43e2a8 */


void FUN_0027db24(unsigned char param_1)

{
  *(unsigned char *)((*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x1ecd8) = param_1;
  return;
}

} /* extern "C" */
