/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a15e4` (_code @ 0x2a15e4, 0xe4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern signed char DAT_004ea169; /* 0x4ea169 */


void FUN_002a15e4(unsigned char *param_1)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  int temp_v0;
  float in_s0;
  float temp_v1;
  
  temp_v1 = 1.0f;
  if ((in_s0 <= 1.0f) && (temp_v1 = in_s0, in_s0 < -1.0f)) {
    temp_v1 = -1.0f;
  }
  if ((param_1[3] == 0) && (DAT_004ea169 == '\x02')) {
    temp_v0 = 0x473558;
  }
  else {
    temp_v0 = 0x47354c;
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

} /* extern "C" */
