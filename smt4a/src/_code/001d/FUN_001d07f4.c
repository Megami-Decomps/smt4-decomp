/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d07f4` (_code @ 0x1d07f4, 0xe4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_00646b39; /* 0x646b39 */


void FUN_001d07f4(unsigned char *param_1)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  int temp_v0;
  float in_s0;
  float temp_v1;
  
  temp_v1 = 1.0f;
  if ((in_s0 <= 1.0f) && (temp_v1 = in_s0, in_s0 < -1.0f)) {
    temp_v1 = -1.0f;
  }
  if ((param_1[3] == 0) && (DAT_00646b39 == '\x02')) {
    temp_v0 = 0x5c1d48;
  }
  else {
    temp_v0 = 0x5c1d3c;
  }
  temp_v0 = *(int *)(temp_v0 + (unsigned int)*param_1 * 4);
  temp_v1 = *(float *)(temp_v0 + (int)((temp_v1 + 1.0f) * 0.5f * 256.0f + 0.5f) * 4);
  if (param_1[1] != 0) {
    temp_v1 = temp_v1 / *(float *)(temp_v0 + 0x200);
  }
  if (param_1[2] != 0) {
    if (1.0f < temp_v1) {
      return;
    }
  }
  else if (2.0f < temp_v1) {
    return;
  }
  if (0.0f <= temp_v1) {
    return;
  }
  return;
}
