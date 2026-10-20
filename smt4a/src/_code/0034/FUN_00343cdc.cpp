#include "romwright_types.h"

extern "C" {

int FUN_003a4980(unsigned int, unsigned int, unsigned int);

extern int DAT_0057f118; /* 0x57f118 */

/* Supplied declaration required: FUN_003a4980. */


void FUN_00343cdc(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_0057f118 != 0) {
    FUN_003a4980(*(unsigned int *)(DAT_0057f118 + 0xc),*(unsigned int *)(DAT_0057f118 + 8),
                 *(unsigned int *)(DAT_0057f118 + 0x58));
    return;
  }
  return;
}

} /* extern "C" */
