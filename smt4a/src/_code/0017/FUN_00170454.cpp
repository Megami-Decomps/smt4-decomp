#include "romwright_types.h"

extern "C" {

int FUN_0018b850(unsigned int);

extern unsigned char DAT_005b4440; /* 0x5b4440 */

/* Supplied declaration required: FUN_0018b850. */


void FUN_00170454(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_0018b850((*(unsigned int *)((unsigned char *)&DAT_005b4440 + 0x4)));
  return;
}

} /* extern "C" */
