/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00157110` (_code @ 0x157110, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemFree(void);

/* Supplied declaration required: asdMemFree. */


void FUN_00157110(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x18);
  if (*(int **)(param_1 + 0x1c) != piVar4) {
    do {
      if (*piVar4 != 0) {
        asdMemFree();
      }
      piVar4 = piVar4 + 1;
    } while (*(int **)(param_1 + 0x1c) != piVar4);
  }
  temp_v1 = *(int *)(param_1 + 0x1c);
  temp_v2 = *(int *)(param_1 + 0x18);
  if (temp_v2 != temp_v1) {
    if (0 < (temp_v1 - temp_v2) >> 2) {
      for (temp_v0 = (temp_v1 - temp_v2) >> 3; temp_v0 != 0; temp_v0 = temp_v0 - 1) {
      }
    }
    *(unsigned int *)(param_1 + 0x1c) = temp_v1 - ((temp_v1 - temp_v2) & 0xfffffffcU);
  }
  *(unsigned int *)(param_1 + 0x14) = *(unsigned int *)(param_1 + 0x14) & 0xfffffffe;
  return;
}

} /* extern "C" */
