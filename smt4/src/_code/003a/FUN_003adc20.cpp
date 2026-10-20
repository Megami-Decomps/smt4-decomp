#include "romwright_types.h"

extern "C" {

int FUN_002d0098(int, int);

extern unsigned char DAT_00439c88; /* 0x439c88 */

/* Supplied declaration required: FUN_002d0098. */


void FUN_003adc20(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_002d0098((*(int *)((unsigned char *)&DAT_00439c88 + 0x20)) + 0x2460,0);
  return;
}

} /* extern "C" */
