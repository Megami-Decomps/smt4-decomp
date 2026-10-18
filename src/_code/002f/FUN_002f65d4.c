/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f65d4` (_code @ 0x2f65d4, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e190; /* 0x44e190 */

extern int FUN_0029f0f4(int);
extern int FUN_0029f248(void);


unsigned int FUN_002f65d4(void)

{
  int temp_v0;
  int temp_v1;
  
  if (DAT_0044e190 != 0) {
    temp_v0 = DAT_0044e190 + 0x4d4;
    temp_v1 = FUN_0029f248();
    temp_v0 = FUN_0029f0f4(temp_v0);
    if (temp_v1 == temp_v0 - 1) {
      return 1;
    }
  }
  return 0;
}
