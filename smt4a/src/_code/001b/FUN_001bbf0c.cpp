/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001bbf0c` (_code @ 0x1bbf0c, 0x13c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001015aa(int);
int FUN_001c4370(unsigned int [2]);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Supplied declaration required: FUN_001015aa. */
/* Supplied declaration required: FUN_001c4370. */


void FUN_001bbf0c(void)

{
/* irregular: irregular input(s): in_r3, in_s0; 4 native warning(s); review required */
  unsigned int in_r3;
  float in_s0;
  float temp_v0;
  unsigned int temp_v1 [2];
  
  if ((unsigned int)((int)in_s0 * 2) < 0x7e921fb6) {
    if ((unsigned int)((int)in_s0 * 2) < 0x73000000) {
      temp_v1[0] = 0xffffffff;
    }
    else {
      temp_v1[0] = 0;
    }
  }
  else if ((unsigned int)romwright_fabs_4(in_s0) < 0x46490e49) {
    if (((unsigned int)in_s0 & 0x80000000) != 0) {
      temp_v0 = (in_s0 * 0.63661975f - 8388608.0f) + 8388608.0f;
    }
    else {
      temp_v0 = (in_s0 * 0.63661975f + 8388608.0f) - 8388608.0f;
    }
    temp_v1[0] = (int)temp_v0 & 3;
    in_s0 = (((in_s0 - temp_v0 * 1.5703125f) - temp_v0 * 0.0004837513f) - temp_v0 * 7.5495336e-08f) -
            temp_v0 * 2.563344e-12f;
  }
  else {
    temp_v1[0] = in_r3;
    FUN_001c4370(temp_v1);
  }
  if (-1 < (int)temp_v1[0]) {
    if ((temp_v1[0] & 1) != 0) {
      if ((temp_v1[0] & 2) != 0) {
        return;
      }
    }
    else if ((temp_v1[0] & 2) == 0) {
      return;
    }
    return;
  }
  if ((unsigned int)((int)in_s0 * 2) < 0xff000000) {
    return;
  }
  if ((int)in_s0 * 2 == 0xff000000) {
    FUN_001015aa(1);
    return;
  }
  return;
}

} /* extern "C" */
