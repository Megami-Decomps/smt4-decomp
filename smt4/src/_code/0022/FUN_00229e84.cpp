#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameDataBlocks; /* 0x43e2a8 */


unsigned int FUN_00229e84(void)

{
  return (*(unsigned int *)((unsigned char *)&g_gameDataBlocks + 0xc));
}

} /* extern "C" */
