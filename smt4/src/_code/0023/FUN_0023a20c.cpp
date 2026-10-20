/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023a20c` (_code @ 0x23a20c, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ba81c(unsigned char *, unsigned int, int);

extern int DAT_00471a50; /* 0x471a50 */
extern unsigned char DAT_004e655c; /* 0x4e655c */

/* Supplied declaration required: FUN_002ba81c. */


void FUN_0023a20c(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002ba81c(&DAT_004e655c + DAT_00471a50 * 0x40,param_1,0x40);
  DAT_00471a50 = DAT_00471a50 + 1;
  return;
}

} /* extern "C" */
