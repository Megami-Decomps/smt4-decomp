#include "romwright_types.h"

extern "C" {
extern unsigned char DAT_005e2214[]; /* 0x5e2214 */

unsigned int FUN_0016a0f0(unsigned int param_1)

{
  unsigned int temp_v0;
  
  if (param_1 < 0x50) {
    temp_v0 = *(unsigned int *)(DAT_005e2214 + param_1 * 0x10 + 4);
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
