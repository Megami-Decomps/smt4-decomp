/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00293e08` (_code @ 0x293e08, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nodeSetScale(unsigned int, int);

/* Supplied declaration required: nodeSetScale. */


void FUN_00293e08(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  nodeSetScale(*(unsigned int *)(*(int *)(param_1 + 8) + 8),0);
  temp_v1 = 0;
  do {
    temp_v0 = *(int *)(param_1 + temp_v1 * 0x50 + 0x18);
    if (temp_v0 != 0) {
      nodeSetScale(*(unsigned int *)(temp_v0 + 8),0);
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 3);
  return;
}

} /* extern "C" */
