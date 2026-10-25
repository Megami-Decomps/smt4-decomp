/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00351b28` (_code @ 0x351b28, 0x10 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int serviceQuerySignedByteChecked(void);

/* Supplied declaration required: serviceQuerySignedByteChecked. */


unsigned int FUN_00351b28(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  serviceQuerySignedByteChecked();
  return param_1 ^ 1;
}

} /* extern "C" */
