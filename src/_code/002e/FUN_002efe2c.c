/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002efe2c` (_code @ 0x2efe2c, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e190; /* 0x44e190 */

extern int FUN_0029ee54(int);


int FUN_002efe2c(void)

{
  int temp_v0;
  
  if (DAT_0044e190 == 0) {
    return 0;
  }
  temp_v0 = FUN_0029ee54(DAT_0044e190 + 0x4d4);
  return temp_v0 - 1;
}
