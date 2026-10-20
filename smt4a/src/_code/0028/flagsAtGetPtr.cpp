#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameDataBlocks;


int flagsAtGetPtr(int param_1)

{
  int t = *(int *)((unsigned char *)&g_gameDataBlocks + 0x4);
  return param_1 + t + 0x2831c;
}

} /* extern "C" */
