/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003110ac` (_code @ 0x3110ac, 0xa8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00447520; /* 0x447520 */

/* Supplied declaration required: FUN_00276580. */
/* Supplied declaration required: FUN_002c8b0c. */
extern int FUN_002d3e14(void);
/* Supplied declaration required: FUN_002dfcf4. */
extern int FUN_002f3aac(void);


unsigned int FUN_003110ac(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  if (DAT_00447520 != 0) {
    if (DAT_00447520 != 1) {
      if (DAT_00447520 != 2) {
        if ((DAT_00447520 == 3) && (temp_v0 = FUN_002d3e14(), temp_v0 != 0)) {
          DAT_00447520 = 0;
          return 1;
        }
      }
      else {
        FUN_002c8b0c();
        DAT_00447520 = 3;
      }
    }
    else {
      temp_v0 = FUN_002f3aac();
      if (temp_v0 != 0) {
        DAT_00447520 = 2;
      }
    }
  }
  else {
    FUN_00276580();
    FUN_002dfcf4();
    DAT_00447520 = 1;
  }
  return 0;
}
