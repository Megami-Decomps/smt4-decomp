#include "romwright_types.h"

extern "C" {

int FUN_003014b4(unsigned int *);

extern unsigned char DAT_00559844; /* 0x559844 */

/* Supplied declaration required: FUN_003014b4. */


unsigned int * FUN_00115770(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00559844;
  FUN_003014b4(param_1);
  return param_1;
}

} /* extern "C" */
