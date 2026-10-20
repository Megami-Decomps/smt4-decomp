#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameDataBlocks; /* 0x43e2a8 */


int FUN_00103e50(void)

{
  return (int)(*(signed char *)((unsigned char *)&g_gameDataBlocks + 0x2));
}

} /* extern "C" */
