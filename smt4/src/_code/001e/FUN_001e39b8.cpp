/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e39b8` (_code @ 0x1e39b8, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c222c(void);

extern unsigned char DAT_004207d8; /* 0x4207d8 */
extern int DAT_00447e88; /* 0x447e88 */

extern unsigned int *FUN_002947f4(void);
/* Supplied declaration required: FUN_002c222c. */


void FUN_001e39b8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  FUN_002c222c();
  puVar1 = (unsigned int *)0x0;
  if (param_1 != 0) {
    puVar1 = (unsigned int *)FUN_002947f4();
    *puVar1 = (unsigned int)&DAT_004207d8;
  }
  *(unsigned int **)(DAT_00447e88 + 0x194) = puVar1;
  return;
}

} /* extern "C" */
