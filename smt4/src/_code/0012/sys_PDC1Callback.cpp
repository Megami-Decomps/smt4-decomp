/* NON_MATCHING: romwright 0.5.0 decompilation of `sys_PDC1Callback` (_code @ 0x123b34, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern int DAT_004c63e8; /* 0x4c63e8 */
extern romwright_code *DAT_004c63f0; /* 0x4c63f0 */


void sys_PDC1Callback(void)

{
  if (DAT_004c63f0 != (romwright_code *)0x0) {
    (*DAT_004c63f0)(0x401);
  }
  DAT_004c63e8 = DAT_004c63e8 + 1;
  DAT_004c63e8 = DAT_004c63e8 +
                 ((int)((long long)DAT_004c63e8 * 0x40000001 >> 0x3d) - (DAT_004c63e8 >> 0x1f)) *
                 -0x7fffffff;
  return;
}

} /* extern "C" */
