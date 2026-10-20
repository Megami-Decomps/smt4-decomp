#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameDataBlocks; /* 0x57f698 */


int FUN_001801a4(void)

{
  return (*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x90;
}

} /* extern "C" */
