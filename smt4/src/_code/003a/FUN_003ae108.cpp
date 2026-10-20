#include "romwright_types.h"

extern "C" {

int FUN_001e0db8(int);

extern unsigned char DAT_00439c88; /* 0x439c88 */

/* Supplied declaration required: FUN_001e0db8. */


void FUN_003ae108(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_001e0db8((*(int *)((unsigned char *)&DAT_00439c88 + 0x20)) + 0x2460);
  return;
}

} /* extern "C" */
