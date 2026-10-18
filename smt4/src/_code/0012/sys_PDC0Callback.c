/* NON_MATCHING: romwright 0.5.0 decompilation of `sys_PDC0Callback` (_code @ 0x123af0, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int DAT_004c63e4; /* 0x4c63e4 */
extern romwright_code *DAT_004c63ec; /* 0x4c63ec */


void sys_PDC0Callback(void)

{
  if (DAT_004c63ec != (romwright_code *)0x0) {
    (*DAT_004c63ec)(0x400);
  }
  DAT_004c63e4 = DAT_004c63e4 + 1;
  DAT_004c63e4 = DAT_004c63e4 +
                 ((int)((long long)DAT_004c63e4 * 0x40000001 >> 0x3d) - (DAT_004c63e4 >> 0x1f)) *
                 -0x7fffffff;
  return;
}
