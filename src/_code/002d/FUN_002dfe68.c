/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002dfe68` (_code @ 0x2dfe68, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00152bec. */


void FUN_002dfe68(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *param_1;
  FUN_00152bec(*(unsigned int *)(temp_v0 + 0xcc90));
  *(unsigned char *)(temp_v0 + 0xcc70) = 0;
  FUN_00152bec(*(unsigned int *)(temp_v0 + 0xccb4));
  *(unsigned char *)(temp_v0 + 0xcc94) = 0;
  return;
}
