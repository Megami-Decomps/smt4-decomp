/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d6b48` (_code @ 0x3d6b48, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdCameraCreateFromResource(void);

/* Supplied declaration required: asdCameraCreateFromResource. */


unsigned char FUN_003d6b48(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  
  temp_v0 = *(int *)(param_1 + 0x734);
  temp_v1 = temp_v0 != 0;
  if (temp_v1) {
    asdCameraCreateFromResource();
    *(int *)(param_1 + 0x730) = temp_v0;
    *(unsigned int *)(temp_v0 + 0x14) = *(unsigned int *)(param_1 + 0x734);
  }
  return temp_v1;
}

} /* extern "C" */
