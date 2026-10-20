#include "romwright_types.h"

extern "C" {

extern int g_gameDataBlocks[];


int FUN_0037d494(int param_1)

{
  int base = g_gameDataBlocks[1];
  return base + param_1 * 2 + 0x280c4;
}

} /* extern "C" */
