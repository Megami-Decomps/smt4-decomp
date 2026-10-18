/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010fc60` (_code @ 0x10fc60, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_0044e459; /* 0x44e459 */
extern unsigned int DAT_0044e460; /* 0x44e460 */

extern unsigned int FUN_0013a32c(unsigned int);


unsigned int FUN_0010fc60(void)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (DAT_0044e459 != '\0') {
    temp_v0 = FUN_0013a32c(DAT_0044e460);
    DAT_0044e459 = '\0';
  }
  return temp_v0;
}
