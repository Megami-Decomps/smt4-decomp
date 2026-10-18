/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027eba0` (_code @ 0x27eba0, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_004475b8; /* 0x4475b8 */

extern int FUN_002b2378(unsigned int);
/* Supplied declaration required: FUN_002c415c. */


unsigned int FUN_0027eba0(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_004475b8;
  if (DAT_004475b8 != (unsigned int *)0x0) {
    temp_v0 = FUN_002b2378(*DAT_004475b8);
    if ((temp_v0 != 0) || (*(char *)(puVar1 + 2) == '\0')) {
      return 1;
    }
    if (DAT_004475b8 != (unsigned int *)0x0) {
      FUN_002c415c();
      DAT_004475b8 = (unsigned int *)0x0;
    }
  }
  return 0;
}
