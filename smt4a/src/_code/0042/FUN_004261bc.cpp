#include "romwright_types.h"

extern "C" {

int mwmomobiclipDecoderRelease(unsigned int);

extern unsigned char DAT_00557f7c; /* 0x557f7c */

/* Supplied declaration required: mwmomobiclipDecoderRelease. */


unsigned int * FUN_004261bc(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00557f7c;
  mwmomobiclipDecoderRelease(param_1[1]);
  return param_1;
}

} /* extern "C" */
