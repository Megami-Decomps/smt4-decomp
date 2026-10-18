/* NON_MATCHING: romwright 0.5.0 decompilation of `ll_sto_f` (_code @ 0x1b487c, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: LZCOUNT (LZCOUNT). */


unsigned int ll_sto_f(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  
  temp_v1 = param_2 & 0x80000000;
  if ((int)temp_v1 < 0) {
    temp_v4 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(param_2 + temp_v4);
  }
  if (param_2 != 0) {
    temp_v2 = 0x20;
    temp_v0 = param_2;
  }
  else {
    temp_v2 = 0;
    temp_v0 = param_1;
  }
  if (param_2 != 0 || param_1 != 0) {
    temp_v3 = temp_v2 - LZCOUNT(temp_v0);
    temp_v0 = (temp_v0 << LZCOUNT(temp_v0)) | (param_1 >> (temp_v3 & 0xff));
    temp_v4 = (unsigned char)((unsigned char)(temp_v0 >> 7) & 1);
    temp_v1 = (temp_v1 | 0x3f800000) + 0xf000000 + temp_v3 * 0x800000 + (temp_v0 >> 8) + (unsigned int)temp_v4;
    if (param_1 << ((0x20 - temp_v3) & 0xff) != 0 || (temp_v0 & 0x7f) != 0) {
      temp_v4 = 0;
    }
    if (temp_v4) {
      temp_v1 = temp_v1 & 0xfffffffe;
    }
    return temp_v1;
  }
  return param_1;
}
