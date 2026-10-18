/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d1380` (_code @ 0x2d1380, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_0044ea90; /* 0x44ea90 */
extern int DAT_0044eaa0; /* 0x44eaa0 */

/* Supplied declaration required: FUN_00262bd4. */
/* Supplied declaration required: FUN_00262c1c. */


void FUN_002d1380(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (DAT_0044ea90 != 0) {
    FUN_00262c1c(DAT_0044ea90,3);
    DAT_0044ea90 = 0;
  }
  if (DAT_0044eaa0 != 0) {
    FUN_00262bd4(DAT_0044eaa0,3);
    DAT_0044eaa0 = 0;
  }
  FUN_00262bd4(param_1,3);
  return;
}
