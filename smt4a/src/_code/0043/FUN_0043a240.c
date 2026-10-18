/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043a240` (_code @ 0x43a240, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_006462b0; /* 0x6462b0 */
extern unsigned int DAT_006462b8; /* 0x6462b8 */

extern unsigned int FUN_0043a198(unsigned int *, unsigned int, unsigned int);


unsigned int FUN_0043a240(unsigned int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  
  if (0 < DAT_006462b0) {
    temp_v0 = FUN_0043a198(&DAT_006462b8,param_1,param_2);
    return temp_v0;
  }
  return 0xd8a0bbf8;
}
