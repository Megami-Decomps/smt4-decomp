#include "romwright_types.h"

extern "C" {

int FUN_0028fce8(int);

extern unsigned char DAT_0057a9b8; /* 0x57a9b8 */

/* Supplied declaration required: FUN_0028fce8. */


void FUN_004a9a50(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_0028fce8((*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10)) + 8);
  return;
}

} /* extern "C" */
