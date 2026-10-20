/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035efa0` (_code @ 0x35efa0, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

extern int btlGetMainState(void);
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_0035efa0(void)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = btlGetMainState();
  temp_v0 = *(short *)(temp_v1 + 0x4c70);
  temp_v2 = btlGetMainState();
  temp_v1 = (int)temp_v0;
  if ((int)temp_v0 < (int)*(short *)(temp_v2 + 0x4c72)) {
    temp_v1 = (int)*(short *)(temp_v2 + 0x4c72);
  }
  scrSetResult(temp_v1);
  return 1;
}

} /* extern "C" */
