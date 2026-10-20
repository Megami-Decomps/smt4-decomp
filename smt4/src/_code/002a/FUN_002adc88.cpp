#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameDataBlocks; /* 0x43e2a8 */


int FUN_002adc88(void)

{
  return (*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0xb9a4;
}

} /* extern "C" */
