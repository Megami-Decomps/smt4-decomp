#include "romwright_types.h"

extern "C" {

int FUN_00128f00(unsigned char *);

extern unsigned char DAT_004e6f14; /* 0x4e6f14 */

/* Supplied declaration required: FUN_00128f00. */


void FUN_002bcc54(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_00128f00(&DAT_004e6f14);
  return;
}

} /* extern "C" */
