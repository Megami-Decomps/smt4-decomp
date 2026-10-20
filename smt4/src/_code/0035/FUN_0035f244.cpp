/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035f244` (_code @ 0x35f244, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_0035f244(unsigned int param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_r12 */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int in_r12;
  
  if (0 < param_3) {
    in_r12 = 0xff20;
  }
  temp_v0 = 0;
  if (temp_v0 < param_3) {
    do {
      temp_v1 = (unsigned int)*(unsigned short *)(param_2 + temp_v0 * 2);
      if (temp_v1 == 0) {
        return 0;
      }
      if (temp_v1 == 0x40 || temp_v1 == in_r12) {
        return 1;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < param_3);
  }
  return 0;
}

} /* extern "C" */
