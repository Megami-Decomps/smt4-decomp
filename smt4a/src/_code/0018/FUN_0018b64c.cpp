#include "romwright_types.h"

extern "C" {

int FUN_001a0a48(unsigned int);

extern unsigned char DAT_005891b0; /* 0x5891b0 */

/* Supplied declaration required: FUN_001a0a48. */


void FUN_0018b64c(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_001a0a48((*(unsigned int *)((unsigned char *)&DAT_005891b0 + 0x8)));
  return;
}

} /* extern "C" */
