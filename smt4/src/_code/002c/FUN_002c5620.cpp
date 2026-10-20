#include "romwright_types.h"

extern "C" {

int FUN_0010fb68(unsigned int);

extern unsigned char DAT_0043e2a8; /* 0x43e2a8 */

/* Supplied declaration required: FUN_0010fb68. */


void FUN_002c5620(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_0010fb68((*(unsigned int *)((unsigned char *)&DAT_0043e2a8 + 0xc)));
  return;
}

} /* extern "C" */
