#include "romwright_types.h"

extern "C" {

int FUN_00186a3c(unsigned int, unsigned int);

extern int DAT_0059dbb8; /* 0x59dbb8 */

/* Supplied declaration required: FUN_00186a3c. */


void FUN_001861ac(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_00186a3c(*(unsigned int *)(DAT_0059dbb8 + param_1 * 0x18),param_2);
  return;
}

} /* extern "C" */
