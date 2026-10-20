#include "romwright_types.h"

extern "C" {

int FUN_003bbcb4(unsigned int);

extern int DAT_0043de68; /* 0x43de68 */

/* Supplied declaration required: FUN_003bbcb4. */


void FUN_0025461c(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_0043de68 != 0) {
    FUN_003bbcb4(*(unsigned int *)(DAT_0043de68 + 4));
    return;
  }
  return;
}

} /* extern "C" */
