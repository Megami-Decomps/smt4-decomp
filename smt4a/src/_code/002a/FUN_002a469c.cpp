#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameDataBlocks; /* 0x57f698 */


int FUN_002a469c(void)

{
  int p = *(int *)((unsigned char *)&g_gameDataBlocks + 0x4) + 0x27e88;
  return (int)*(short *)(p + 0xc);
}

} /* extern "C" */
