#include "romwright_types.h"

extern "C" {

int FUN_00275f44(unsigned int, unsigned int);

extern unsigned char DAT_0057f110; /* 0x57f110 */

/* Supplied declaration required: FUN_00275f44. */


void FUN_0028187c(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  if ((*(int *)((unsigned char *)&DAT_0057f110 + 0x4)) != 0) {
    FUN_00275f44(*(unsigned int *)((*(int *)((unsigned char *)&DAT_0057f110 + 0x4)) + 0xf4),param_1);
    return;
  }
  return;
}

} /* extern "C" */
