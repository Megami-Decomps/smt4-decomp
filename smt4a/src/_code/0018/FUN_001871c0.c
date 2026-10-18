/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001871c0` (_code @ 0x1871c0, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_001871c0(int param_1)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  int temp_v0;
  float in_s0;
  float temp_v1;
  
  temp_v0 = *(int *)(param_1 + 0xc);
  if (temp_v0 != 0) {
    *(float *)(param_1 + 8) = *(float *)(param_1 + 4);
    temp_v1 = *(float *)(param_1 + 4) + in_s0;
    *(float *)(param_1 + 4) = temp_v1;
    if (*(float *)(temp_v0 + 8) <= temp_v1) {
      if (*(char *)(param_1 + 0x20) != '\x02') {
        if (*(char *)(param_1 + 0x20) == '\x01') {
          *(unsigned int *)(param_1 + 4) = 0;
          return 1;
        }
      }
      else if ((*(unsigned char *)(temp_v0 + 4) & 1) != 0) {
        *(unsigned int *)(param_1 + 4) = 0;
        return 1;
      }
      *(float *)(param_1 + 4) = *(float *)(temp_v0 + 8);
    }
  }
  return 0;
}
