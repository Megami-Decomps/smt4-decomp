/* NON_MATCHING: romwright 0.5.0 decompilation of `sys_PDC1Callback` (_code @ 0x161c10, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern int DAT_0061a5c8; /* 0x61a5c8 */
extern romwright_code *DAT_0061a5d0; /* 0x61a5d0 */


void sys_PDC1Callback(void)

{
  if (DAT_0061a5d0 != (romwright_code *)0x0) {
    (*DAT_0061a5d0)(0x401);
  }
  DAT_0061a5c8 = DAT_0061a5c8 + 1;
  DAT_0061a5c8 = DAT_0061a5c8 +
                 ((int)((long long)DAT_0061a5c8 * 0x40000001 >> 0x3d) - (DAT_0061a5c8 >> 0x1f)) *
                 -0x7fffffff;
  return;
}

} /* extern "C" */
