#include "romwright_types.h"

extern "C" {

int gpuSubmitFloat24Vectors(int);

extern int DAT_00464c40; /* 0x464c40 */

/* Supplied declaration required: gpuSubmitFloat24Vectors. */


void FUN_00241d44(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (param_1 == 0) {
    param_1 = DAT_00464c40;
  }
  gpuSubmitFloat24Vectors(param_1);
  return;
}

} /* extern "C" */
