/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bb45c` (_code @ 0x3bb45c, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int *g_event3dOpening; /* 0x57f4c0 */

extern int jobIsValid(unsigned int);


void FUN_003bb45c(void)

{
  unsigned int *puVar1;
  int temp_v0;
  
  if ((g_event3dOpening != (unsigned int *)0x0) &&
     (temp_v0 = jobIsValid(*g_event3dOpening), puVar1 = g_event3dOpening, temp_v0 != 0)) {
    g_event3dOpening[0x15a] = 4;
    puVar1[0x15b] = 0;
  }
  return;
}

} /* extern "C" */
