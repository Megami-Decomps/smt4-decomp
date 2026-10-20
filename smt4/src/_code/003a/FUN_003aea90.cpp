#include "romwright_types.h"

extern "C" {

int FUN_00225238(int);

extern unsigned char DAT_00439c88; /* 0x439c88 */

/* Supplied declaration required: FUN_00225238. */


void FUN_003aea90(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_00225238((*(int *)((unsigned char *)&DAT_00439c88 + 0x20)) + 8);
  return;
}

} /* extern "C" */
