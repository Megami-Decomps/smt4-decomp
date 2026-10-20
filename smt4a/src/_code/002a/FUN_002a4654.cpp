#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameDataBlocks; /* 0x57f698 */


unsigned int FUN_002a4654(void)

{
  return (*(unsigned int *)((unsigned char *)&g_gameDataBlocks + 0x8));
}

} /* extern "C" */
