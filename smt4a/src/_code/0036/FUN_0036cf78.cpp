#include "romwright_types.h"

extern "C" {

int FUN_002e2114(unsigned int);

extern int DAT_0057f118; /* 0x57f118 */

/* Supplied declaration required: FUN_002e2114. */


void FUN_0036cf78(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_0057f118 != 0) {
    FUN_002e2114(*(unsigned int *)(DAT_0057f118 + 4));
    return;
  }
  return;
}

} /* extern "C" */
