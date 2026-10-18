/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011bebc` (_code @ 0x11bebc, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004c6484; /* 0x4c6484 */
extern unsigned char DAT_004c64a4; /* 0x4c64a4 */


unsigned int FUN_0011bebc(int param_1)

{
  int temp_v0;
  
  temp_v0 = 0;
  do {
    if (*(int *)(temp_v0 * 4 + 0x4c6464) == param_1) {
      *(unsigned int *)(temp_v0 * 4 + 0x4c6464) = 0;
      *(unsigned int *)(&DAT_004c6484 + temp_v0 * 4) = 0;
      *(unsigned int *)(&DAT_004c64a4 + temp_v0 * 4) = 0;
      return 1;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 8);
  return 0;
}
