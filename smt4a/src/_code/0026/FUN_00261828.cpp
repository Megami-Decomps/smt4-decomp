#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameDataBlocks; /* 0x57f698 */


int FUN_00261828(void)

{
  return (*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x22220;
}

} /* extern "C" */
