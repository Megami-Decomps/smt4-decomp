#include "romwright_types.h"

extern "C" {

int FUN_002c52f8(void);

extern int DAT_00471a68; /* 0x471a68 */

/* Supplied declaration required: FUN_002c52f8. */


int FUN_002ad888(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_00471a68 == 0) {
    FUN_002c52f8();
  }
  return DAT_00471a68;
}

} /* extern "C" */
