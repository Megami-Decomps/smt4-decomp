/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a167c` (_code @ 0x1a167c, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00647708; /* 0x647708 */

/* Supplied declaration required: FUN_0018a3d0. */


void FUN_001a167c(int param_1,unsigned char param_2)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned char *)(param_1 + 0x26) = param_2;
  FUN_0018a3d0(&DAT_00647708);
  return;
}
