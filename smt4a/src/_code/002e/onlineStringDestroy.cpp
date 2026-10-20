/* NON_MATCHING: romwright 0.5.0 decompilation of `onlineStringDestroy` (_code @ 0x2e9318, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int operatorDeleteArray(void);

extern unsigned char DAT_0055affc; /* 0x55affc */

/* Supplied declaration required: operatorDeleteArray. */


unsigned int * onlineStringDestroy(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_0055affc;
  if (param_1[1] != 0) {
    operatorDeleteArray();
  }
  return param_1;
}

} /* extern "C" */
