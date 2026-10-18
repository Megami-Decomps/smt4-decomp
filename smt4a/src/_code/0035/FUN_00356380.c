/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00356380` (_code @ 0x356380, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00570280; /* 0x570280 */

extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern unsigned int FUN_00192748(unsigned int);
extern int FUN_00192798(void);


int FUN_00356380(unsigned int param_1)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00187180(0x23,5);
  temp_v1 = FUN_00192798();
  temp_v2 = FUN_00192748(temp_v0);
  if (param_1 < temp_v2) {
    temp_v1 = temp_v1 + param_1 * 0x2c;
  }
  else {
    if (param_1 < *(int *)(DAT_00570280 + 0x40c) + temp_v2) {
      return *(int *)(DAT_00570280 + 0x410) + (param_1 - temp_v2) * 0x2c;
    }
    temp_v1 = 0;
  }
  return temp_v1;
}
