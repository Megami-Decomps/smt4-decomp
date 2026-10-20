/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012d568` (_code @ 0x12d568, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int deletingDtor_002e56ec(unsigned int, unsigned char *);

extern unsigned char LAB_00124a43; /* 0x124a43 */

/* Supplied declaration required: deletingDtor_002e56ec. */


unsigned int * FUN_0012d568(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  deletingDtor_002e56ec(*param_1,&LAB_00124a43);
  return param_1;
}

} /* extern "C" */
