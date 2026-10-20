#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameDataBlocks; /* 0x57f698 */


void FUN_0031f0d8(unsigned int param_1)

{
  *(unsigned int *)((*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x21e14) = param_1;
  return;
}

} /* extern "C" */
