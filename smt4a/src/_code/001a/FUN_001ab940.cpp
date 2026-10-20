#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameDataBlocks; /* 0x57f698 */


int FUN_001ab940(void)

{
  return (*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x5558;
}

} /* extern "C" */
