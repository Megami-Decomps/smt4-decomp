#include "romwright_types.h"

extern "C" {

int FUN_00335518(int, unsigned int);

extern int DAT_00434260; /* 0x434260 */

/* Supplied declaration required: FUN_00335518. */


void FUN_0019db48(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_00434260 != 0) {
    FUN_00335518(DAT_00434260,param_1);
    return;
  }
  return;
}

} /* extern "C" */
