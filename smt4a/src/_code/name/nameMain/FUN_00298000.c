/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00298000` (_code @ 0x298000, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_00588110; /* 0x588110 */

extern int FUN_00184e20(unsigned int);
/* Supplied declaration required: FUN_0019a5a0. */


unsigned int FUN_00298000(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_00588110;
  if (DAT_00588110 != (unsigned int *)0x0) {
    temp_v0 = FUN_00184e20(*DAT_00588110);
    if ((temp_v0 != 0) || (*(char *)(puVar1 + 3) == '\0')) {
      return 1;
    }
    if (DAT_00588110 != (unsigned int *)0x0) {
      FUN_0019a5a0();
      DAT_00588110 = (unsigned int *)0x0;
    }
  }
  return 0;
}
