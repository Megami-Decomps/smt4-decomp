#include "romwright_types.h"

extern "C" {

int FUN_0012091c(unsigned int *);

extern unsigned char DAT_0055b3e0; /* 0x55b3e0 */

/* Supplied declaration required: FUN_0012091c. */


unsigned int * FUN_002ea668(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_0055b3e0;
  FUN_0012091c(param_1);
  return param_1;
}

} /* extern "C" */
