#include "romwright_types.h"

extern "C" {

int FUN_00195fc8(void);

extern int DAT_005c0a9c; /* 0x5c0a9c */

/* Supplied declaration required: FUN_00195fc8. */


int FUN_001886bc(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_005c0a9c == 0) {
    FUN_00195fc8();
  }
  return DAT_005c0a9c;
}

} /* extern "C" */
