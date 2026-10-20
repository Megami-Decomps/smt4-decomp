#include "romwright_types.h"

extern "C" {

int FUN_001654d8(int);

extern int DAT_0057f578; /* 0x57f578 */

/* Supplied declaration required: FUN_001654d8. */


void FUN_00284f50(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_0057f578 != 0) {
    FUN_001654d8(DAT_0057f578 + 0x34);
    return;
  }
  return;
}

} /* extern "C" */
