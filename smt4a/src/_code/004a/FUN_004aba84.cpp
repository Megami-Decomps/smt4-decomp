#include "romwright_types.h"

extern "C" {

int FUN_0038e588(int);

extern unsigned char DAT_0057a9b8; /* 0x57a9b8 */

/* Supplied declaration required: FUN_0038e588. */


void FUN_004aba84(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_0038e588((*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10)) + 0x28c4);
  return;
}

} /* extern "C" */
