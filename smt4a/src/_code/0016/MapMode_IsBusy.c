/* NON_MATCHING: romwright 0.5.0 decompilation of `MapMode_IsBusy` (_code @ 0x16422c, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_00581274; /* 0x581274 */

extern int FUN_00184e20(unsigned int);
/* Supplied declaration required: FUN_0019a5a0. */


unsigned int MapMode_IsBusy(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_00581274;
  if (DAT_00581274 != (unsigned int *)0x0) {
    temp_v0 = FUN_00184e20(*DAT_00581274);
    if ((temp_v0 != 0) || (*(char *)(puVar1 + 3) == '\0')) {
      return 1;
    }
    if (DAT_00581274 != (unsigned int *)0x0) {
      FUN_0019a5a0();
      DAT_00581274 = (unsigned int *)0x0;
    }
  }
  return 0;
}
