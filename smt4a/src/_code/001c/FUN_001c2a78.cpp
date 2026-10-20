#include "romwright_types.h"

extern "C" {


void FUN_001c2a78(int param_1,unsigned int param_2,float f0)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = 0;
  for (; (temp_v0 < *(unsigned int *)(param_1 + 0x224) && (param_2 != 0)); param_2 = param_2 >> 1) {
    if ((param_2 & 1) != 0) {
      *(float *)(param_1 + temp_v0 * 0x24 + 0x2080) = f0;
    }
    temp_v0 = temp_v0 + 1;
  }
  return;
}

} /* extern "C" */
