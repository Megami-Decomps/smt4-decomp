#include "romwright_types.h"

extern "C" {

int FUN_002beda4(int);

extern int DAT_0043e140; /* 0x43e140 */

/* Supplied declaration required: FUN_002beda4. */


void FUN_001dd8f0(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_0043e140 != 0) {
    FUN_002beda4(DAT_0043e140 + 0x34);
    return;
  }
  return;
}

} /* extern "C" */
