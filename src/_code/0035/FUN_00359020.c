/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00359020` (_code @ 0x359020, 0x5c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int DAT_00473848; /* 0x473848 */
extern int DAT_0047384c; /* 0x47384c */

/* Supplied declaration required: FUN_003592c4. */
/* Supplied declaration required: FUN_0035973c. */


void FUN_00359020(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (DAT_0047384c != 0) {
    FUN_0035973c();
  }
  else if (DAT_00473848 != 0) {
    FUN_003592c4(param_1);
    return;
  }
  return;
}
