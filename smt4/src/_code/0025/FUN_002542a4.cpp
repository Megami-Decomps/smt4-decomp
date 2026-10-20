#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameDataBlocks; /* 0x43e2a8 */


int FUN_002542a4(void)

{
  return (*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x1f4e4;
}

} /* extern "C" */
