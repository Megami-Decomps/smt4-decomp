#include "romwright_types.h"

extern "C" {

int FUN_001920bc(int);

extern unsigned char DAT_00439c88; /* 0x439c88 */

/* Supplied declaration required: FUN_001920bc. */


void FUN_003af1c4(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_001920bc((*(int *)((unsigned char *)&DAT_00439c88 + 0x20)) + 0x2460);
  return;
}

} /* extern "C" */
