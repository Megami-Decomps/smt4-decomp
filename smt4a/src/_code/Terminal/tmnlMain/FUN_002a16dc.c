/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a16dc` (_code @ 0x2a16dc, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_0056fd30; /* 0x56fd30 */

extern int FUN_00163e40(unsigned int);
/* Supplied declaration required: FUN_0019a5a0. */


unsigned int FUN_002a16dc(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_0056fd30;
  if (DAT_0056fd30 != (unsigned int *)0x0) {
    temp_v0 = FUN_00163e40(*DAT_0056fd30);
    if ((temp_v0 != 0) || (*(char *)(puVar1 + 1) == '\0')) {
      return 1;
    }
    if (DAT_0056fd30 != (unsigned int *)0x0) {
      FUN_0019a5a0();
      DAT_0056fd30 = (unsigned int *)0x0;
    }
  }
  return 0;
}
