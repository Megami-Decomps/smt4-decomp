#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044de98;


unsigned int FUN_002542bc(int param_1)

{
  int base = *(int *)((unsigned char *)&DAT_0044de98 + 0x20);
  return *(unsigned int *)(base + param_1 * 4 + 0xd8);
}

} /* extern "C" */
