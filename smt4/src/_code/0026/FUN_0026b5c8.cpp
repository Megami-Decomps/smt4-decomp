#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameDataBlocks; /* 0x43e2a8 */


int FUN_0026b5c8(void)

{
  return (*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x80;
}

} /* extern "C" */
