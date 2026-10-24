/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030ff4c` (_code @ 0x30ff4c, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned char g_onlineRegistry; /* 0x594a58 */
extern int *DAT_00594a7c; /* 0x594a7c */


void FUN_0030ff4c(int *param_1)

{
  if (param_1 != (int *)0x0) {
    (**(romwright_code **)(*param_1 + 4))();
    (*(int *)((unsigned char *)&g_onlineRegistry + 0x20)) = (*(int *)((unsigned char *)&g_onlineRegistry + 0x20)) - 1;
    if (DAT_00594a7c != (int *)0x0) {
      (**(romwright_code **)(*DAT_00594a7c + 0xc))();
    }
  }
  return;
}

} /* extern "C" */
