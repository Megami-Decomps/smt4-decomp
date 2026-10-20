/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a73fc` (_code @ 0x1a73fc, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030ea58(int, unsigned int);

/* Supplied declaration required: FUN_0030ea58. */


unsigned int FUN_001a73fc(unsigned int param_1,int *param_2,int *param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned short temp_v2;
  
  temp_v2 = *(unsigned short *)(*param_2 + 6) & 0xff;
  temp_v0 = *(unsigned short *)(*param_3 + 6) & 0xff;
  if (temp_v0 < temp_v2) {
    return 0;
  }
  if (temp_v0 <= temp_v2) {
    temp_v1 = *(int *)(param_2[1] + 0x28);
    FUN_0030ea58(temp_v1,*(unsigned int *)(param_3[1] + 0x28));
    if (temp_v1 != 0) {
      if (-1 < temp_v1) {
        return 0;
      }
    }
    else if ((float)param_3[0xb] <= (float)param_2[0xb]) {
      return 0;
    }
  }
  return 1;
}

} /* extern "C" */
