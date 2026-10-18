/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003590c4` (_code @ 0x3590c4, 0x5c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int DAT_00473848; /* 0x473848 */
extern int DAT_0047384c; /* 0x47384c */

/* Supplied declaration required: FUN_00359380. */
/* Supplied declaration required: FUN_003597f8. */


void FUN_003590c4(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (DAT_0047384c != 0) {
    FUN_003597f8();
  }
  else if (DAT_00473848 != 0) {
    FUN_00359380(param_1);
    return;
  }
  return;
}
