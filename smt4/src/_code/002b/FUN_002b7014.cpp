#include "romwright_types.h"

extern "C" {

int FUN_002af39c(int);

extern unsigned int DAT_004729e0; /* 0x4729e0 */

/* Supplied declaration required: FUN_002af39c. */


void FUN_002b7014(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_002af39c((*(int *)((unsigned char *)&DAT_004729e0 + 0x4)) << 2);
  DAT_004729e0 = 0;
  (*(int *)((unsigned char *)&DAT_004729e0 + 0x4)) = 0;
  return;
}

} /* extern "C" */
