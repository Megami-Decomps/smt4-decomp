#include "romwright_types.h"

extern "C" {

int FUN_002e0dac(unsigned int);

extern int DAT_0043de68; /* 0x43de68 */

/* Supplied declaration required: FUN_002e0dac. */


void FUN_00220ffc(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_0043de68 != 0) {
    FUN_002e0dac(*(unsigned int *)(DAT_0043de68 + 4));
    return;
  }
  return;
}

} /* extern "C" */
