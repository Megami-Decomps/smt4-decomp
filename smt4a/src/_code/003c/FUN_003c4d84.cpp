#include "romwright_types.h"

extern "C" {

int FUN_002bf18c(int, unsigned int);

extern int DAT_00587f28; /* 0x587f28 */

/* Supplied declaration required: FUN_002bf18c. */


void FUN_003c4d84(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_00587f28 != 0) {
    FUN_002bf18c(DAT_00587f28 + 0x68,param_1);
    return;
  }
  return;
}

} /* extern "C" */
