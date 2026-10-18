/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004abfec` (_code @ 0x4abfec, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057a9c8; /* 0x57a9c8 */

extern int FUN_00381198(int);
extern int FUN_003bcf68(int);


unsigned int FUN_004abfec(void)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = DAT_0057a9c8;
  temp_v0 = FUN_00381198(DAT_0057a9c8 + 8);
  if ((temp_v0 == 0) || (temp_v1 = FUN_003bcf68(temp_v1 + 0x24bc), temp_v1 == 0)) {
    temp_v2 = 0;
  }
  else {
    temp_v2 = 1;
  }
  return temp_v2;
}
