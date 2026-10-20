#include "romwright_types.h"

extern "C" {

int FUN_00187d04(unsigned int, unsigned int);

extern unsigned int DAT_0059dbb4; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00187d04. */


void FUN_002a1c8c(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_00187d04(DAT_0059dbb4,param_1);
  return;
}

} /* extern "C" */
