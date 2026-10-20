#include "romwright_types.h"

extern "C" {

int FUN_002ad8b4(unsigned int, unsigned int);

extern unsigned char DAT_00464fa8; /* 0x464fa8 */

/* Supplied declaration required: FUN_002ad8b4. */


void FUN_002d55f0(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002ad8b4(param_1,*(unsigned int *)((*(int *)((unsigned char *)&DAT_00464fa8 + 0x4)) + 0xc));
  return;
}

} /* extern "C" */
