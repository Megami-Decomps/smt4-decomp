#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameDataBlocks; /* 0x43e2a8 */


int FUN_002b63ac(void)

{
  return (*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x90;
}

} /* extern "C" */
