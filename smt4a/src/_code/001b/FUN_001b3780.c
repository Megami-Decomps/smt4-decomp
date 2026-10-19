/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b3780` (_code @ 0x1b3780, 0x130 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: hardfp_floorf. */


void FUN_001b3780(float *param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 5 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  unsigned int in_fpscr;
  unsigned int temp_v2;
  unsigned int temp_v3;
  float in_s0;
  float temp_v4;
  float temp_v5;
  
  temp_v4 = *param_1;
  temp_v3 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v4 < in_s0) << 0x1f) |
          ((unsigned int)(temp_v4 == in_s0) << 0x1e);
  temp_v2 = temp_v3 | ((unsigned int)((temp_v4 != temp_v4) || (in_s0 != in_s0)) << 0x1c);
  temp_v1 = (unsigned char)(temp_v3 >> 0x18);
  if (!((unsigned char)((temp_v1 >> 6) & 1) || temp_v1 >> 7 != ((unsigned char)(temp_v2 >> 0x1c) & 1))) {
    temp_v0 = *(char *)(param_1 + 2);
    if (temp_v0 != '\0') {
      if (temp_v0 != '\x01') {
        if (temp_v0 == '\x02') {
          temp_v4 = (in_s0 - temp_v4) / (param_1[1] - temp_v4);
          hardfp_floorf();
          VectorSignedToFloat((int)temp_v4,(unsigned char)(temp_v2 >> 0x16) & 3);
        }
      }
      else {
        temp_v4 = (in_s0 - temp_v4) / (param_1[1] - temp_v4);
        hardfp_floorf();
        VectorSignedToFloat((int)temp_v4,(unsigned char)(temp_v2 >> 0x16) & 3);
      }
    }
  }
  else {
    temp_v5 = param_1[1];
    temp_v3 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v5 == in_s0) << 0x1e) |
            ((unsigned int)(in_s0 <= temp_v5) << 0x1d);
    temp_v1 = (unsigned char)(temp_v3 >> 0x18);
    if ((!(unsigned char)((temp_v1 >> 5) & 1) || (unsigned char)(temp_v1 >> 6)) &&
       (temp_v0 = *(char *)((int)param_1 + 9), temp_v0 != '\0')) {
      if (temp_v0 != '\x01') {
        if (temp_v0 == '\x02') {
          temp_v4 = (in_s0 - temp_v4) / (temp_v5 - temp_v4);
          hardfp_floorf();
          VectorSignedToFloat((int)temp_v4,(unsigned char)(temp_v3 >> 0x16) & 3);
        }
      }
      else {
        temp_v4 = (in_s0 - temp_v4) / (temp_v5 - temp_v4);
        hardfp_floorf();
        VectorSignedToFloat((int)temp_v4,(unsigned char)(temp_v3 >> 0x16) & 3);
      }
    }
  }
  return;
}
