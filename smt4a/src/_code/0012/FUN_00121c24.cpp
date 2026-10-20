/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00121c24` (_code @ 0x121c24, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern int *DAT_00594a04; /* 0x594a04 */
extern int DAT_00594b20; /* 0x594b20 */


unsigned int FUN_00121c24(int *param_1)

{
  if (param_1[0x1a] != 0) {
    DAT_00594b20 = param_1[0x1a];
  }
  DAT_00594a04 = param_1;
  (**(romwright_code **)(*param_1 + 0x20))();
  return 1;
}

} /* extern "C" */
