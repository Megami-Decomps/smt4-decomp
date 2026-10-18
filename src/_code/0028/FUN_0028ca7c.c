/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028ca7c` (_code @ 0x28ca7c, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0019fb4c. */
/* Supplied declaration required: FUN_002bd730. */
/* Supplied declaration required: FUN_002bd940. */


int FUN_0028ca7c(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  FUN_002bd940();
  *(unsigned int *)(temp_v0 + 0x3c) = 1;
  *(unsigned int *)(temp_v0 + 0x40) = 1;
  FUN_0019fb4c();
  FUN_002bd730(temp_v0);
  return temp_v0;
}
