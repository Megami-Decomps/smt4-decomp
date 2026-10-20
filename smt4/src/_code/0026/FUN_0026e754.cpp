#include "romwright_types.h"

extern "C" {

int FUN_002b90f8(unsigned int, unsigned int);

extern unsigned int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_002b90f8. */


void FUN_0026e754(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002b90f8(DAT_0044ea00,param_1);
  return;
}

} /* extern "C" */
