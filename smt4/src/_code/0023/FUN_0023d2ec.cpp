#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameDataBlocks; /* 0x43e2a8 */


int FUN_0023d2ec(void)

{
  return (*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x1c62c;
}

} /* extern "C" */
