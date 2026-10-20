#include "romwright_types.h"

extern "C" {

int FUN_001bd438(unsigned char *, int);

extern unsigned char DAT_00643310; /* 0x643310 */

/* Supplied declaration required: FUN_001bd438. */


void FUN_0042ce1c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 8) != 0) {
    FUN_001bd438(&DAT_00643310,param_1);
    return;
  }
  return;
}

} /* extern "C" */
