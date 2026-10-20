#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameDataBlocks; /* 0x57f698 */


unsigned short FUN_00203b08(void)

{
  return *(*(unsigned short * *)((unsigned char *)&g_gameDataBlocks + 0xc));
}

} /* extern "C" */
