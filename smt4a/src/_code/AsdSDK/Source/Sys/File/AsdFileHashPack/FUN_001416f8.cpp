#include "romwright_types.h"

extern "C" {

int FUN_00157194(void);
int FUN_002e3328(void);

extern int DAT_005b3fdc; /* 0x5b3fdc */

/* Supplied declaration required: FUN_00157194. */
/* Supplied declaration required: FUN_002e3328. */


void FUN_001416f8(void)

{
/* irregular: 2 native warning(s); review required */
  if (DAT_005b3fdc != 0) {
    FUN_00157194();
    FUN_002e3328();
    DAT_005b3fdc = 0;
  }
  return;
}

} /* extern "C" */
