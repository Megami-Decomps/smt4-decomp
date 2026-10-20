/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035b044` (_code @ 0x35b044, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004bb35c(unsigned int);

extern int g_cecProcess; /* 0x57f390 */

/* Supplied declaration required: FUN_004bb35c. */


unsigned int FUN_0035b044(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  if (g_cecProcess != 0) {
    temp_v0 = *(unsigned int *)(g_cecProcess + 4);
    FUN_004bb35c(temp_v0);
    return temp_v0;
  }
  return 0;
}

} /* extern "C" */
