/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012a290` (_code @ 0x12a290, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00559b3c; /* 0x559b3c */
extern unsigned char DAT_00594b24; /* 0x594b24 */

/* Supplied declaration required: FUN_0012a224. */
/* Supplied declaration required: FUN_0030ccc0. */


unsigned int * FUN_0012a290(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00559b3c;
  FUN_0030ccc0(&DAT_00594b24,param_1);
  FUN_0012a224(param_1);
  return param_1;
}
