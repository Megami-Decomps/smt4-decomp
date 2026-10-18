/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001144e8` (_code @ 0x1144e8, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00559684; /* 0x559684 */

/* Supplied declaration required: FUN_0011444c. */
/* Supplied declaration required: FUN_002f42ec. */


void FUN_001144e8(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00559684;
  FUN_0011444c(param_1,0);
  FUN_002f42ec(param_1);
  return;
}
