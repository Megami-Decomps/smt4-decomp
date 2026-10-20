/* NON_MATCHING: romwright 0.5.0 decompilation of `hardfp_floorf` (_code @ 0x2a30dc, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void hardfp_floorf(void)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int in_s0;
  
  temp_v0 = ((in_s0 & 0x7fffffff) >> 0x17) - 0x7f;
  if ((int)temp_v0 >= 0x17) {
    return;
  }
  if ((-1 < (int)temp_v0) && ((in_s0 & (0x7fffffU >> (temp_v0 & 0xff))) == 0)) {
    return;
  }
  return;
}

} /* extern "C" */
