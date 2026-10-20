#include "romwright_types.h"

extern "C" {

int FUN_00164a9c(unsigned int);
int FUN_0019a5a0(unsigned int);
int FUN_001ad6d8(void);

extern unsigned int DAT_0057f4c0; /* 0x57f4c0 */

/* Supplied declaration required: FUN_00164a9c. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_001ad6d8. */


void FUN_00372540(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  FUN_001ad6d8();
  FUN_00164a9c(param_1);
  FUN_0019a5a0(DAT_0057f4c0);
  DAT_0057f4c0 = 0;
  return;
}

} /* extern "C" */
