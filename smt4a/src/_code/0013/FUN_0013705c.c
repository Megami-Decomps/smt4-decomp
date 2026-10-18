/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013705c` (_code @ 0x13705c, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_0057ffd0; /* 0x57ffd0 */
extern signed char DAT_0057ffd1; /* 0x57ffd1 */
extern unsigned int DAT_0057ffd8; /* 0x57ffd8 */
extern unsigned int DAT_0059dbb4; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00145e24. */
/* Supplied declaration required: FUN_00152f54. */
/* Supplied declaration required: FUN_00167eb0. */
extern int FUN_001696f4(void);


unsigned int FUN_0013705c(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_001696f4();
  if ((temp_v0 == 1) && (DAT_0057ffd1 != '\0')) {
    temp_v0 = FUN_00152f54();
    if (temp_v0 != 0) {
      temp_v1 = FUN_00152f54();
      FUN_00145e24(DAT_0059dbb4,temp_v1);
    }
    if (DAT_0057ffd0 == '\0') {
      FUN_00167eb0(DAT_0057ffd8);
    }
  }
  return 0;
}
