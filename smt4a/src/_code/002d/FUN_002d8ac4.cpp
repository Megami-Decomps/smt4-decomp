/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d8ac4` (_code @ 0x2d8ac4, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016c4b8(unsigned int, unsigned int);

extern int g_mapIf; /* 0x58103c */
extern int DAT_00581040; /* 0x581040 */
extern unsigned int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: FUN_0016c4b8. */


void FUN_002d8ac4(void)

{
/* irregular: 1 native warning(s); review required */
  if (g_mapIf != 0) {
    FUN_0016c4b8(g_renderCtx,*(unsigned int *)(DAT_00581040 + 0x7c));
    return;
  }
  return;
}

} /* extern "C" */
