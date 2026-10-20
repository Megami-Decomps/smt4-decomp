#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameDataBlocks; /* 0x43e2a8 */


int FUN_00262f78(void)

{
  int base = *(int *)((unsigned char *)&g_gameDataBlocks + 0x4) + 0x24b88;
  return (int)*(short *)(base + 0x24);
}

} /* extern "C" */
