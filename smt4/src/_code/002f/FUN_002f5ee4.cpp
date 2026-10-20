#include "romwright_types.h"

extern "C" {

int FUN_0025011c(void);

extern unsigned char DAT_0044ea80; /* 0x44ea80 */

/* Supplied declaration required: FUN_0025011c. */


void FUN_002f5ee4(void)

{
/* irregular: 1 native warning(s); review required */
  if ((*(int *)((unsigned char *)&DAT_0044ea80 + 0x48)) != 0) {
    FUN_0025011c();
    (*(int *)((unsigned char *)&DAT_0044ea80 + 0x48)) = 0;
  }
  return;
}

} /* extern "C" */
