/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00359288` (_code @ 0x359288, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00473848; /* 0x473848 */
extern int DAT_0047384c; /* 0x47384c */

/* Supplied declaration required: FUN_003594c8. */
/* Supplied declaration required: FUN_00359940. */


void FUN_00359288(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (DAT_0047384c != 0) {
    FUN_00359940();
    return;
  }
  if (DAT_00473848 != 0) {
    FUN_003594c8(param_1);
    return;
  }
  return;
}
