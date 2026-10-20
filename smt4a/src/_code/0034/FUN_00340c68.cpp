#include "romwright_types.h"

extern "C" {

int FUN_001a9110(unsigned int, unsigned int);

extern unsigned char DAT_005b3f94; /* 0x5b3f94 */

/* Supplied declaration required: FUN_001a9110. */


void FUN_00340c68(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_001a9110(param_1,*(unsigned int *)((*(int *)((unsigned char *)&DAT_005b3f94 + 0x4)) + 0xc));
  return;
}

} /* extern "C" */
