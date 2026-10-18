/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025d57c` (_code @ 0x25d57c, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0025cfe4. */


unsigned int FUN_0025d57c(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *param_1;
  if ((0.0f < *(float *)(temp_v0 + 0x7dc)) && (*(int *)(temp_v0 + 0x3ac) == 5)) {
    FUN_0025cfe4(*(unsigned int *)(temp_v0 + 0x7d8),temp_v0 + 0x7dc);
  }
  return 0;
}
