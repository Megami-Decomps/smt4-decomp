/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00474b34` (_code @ 0x474b34, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemFree(unsigned int);
int bufferPairFree(void);

extern unsigned char DAT_0055c724; /* 0x55c724 */

/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: bufferPairFree. */


unsigned int * FUN_00474b34(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_0055c724;
  if (param_1[2] != 0) {
    bufferPairFree();
    asdMemFree(param_1[2]);
    param_1[2] = 0;
  }
  return param_1;
}

} /* extern "C" */
