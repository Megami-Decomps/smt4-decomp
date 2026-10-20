#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameDataBlocks; /* 0x57f698 */


void FUN_002159dc(unsigned char param_1)

{
  *(unsigned char *)((*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x27ec4) = param_1;
  return;
}

} /* extern "C" */
