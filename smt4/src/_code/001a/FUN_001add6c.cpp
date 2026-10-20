#include "romwright_types.h"

extern "C" {

int FUN_002a03a0(unsigned int, int, int);

extern int DAT_0043dd68; /* 0x43dd68 */

/* Supplied declaration required: FUN_002a03a0. */


unsigned int FUN_001add6c(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_0043dd68 == 0) {
    return 0;
  }
  FUN_002a03a0(*(unsigned int *)(DAT_0043dd68 + 0x47c),0,0x3c);
  return 1;
}

} /* extern "C" */
