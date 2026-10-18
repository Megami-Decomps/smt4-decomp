/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00294a98` (_code @ 0x294a98, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00335358; /* 0x335358 */
extern unsigned char DAT_00420338; /* 0x420338 */

/* Supplied declaration required: FUN_002c5f58. */


void FUN_00294a98(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = param_1 + 4;
  *param_1 = (unsigned int)&DAT_00420338;
  FUN_002c5f58(puVar1,&LAB_00335358,0x50,3);
  puVar1[-3] = 0;
  puVar1[-2] = 0;
  puVar1[-1] = 1;
  return;
}
