/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002992e0` (_code @ 0x2992e0, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00294450(...);

extern unsigned char DAT_0044e140; /* 0x44e140 */

/* Supplied declaration required: FUN_00294450. */


void FUN_002992e0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  if (param_1 != 0) {
    if (param_1 != 1) {
      if (param_1 == 2) {
        FUN_00294450(*(unsigned int *)((*(int *)((unsigned char *)&DAT_0044e140 + 0x4)) + 0x1e80),2,7);
      }
      temp_v0 = (*(int *)((unsigned char *)&DAT_0044e140 + 0x4));
      *(unsigned int *)((*(int *)((unsigned char *)&DAT_0044e140 + 0x4)) + 0x10) = 0;
      *(unsigned int *)(temp_v0 + 0x12dc) = 6;
      return;
    }
    temp_v1 = *(unsigned int *)((*(int *)((unsigned char *)&DAT_0044e140 + 0x4)) + 0x1e80);
    temp_v2 = 1;
  }
  else {
    temp_v1 = *(unsigned int *)((*(int *)((unsigned char *)&DAT_0044e140 + 0x4)) + 0x1e80);
    temp_v2 = 0;
  }
  FUN_00294450(temp_v1,temp_v2,7);
  temp_v0 = (*(int *)((unsigned char *)&DAT_0044e140 + 0x4));
  *(unsigned int *)((*(int *)((unsigned char *)&DAT_0044e140 + 0x4)) + 0x10) = 0;
  *(unsigned int *)(temp_v0 + 0x12dc) = 6;
  return;
}

} /* extern "C" */
