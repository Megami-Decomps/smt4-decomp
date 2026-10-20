#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameDataBlocks; /* 0x43e2a8 */


unsigned short FUN_0018c0d8(void)

{
  return *(*(unsigned short * *)((unsigned char *)&g_gameDataBlocks + 0xc));
}

} /* extern "C" */
