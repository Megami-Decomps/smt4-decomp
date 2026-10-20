#include "romwright_types.h"

extern "C" {

int FUN_002f292c(void);

extern unsigned char DAT_00558f18; /* 0x558f18 */

/* Supplied declaration required: FUN_002f292c. */


void FUN_0010caa4(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00558f18;
  FUN_002f292c();
  return;
}

} /* extern "C" */
