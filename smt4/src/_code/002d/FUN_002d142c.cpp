/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d142c` (_code @ 0x2d142c, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002629a8(...);
int FUN_002629f0(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_0044ea90; /* 0x44ea90 */
extern int DAT_0044eaa0; /* 0x44eaa0 */

/* Supplied declaration required: FUN_002629a8. */
/* Supplied declaration required: FUN_002629f0. */


void FUN_002d142c(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (DAT_0044ea90 != 0) {
    FUN_002629f0(DAT_0044ea90,3);
    DAT_0044ea90 = 0;
  }
  if (DAT_0044eaa0 != 0) {
    FUN_002629a8(DAT_0044eaa0,3);
    DAT_0044eaa0 = 0;
  }
  FUN_002629a8(param_1,3);
  return;
}

} /* extern "C" */
