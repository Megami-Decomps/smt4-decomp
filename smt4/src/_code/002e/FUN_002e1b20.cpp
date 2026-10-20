#include "romwright_types.h"

extern "C" {

int FUN_002e1a00(void);

extern int DAT_0043de68; /* 0x43de68 */

/* Supplied declaration required: FUN_002e1a00. */


void FUN_002e1b20(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_0043de68 != 0) {
    FUN_002e1a00();
    return;
  }
  return;
}

} /* extern "C" */
