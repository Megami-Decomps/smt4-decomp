/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004261bc` (_code @ 0x4261bc, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00557f7c; /* 0x557f7c */

/* Supplied declaration required: mwmomobiclipDecoderRelease. */


unsigned int * FUN_004261bc(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00557f7c;
  mwmomobiclipDecoderRelease(param_1[1]);
  return param_1;
}
