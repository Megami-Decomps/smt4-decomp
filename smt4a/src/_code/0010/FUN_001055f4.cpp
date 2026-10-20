#include "romwright_types.h"

extern "C" {

int FUN_002ebc80(int, unsigned int);

extern unsigned char DAT_005949d8; /* 0x5949d8 */

/* Supplied declaration required: FUN_002ebc80. */


void FUN_001055f4(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002ebc80((*(int *)((unsigned char *)&DAT_005949d8 + 0x4)) + 0x14,param_1);
  FUN_002ebc80((*(int *)((unsigned char *)&DAT_005949d8 + 0x4)) + 0x70,param_1);
  return;
}

} /* extern "C" */
