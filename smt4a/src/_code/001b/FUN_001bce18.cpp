#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameDataBlocks; /* 0x57f698 */


int FUN_001bce18(void)

{
  return (*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x2dbc;
}

} /* extern "C" */
