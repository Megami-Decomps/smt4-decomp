#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameDataBlocks; /* 0x57f698 */


unsigned char FUN_002854d8(unsigned int param_1,char param_2)

{
  int temp_v0;
  
  if (param_1 < 0x501) {
    temp_v0 = (*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + param_1 * 0x50;
    unsigned char *pb = (unsigned char *)(temp_v0 + 0x5f0c);
    pb[0x16] = (pb[0x16] & ~2) | (param_2 << 1);
  }
  return param_1 < 0x501;
}

} /* extern "C" */
