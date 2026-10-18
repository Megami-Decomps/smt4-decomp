/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00399c60` (_code @ 0x399c60, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0063ff50; /* 0x63ff50 */

extern int nngxIsStereoVisionAllowed(void);


unsigned int FUN_00399c60(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if ((DAT_0063ff50 == 1) && (temp_v0 = nngxIsStereoVisionAllowed(), temp_v0 != 0)) {
    temp_v1 = 1;
  }
  else {
    temp_v1 = 0;
  }
  return temp_v1;
}
