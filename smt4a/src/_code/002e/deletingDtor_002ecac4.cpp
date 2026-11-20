/* NON_MATCHING: romwright 0.5.0 decompilation of `deletingDtor_002ecac4` (_code @ 0x2ecac4, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int deletingDtor_002eb7c0(void);

extern unsigned char DAT_005591e8; /* 0x5591e8 */

/* Supplied declaration required: deletingDtor_002eb7c0. */


void deletingDtor_002ecac4(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_005591e8;
  deletingDtor_002eb7c0();
  return;
}

} /* extern "C" */
