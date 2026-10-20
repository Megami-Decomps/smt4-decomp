/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035c24c` (_code @ 0x35c24c, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int *g_event3dOpening; /* 0x57f4c0 */

extern int jobIsValid(unsigned int);
extern int FUN_002deb84(void);


unsigned int FUN_0035c24c(void)

{
  unsigned int *puVar1;
  int temp_v0;
  
  temp_v0 = FUN_002deb84();
  if (temp_v0 != 0) {
    if (g_event3dOpening == (unsigned int *)0x0) {
      return 1;
    }
  }
  else if ((g_event3dOpening != (unsigned int *)0x0) &&
          (temp_v0 = jobIsValid(*g_event3dOpening), puVar1 = g_event3dOpening, temp_v0 != 0)) {
    g_event3dOpening[0x15a] = 4;
    puVar1[0x15b] = 0;
  }
  return 0;
}

} /* extern "C" */
