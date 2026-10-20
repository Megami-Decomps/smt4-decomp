#include "romwright_types.h"

extern "C" {

int FUN_002e436c(int);

extern unsigned char DAT_00439c88; /* 0x439c88 */

/* Supplied declaration required: FUN_002e436c. */


void FUN_003ae620(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_002e436c((*(int *)((unsigned char *)&DAT_00439c88 + 0x20)) + 0x2460);
  return;
}

} /* extern "C" */
