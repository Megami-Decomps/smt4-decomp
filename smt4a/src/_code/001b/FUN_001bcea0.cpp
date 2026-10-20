#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameDataBlocks; /* 0x57f698 */


int FUN_001bcea0(void)

{
  return (*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x21e1c;
}

} /* extern "C" */
