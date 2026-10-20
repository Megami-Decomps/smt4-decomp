#include "romwright_types.h"

extern "C" {

int onlineScopedLockRelease(unsigned int *);

extern unsigned char DAT_0055b294; /* 0x55b294 */

/* Supplied declaration required: onlineScopedLockRelease. */


unsigned int * _ZN9Obj55b28cD1Ev(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_0055b294;
  onlineScopedLockRelease(param_1);
  return param_1;
}

} /* extern "C" */
