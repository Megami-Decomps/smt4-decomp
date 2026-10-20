/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00351bc0` (_code @ 0x351bc0, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int mwmomobiclipDecoderRelease(unsigned int);

extern unsigned char DAT_00420ad0; /* 0x420ad0 */

/* Supplied declaration required: mwmomobiclipDecoderRelease. */


unsigned int * FUN_00351bc0(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00420ad0;
  mwmomobiclipDecoderRelease(param_1[1]);
  return param_1;
}

} /* extern "C" */
