/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00359010` (_code @ 0x359010, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int DAT_00473848; /* 0x473848 */
extern int DAT_0047384c; /* 0x47384c */

/* Supplied declaration required: FUN_00359238. */
/* Supplied declaration required: FUN_003596b0. */


void FUN_00359010(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (DAT_0047384c != 0) {
    FUN_003596b0();
  }
  else if (DAT_00473848 != 0) {
    FUN_00359238(param_1);
    return;
  }
  return;
}
