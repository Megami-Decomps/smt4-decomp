/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e38c4` (_code @ 0x1e38c4, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00420420; /* 0x420420 */
extern int DAT_00447e88; /* 0x447e88 */

extern unsigned int *FUN_00294a98(void);
/* Supplied declaration required: FUN_002c23f8. */


void FUN_001e38c4(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  FUN_002c23f8();
  puVar1 = (unsigned int *)0x0;
  if (param_1 != 0) {
    puVar1 = (unsigned int *)FUN_00294a98();
    *puVar1 = (unsigned int)&DAT_00420420;
  }
  *(unsigned int **)(DAT_00447e88 + 0x194) = puVar1;
  return;
}
