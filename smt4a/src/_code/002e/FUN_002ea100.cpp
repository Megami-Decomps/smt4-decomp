#include "romwright_types.h"

extern "C" {

int wstrDuplicateInto(unsigned int *);

extern unsigned char DAT_0055affc; /* 0x55affc */

/* Supplied declaration required: wstrDuplicateInto. */


unsigned int * FUN_002ea100(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_0055affc;
  wstrDuplicateInto(param_1 + 1);
  return param_1;
}

} /* extern "C" */
