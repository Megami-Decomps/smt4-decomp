#include "romwright_types.h"

extern "C" {

int FUN_002c425c(unsigned int, unsigned int);

extern unsigned int *DAT_0043dfc0; /* 0x43dfc0 */

/* Supplied declaration required: FUN_002c425c. */


void FUN_00249dc4(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002c425c(*DAT_0043dfc0,param_1);
  return;
}

} /* extern "C" */
