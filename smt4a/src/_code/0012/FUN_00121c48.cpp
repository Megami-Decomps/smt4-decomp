/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00121c48` (_code @ 0x121c48, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned int DAT_005949e8; /* 0x5949e8 */
extern int *DAT_00594a04; /* 0x594a04 */
extern unsigned int DAT_00594b20; /* 0x594b20 */


unsigned int FUN_00121c48(void)

{
  DAT_00594b20 = DAT_005949e8;
  if (DAT_00594a04 != (int *)0x0) {
    (**(romwright_code **)(*DAT_00594a04 + 0x24))();
  }
  return 1;
}

} /* extern "C" */
