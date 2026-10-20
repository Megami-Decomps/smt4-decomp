#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameDataBlocks; /* 0x57f698 */


int FUN_001388c8(void)

{
  return (int)(*(signed char *)((unsigned char *)&g_gameDataBlocks + 0x2));
}

} /* extern "C" */
