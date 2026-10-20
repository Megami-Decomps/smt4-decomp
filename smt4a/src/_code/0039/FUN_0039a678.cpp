#include "romwright_types.h"

extern "C" {

int FUN_001654d8(int);

extern unsigned char DAT_0057f588; /* 0x57f588 */

/* Supplied declaration required: FUN_001654d8. */


void FUN_0039a678(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_001654d8((*(int *)((unsigned char *)&DAT_0057f588 + 0x8)) + 0xb00);
  return;
}

} /* extern "C" */
