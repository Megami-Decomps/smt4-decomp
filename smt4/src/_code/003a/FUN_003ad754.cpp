#include "romwright_types.h"

extern "C" {

int FUN_0020635c(int);

extern unsigned char DAT_00439c88; /* 0x439c88 */

/* Supplied declaration required: FUN_0020635c. */


void FUN_003ad754(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_0020635c((*(int *)((unsigned char *)&DAT_00439c88 + 0x20)) + 0x2460);
  return;
}

} /* extern "C" */
