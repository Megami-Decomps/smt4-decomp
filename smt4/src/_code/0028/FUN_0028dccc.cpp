#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043da28;


unsigned short FUN_0028dccc(unsigned int param_1)

{
  unsigned short temp_v0;
  int base;
  
  if (param_1 >= 6) {
    temp_v0 = 0;
  }
  else {
    base = *(int *)((unsigned char *)&DAT_0043da28 + 0x4);
    temp_v0 = *(unsigned short *)(base + param_1 * 4 + 0x496);
  }
  return temp_v0;
}

} /* extern "C" */
