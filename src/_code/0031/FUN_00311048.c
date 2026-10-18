/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00311048` (_code @ 0x311048, 0xa8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00447520; /* 0x447520 */

/* Supplied declaration required: FUN_00276310. */
/* Supplied declaration required: FUN_002c8b60. */
extern int FUN_002d3ec0(void);
/* Supplied declaration required: FUN_002dfd68. */
extern int FUN_002f3af4(void);


unsigned int FUN_00311048(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  if (DAT_00447520 != 0) {
    if (DAT_00447520 != 1) {
      if (DAT_00447520 != 2) {
        if ((DAT_00447520 == 3) && (temp_v0 = FUN_002d3ec0(), temp_v0 != 0)) {
          DAT_00447520 = 0;
          return 1;
        }
      }
      else {
        FUN_002c8b60();
        DAT_00447520 = 3;
      }
    }
    else {
      temp_v0 = FUN_002f3af4();
      if (temp_v0 != 0) {
        DAT_00447520 = 2;
      }
    }
  }
  else {
    FUN_00276310();
    FUN_002dfd68();
    DAT_00447520 = 1;
  }
  return 0;
}
