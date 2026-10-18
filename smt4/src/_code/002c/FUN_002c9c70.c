/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c9c70` (_code @ 0x2c9c70, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044cdf0; /* 0x44cdf0 */

extern int FUN_0024c278(void);
extern int FUN_002c09d0(unsigned int);


unsigned int FUN_002c9c70(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if (DAT_0044cdf0 == 0) {
    return 0;
  }
  temp_v0 = FUN_002c09d0(0x404);
  temp_v1 = 0;
  if ((temp_v0 != 0) && (temp_v0 = FUN_0024c278(), temp_v1 = 0, temp_v0 != 0)) {
    temp_v1 = 1;
  }
  return temp_v1;
}
