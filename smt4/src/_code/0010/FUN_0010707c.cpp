/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010707c` (_code @ 0x10707c, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorNew(void);

extern int g_aocSystem; /* 0x433158 */

extern int largeWorkStateInitialize(void);
/* Supplied declaration required: asdOperatorNew. */


void FUN_0010707c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = g_aocSystem;
  if (g_aocSystem == 0) {
    temp_v0 = 0x450;
    asdOperatorNew();
    temp_v1 = 0;
    if (temp_v0 != 0) {
      temp_v1 = largeWorkStateInitialize();
    }
  }
  g_aocSystem = temp_v1;
  return;
}

} /* extern "C" */
