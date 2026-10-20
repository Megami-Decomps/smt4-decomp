/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003594b4` (_code @ 0x3594b4, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003592f4(unsigned int);
int FUN_0035976c(void);

extern int DAT_00473848; /* 0x473848 */
extern int DAT_0047384c; /* 0x47384c */

/* Supplied declaration required: FUN_003592f4. */
/* Supplied declaration required: FUN_0035976c. */


void FUN_003594b4(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (DAT_0047384c != 0) {
    FUN_0035976c();
    return;
  }
  if (DAT_00473848 != 0) {
    FUN_003592f4(param_1);
    return;
  }
  return;
}

} /* extern "C" */
