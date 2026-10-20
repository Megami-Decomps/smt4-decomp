#include "romwright_types.h"

extern "C" {

int FUN_002af5c0(int, int, int);

extern unsigned char DAT_00439c88; /* 0x439c88 */

/* Supplied declaration required: FUN_002af5c0. */


void FUN_003ae2b0(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_002af5c0((*(int *)((unsigned char *)&DAT_00439c88 + 0x20)) + 0x7ec0,0xe,0);
  return;
}

} /* extern "C" */
