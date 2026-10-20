#include "romwright_types.h"

extern "C" {

int FUN_00293348(int, int);

extern int DAT_0043dcf0; /* 0x43dcf0 */

/* Supplied declaration required: FUN_00293348. */


void FUN_003111e8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_0043dcf0 == 0) {
    return;
  }
  if (param_1 != 0) {
    FUN_00293348(8,1);
    return;
  }
  FUN_00293348(0x16,1);
  return;
}

} /* extern "C" */
