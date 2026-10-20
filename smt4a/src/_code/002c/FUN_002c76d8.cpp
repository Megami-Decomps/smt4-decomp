#include "romwright_types.h"

extern "C" {

int FUN_001406f0(int);

extern unsigned char DAT_0057f698; /* 0x57f698 */

/* Supplied declaration required: FUN_001406f0. */


void FUN_002c76d8(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  DAT_0057f698 = 0;
  (*(unsigned int *)((unsigned char *)&DAT_0057f698 + 0x14)) = param_1 | (*(unsigned int *)((unsigned char *)&DAT_0057f698 + 0x14));
  FUN_001406f0(0);
  return;
}

} /* extern "C" */
