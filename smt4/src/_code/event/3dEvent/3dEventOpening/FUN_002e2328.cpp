/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e2328` (_code @ 0x2e2328, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int *g_event3dOpening; /* 0x43df98 */

extern int scrGetCommandFrame(void);
extern int jobIsValid(unsigned int);


unsigned int FUN_002e2328(void)

{
  unsigned int *puVar1;
  int temp_v0;
  
  temp_v0 = scrGetCommandFrame();
  if (temp_v0 != 0) {
    if (g_event3dOpening == (unsigned int *)0x0) {
      return 1;
    }
  }
  else if ((g_event3dOpening != (unsigned int *)0x0) &&
          (temp_v0 = jobIsValid(*g_event3dOpening), puVar1 = g_event3dOpening, temp_v0 != 0)) {
    g_event3dOpening[0x159] = 4;
    puVar1[0x15a] = 0;
  }
  return 0;
}

} /* extern "C" */
