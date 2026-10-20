/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012a16c` (_code @ 0x12a16c, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0012a108(unsigned int *);
int FUN_0030ccc0(unsigned char *, unsigned int *);

extern unsigned char DAT_00559af4; /* 0x559af4 */
extern unsigned char DAT_00594b24; /* 0x594b24 */

/* Supplied declaration required: FUN_0012a108. */
/* Supplied declaration required: FUN_0030ccc0. */


unsigned int * FUN_0012a16c(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00559af4;
  FUN_0030ccc0(&DAT_00594b24,param_1);
  FUN_0012a108(param_1);
  return param_1;
}

} /* extern "C" */
