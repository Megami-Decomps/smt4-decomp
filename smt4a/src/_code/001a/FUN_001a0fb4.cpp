/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a0fb4` (_code @ 0x1a0fb4, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001af468(int, unsigned int, unsigned int *);

extern unsigned char DAT_00589284; /* 0x589284 */

/* Supplied declaration required: FUN_001af468. */


unsigned int FUN_001a0fb4(unsigned int param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  *param_2 = 0xffffffff;
  if ((*(int *)((unsigned char *)&DAT_00589284 + 0x8)) != 0) {
    FUN_001af468((*(int *)((unsigned char *)&DAT_00589284 + 0x8)),param_1,param_2);
  }
  return 0xc8a0a7f8;
}

} /* extern "C" */
