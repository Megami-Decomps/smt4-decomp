#include "romwright_types.h"

extern "C" {

int FUN_0035ff18(unsigned char *);

extern unsigned char DAT_004e6f14; /* 0x4e6f14 */

/* Supplied declaration required: FUN_0035ff18. */


void FUN_00360104(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_0035ff18(&DAT_004e6f14);
  return;
}

} /* extern "C" */
