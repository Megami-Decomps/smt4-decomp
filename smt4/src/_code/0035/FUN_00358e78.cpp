/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00358e78` (_code @ 0x358e78, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00359134(unsigned int);
int FUN_003595ac(void);

extern int g_nnCecdHandle; /* 0x473848 */
extern int DAT_0047384c; /* 0x47384c */

/* Supplied declaration required: FUN_00359134. */
/* Supplied declaration required: FUN_003595ac. */


void FUN_00358e78(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (DAT_0047384c != 0) {
    FUN_003595ac();
    return;
  }
  if (g_nnCecdHandle != 0) {
    FUN_00359134(param_1);
    return;
  }
  return;
}

} /* extern "C" */
