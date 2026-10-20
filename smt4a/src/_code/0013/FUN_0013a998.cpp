/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013a998` (_code @ 0x13a998, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00145e24(unsigned int, unsigned int);
int FUN_00152f54(void);

extern unsigned int DAT_0059dbb4; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00145e24. */
/* Supplied declaration required: FUN_00152f54. */


unsigned int FUN_0013a998(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00152f54();
  if (temp_v0 != 0) {
    temp_v1 = FUN_00152f54();
    FUN_00145e24(DAT_0059dbb4,temp_v1);
  }
  return 0;
}

} /* extern "C" */
