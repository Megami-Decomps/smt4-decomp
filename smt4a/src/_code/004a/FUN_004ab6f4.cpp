#include "romwright_types.h"

extern "C" {

int FUN_0034eda0(int);

extern unsigned char DAT_0057a9b8; /* 0x57a9b8 */

/* Supplied declaration required: FUN_0034eda0. */


void FUN_004ab6f4(void)

{
/* irregular: 1 native warning(s); review required */
  if ((*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10)) != 0) {
    FUN_0034eda0((*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10)) + 0x28c4);
    return;
  }
  return;
}

} /* extern "C" */
