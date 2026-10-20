/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ddfd8` (_code @ 0x3ddfd8, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_00619538; /* 0x619538 */
extern unsigned int DAT_00619558; /* 0x619558 */

extern int FUN_00180008(unsigned int);


unsigned int FUN_003ddfd8(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00180008(1);
  if (temp_v0 != 0) {
    temp_v1 = 0;
  }
  else {
    if (((DAT_00619538 & 2) == 0 || (DAT_00619538 & 0x20) == 0) &&
       ((DAT_00619558 & 2) == 0 || (DAT_00619558 & 0x20) == 0)) {
      return 0;
    }
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
