#include "romwright_types.h"

extern "C" {

int FUN_0039ea80(int);

extern unsigned char DAT_0057a9b8; /* 0x57a9b8 */

/* Supplied declaration required: FUN_0039ea80. */


void FUN_004ab8a4(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_0039ea80((*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10)) + 0x28c4);
  return;
}

} /* extern "C" */
