#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameDataBlocks; /* 0x43e2a8 */


unsigned int FUN_0026b5dc(void)

{
  return (*(unsigned int *)((unsigned char *)&g_gameDataBlocks + 0x4));
}

} /* extern "C" */
