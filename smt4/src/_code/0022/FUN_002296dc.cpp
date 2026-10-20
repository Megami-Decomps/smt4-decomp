#include "romwright_types.h"

extern "C" {

int FUN_003130c4(int);

extern unsigned char DAT_00439c88; /* 0x439c88 */

/* Supplied declaration required: FUN_003130c4. */


void FUN_002296dc(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_003130c4((*(int *)((unsigned char *)&DAT_00439c88 + 0x20)) + 0x2460);
  return;
}

} /* extern "C" */
