/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e3820` (_code @ 0x2e3820, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00435d90; /* 0x435d90 */

extern int FUN_002bf41c(unsigned int);


unsigned char FUN_002e3820(void)

{
  int temp_v0;
  
  if (DAT_00435d90 == 0) {
    return 0;
  }
  temp_v0 = FUN_002bf41c(*(unsigned int *)(DAT_00435d90 + 0x2c));
  return temp_v0 != 0;
}
