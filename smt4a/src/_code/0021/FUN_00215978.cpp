#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameDataBlocks; /* 0x57f698 */


void FUN_00215978(unsigned char param_1)

{
  *(unsigned char *)((*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x21610) = param_1;
  return;
}

} /* extern "C" */
