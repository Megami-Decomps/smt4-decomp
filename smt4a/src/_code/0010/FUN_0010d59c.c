/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010d59c` (_code @ 0x10d59c, 0x2a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_0010d5c8; /* 0x10d5c8 */

/* Supplied declaration required: FUN_002f76ca. */
/* Supplied declaration required: FUN_002f7824. */


void FUN_0010d59c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  *(unsigned int *)(param_1 + 0x108) = 0;
  FUN_002f7824(param_1 + 0x10c);
  *(unsigned char *)(param_1 + 0x118) = 0;
  FUN_002f76ca(param_1 + 0x11c,&LAB_0010d5c8);
  *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + 1;
  return;
}
