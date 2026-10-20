#include "romwright_types.h"

extern "C" {

int FUN_003e0634(unsigned int, int, unsigned int);

extern unsigned char DAT_00464fa8; /* 0x464fa8 */

/* Supplied declaration required: FUN_003e0634. */


void FUN_002f5068(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_003e0634(*(unsigned int *)((*(int *)((unsigned char *)&DAT_00464fa8 + 0x4)) + 0x18),1,param_1);
  return;
}

} /* extern "C" */
