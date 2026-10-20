#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00588e3c;


unsigned int FUN_00275bb0(int param_1)

{
  int base = *(int *)((unsigned char *)&DAT_00588e3c + 0x20);
  return *(unsigned int *)(base + param_1 * 4 + 0xd8);
}

} /* extern "C" */
