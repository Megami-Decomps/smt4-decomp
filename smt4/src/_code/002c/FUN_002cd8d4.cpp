#include "romwright_types.h"

extern "C" {

int FUN_002916ac(unsigned int);

extern unsigned int DAT_00433a58; /* 0x433a58 */

/* Supplied declaration required: FUN_002916ac. */


void FUN_002cd8d4(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_002916ac(DAT_00433a58);
  DAT_00433a58 = 0;
  return;
}

} /* extern "C" */
