#include "romwright_types.h"

extern "C" {

int FUN_00269a68(int, int);

extern unsigned char DAT_0043da10; /* 0x43da10 */

/* Supplied declaration required: FUN_00269a68. */


void FUN_001d1c1c(void)

{
/* irregular: 1 native warning(s); review required */
  (*(unsigned int *)((unsigned char *)&DAT_0043da10 + 0x4)) = 0;
  FUN_00269a68(0,0);
  return;
}

} /* extern "C" */
