#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameDataBlocks; /* 0x57f698 */


int flagsBGetPtr(int param_1)

{
  int base = *(int *)((unsigned char *)&g_gameDataBlocks + 0x4);
  return base + param_1 + 0x28060;
}

} /* extern "C" */
