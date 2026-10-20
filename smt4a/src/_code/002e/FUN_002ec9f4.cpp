/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ec9f4` (_code @ 0x2ec9f4, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e14(unsigned int);
int FUN_002ea0b8(unsigned int *);

extern unsigned char DAT_0055af54; /* 0x55af54 */

/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: FUN_002ea0b8. */


void FUN_002ec9f4(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_0055af54;
  FUN_002e6e14(param_1[3]);
  FUN_002ea0b8(param_1);
  return;
}

} /* extern "C" */
