#include "romwright_types.h"

extern "C" {

int FUN_00263720(unsigned int);

extern unsigned char DAT_004474f0; /* 0x4474f0 */

/* Supplied declaration required: FUN_00263720. */


void FUN_003079a0(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_00263720(*(unsigned int *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 0x2b4));
  return;
}

} /* extern "C" */
