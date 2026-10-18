/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030f06c` (_code @ 0x30f06c, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */


unsigned int FUN_0030f06c(unsigned int param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  
  temp_v0 = *(int *)(param_2 + 8);
  temp_v1 = *(int *)(param_3 + 8);
  temp_v2 = *(unsigned short *)(param_2 + 6) < *(unsigned short *)(param_3 + 6);
  if ((int)((temp_v0 - temp_v1) - (unsigned int)temp_v2) < 0 !=
      (SBORROW4(temp_v0,temp_v1) != SBORROW4(temp_v0 - temp_v1,(unsigned int)temp_v2))) {
    return 1;
  }
  return 0;
}
