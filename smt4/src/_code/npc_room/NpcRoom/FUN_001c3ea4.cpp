/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c3ea4` (_code @ 0x1c3ea4, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0026dcd4(int);

extern int g_npcRoom; /* 0x44d198 */

/* Supplied declaration required: FUN_0026dcd4. */


void FUN_001c3ea4(unsigned short *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (param_1 != (unsigned short *)0x0) {
    FUN_0026dcd4(*param_1);
  }
  else {
    FUN_0026dcd4(0);
  }
  *(unsigned char *)(g_npcRoom + 0xe8) = param_1 == (unsigned short *)0x0;
  return;
}

} /* extern "C" */
