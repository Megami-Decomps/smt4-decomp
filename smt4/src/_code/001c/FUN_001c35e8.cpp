#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameDataBlocks; /* 0x43e2a8 */


int FUN_001c35e8(void)

{
  return (*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x1eb80;
}

} /* extern "C" */
