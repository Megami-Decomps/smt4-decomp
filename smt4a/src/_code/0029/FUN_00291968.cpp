/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00291968` (_code @ 0x291968, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);

extern int g_aocMain; /* 0x570260 */
extern unsigned int *DAT_0057f568; /* 0x57f568 */

/* Supplied declaration required: jobStop. */


void FUN_00291968(void)

{
/* irregular: 1 native warning(s); review required */
  jobStop(*DAT_0057f568,0);
  *(unsigned int *)(g_aocMain + 0x754) = *(unsigned int *)(g_aocMain + 0x754) & 0xffffff8f;
  return;
}

} /* extern "C" */
