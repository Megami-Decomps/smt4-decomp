/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030ff4c` (_code @ 0x30ff4c, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int DAT_00594a78; /* 0x594a78 */
extern int *DAT_00594a7c; /* 0x594a7c */


void FUN_0030ff4c(int *param_1)

{
  if (param_1 != (int *)0x0) {
    (**(romwright_code **)(*param_1 + 4))();
    DAT_00594a78 = DAT_00594a78 - 1;
    if (DAT_00594a7c != (int *)0x0) {
      (**(romwright_code **)(*DAT_00594a7c + 0xc))();
    }
  }
  return;
}
