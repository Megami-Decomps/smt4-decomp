#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameDataBlocks; /* 0x57f698 */


void FUN_002a6480(unsigned short param_1)

{
  unsigned char *q = (unsigned char *)(*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x27c00;
  unsigned char *r = q + 0x288;
  *(unsigned short *)(r + 0xc) = param_1;
  return;
}

} /* extern "C" */
