/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00129690` (_code @ 0x129690, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_005598fc; /* 0x5598fc */
extern unsigned char DAT_00594b24; /* 0x594b24 */

/* Supplied declaration required: FUN_001295e4. */
/* Supplied declaration required: FUN_0030ccc0. */


unsigned int * FUN_00129690(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_005598fc;
  FUN_0030ccc0(&DAT_00594b24,param_1);
  FUN_001295e4(param_1);
  return param_1;
}
