#include "romwright_types.h"

extern "C" {

int gpuSubmitFloat24Vectors(int);

extern int DAT_005b3ce8; /* 0x5b3ce8 */

/* Supplied declaration required: gpuSubmitFloat24Vectors. */


void gpuSubmitFloatVectorsOrDefault(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (param_1 == 0) {
    param_1 = DAT_005b3ce8;
  }
  gpuSubmitFloat24Vectors(param_1);
  return;
}

} /* extern "C" */
