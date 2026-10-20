/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c308c` (_code @ 0x1c308c, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001cd260(unsigned int, unsigned int, unsigned char *, int);

extern unsigned char LAB_004625b8; /* 0x4625b8 */

/* Supplied declaration required: FUN_001cd260. */


void FUN_001c308c(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_001cd260(param_1,param_2,&LAB_004625b8,0);
  return;
}

} /* extern "C" */
