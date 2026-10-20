#include "romwright_types.h"

extern "C" {

int FUN_005019e4(unsigned int, int, unsigned int);

extern unsigned char DAT_005b3f94; /* 0x5b3f94 */

/* Supplied declaration required: FUN_005019e4. */


void FUN_0037a7d8(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_005019e4(*(unsigned int *)((*(int *)((unsigned char *)&DAT_005b3f94 + 0x4)) + 0x18),1,param_1);
  return;
}

} /* extern "C" */
