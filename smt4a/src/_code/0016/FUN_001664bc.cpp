#include "romwright_types.h"

extern "C" {

int FUN_001960fc(int);

extern unsigned int DAT_005b3fe4; /* 0x5b3fe4 */

/* Supplied declaration required: FUN_001960fc. */


void FUN_001664bc(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_001960fc((*(int *)((unsigned char *)&DAT_005b3fe4 + 0x4)) << 2);
  DAT_005b3fe4 = 0;
  (*(int *)((unsigned char *)&DAT_005b3fe4 + 0x4)) = 0;
  return;
}

} /* extern "C" */
