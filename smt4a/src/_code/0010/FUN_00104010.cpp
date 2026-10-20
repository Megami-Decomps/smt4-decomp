/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00104010` (_code @ 0x104010, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00103fa4(unsigned int *);
int FUN_002e9318(...);
int FUN_002ea0b8(int);

extern unsigned char DAT_005585c0; /* 0x5585c0 */

/* Supplied declaration required: FUN_00103fa4. */
/* Supplied declaration required: FUN_002e9318. */
/* Supplied declaration required: FUN_002ea0b8. */


void FUN_00104010(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_005585c0;
  FUN_00103fa4(param_1);
  temp_v0 = FUN_002e9318(param_1 + 7);
  temp_v0 = FUN_002e9318(temp_v0 - 8);
  FUN_002ea0b8(temp_v0 - 0x14);
  return;
}

} /* extern "C" */
