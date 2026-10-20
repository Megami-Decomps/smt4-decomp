/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_Util_GetByteBySample` (_code @ 0x37bdb4, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int nw_snd_internal_Util_GetByteBySample(unsigned int param_1,int param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = param_1;
  if (param_2 != 0) {
    if (param_2 == 1) {
      temp_v1 = param_1 << 1;
    }
    else {
      temp_v1 = 0;
      if (param_2 == 3) {
        temp_v1 = (unsigned int)(((unsigned long long)param_1 * 0x49249249 + 0x49249249) >> 0x22) * 8;
        temp_v0 = param_1 + (unsigned int)(((unsigned long long)param_1 * 0x49249249 + 0x49249249) >> 0x22) * -0xe;
        if (temp_v0 != 0) {
          temp_v1 = temp_v1 + ((temp_v0 + 1U) >> 1) + 1;
        }
      }
    }
  }
  return temp_v1;
}

} /* extern "C" */
