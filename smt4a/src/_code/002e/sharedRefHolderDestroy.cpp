#include "romwright_types.h"

extern "C" {

int sharedRefRelease(unsigned int);

extern unsigned char DAT_00558490; /* 0x558490 */

/* Supplied declaration required: sharedRefRelease. */


unsigned int * sharedRefHolderDestroy(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00558490;
  sharedRefRelease(param_1[2]);
  param_1[2] = 0;
  return param_1;
}

} /* extern "C" */
