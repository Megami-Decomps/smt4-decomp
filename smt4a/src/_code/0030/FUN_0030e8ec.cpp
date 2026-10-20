#include "romwright_types.h"

extern "C" {

int asdOperatorDeleteB(unsigned int);

extern unsigned char DAT_0055cba4; /* 0x55cba4 */

/* Supplied declaration required: asdOperatorDeleteB. */


unsigned int * FUN_0030e8ec(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_0055cba4;
  if (*(char *)(param_1 + 6) != '\0') {
    asdOperatorDeleteB(param_1[5]);
  }
  asdOperatorDeleteB(param_1[0xb]);
  asdOperatorDeleteB(param_1[0xc]);
  return param_1;
}

} /* extern "C" */
