/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ad1e0` (_code @ 0x2ad1e0, 0x4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: ClearExclusiveLocal (CALLOTHER). */
/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */


unsigned int FUN_002ad1e0(int *param_1)

{
/* irregular: 1 goto(s); 2 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  
  if (*param_1 != 1) {
    do {
      temp_v1 = *param_1;
      if (temp_v1 != 0) {
        ClearExclusiveLocal();
        goto LAB_002ad21c;
      }
      temp_v0 = (unsigned char)hasExclusiveAccess(param_1);
    } while (!temp_v0);
    *param_1 = -1;
LAB_002ad21c:
    if (temp_v1 != 0) {
      return 0;
    }
  }
  return 1;
}
