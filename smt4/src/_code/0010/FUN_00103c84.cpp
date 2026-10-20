/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103c84` (_code @ 0x103c84, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_0044e368; /* 0x44e368 */

extern unsigned int nn_applet_CTR_detail_CloseApplication(unsigned char *, unsigned int, unsigned int);


void FUN_00103c84(void)

{
  nn_applet_CTR_detail_CloseApplication(0x0,0,DAT_0044e368);
  return;
}

} /* extern "C" */
