#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameDataBlocks; /* 0x43e2a8 */


int FUN_002a8764(void)

{
  return (*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x8c;
}

} /* extern "C" */
