/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038c04c` (_code @ 0x38c04c, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int bufferPairFree(void);
int asdMemFree(unsigned int);

extern unsigned char DAT_0042221c; /* 0x42221c */

/* Supplied declaration required: bufferPairFree. */
/* Supplied declaration required: asdMemFree. */


unsigned int * FUN_0038c04c(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_0042221c;
  if (param_1[2] != 0) {
    bufferPairFree();
    asdMemFree(param_1[2]);
    param_1[2] = 0;
  }
  return param_1;
}

} /* extern "C" */
