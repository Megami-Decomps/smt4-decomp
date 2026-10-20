#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043da28;


unsigned short FUN_002d6624(unsigned int param_1)

{
  int base = *(int *)((unsigned char *)&DAT_0043da28 + 0x4);
  if ((base != 0) && (param_1 < 6)) {
    return *(unsigned short *)(base + 0x400 + param_1 * 4 + 0x96);
  }
  return 0;
}

} /* extern "C" */
