/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011c7b0` (_code @ 0x11c7b0, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055a8a4; /* 0x55a8a4 */

extern int FUN_002ea00c(unsigned int *);
/* Supplied declaration required: FUN_002ecac4. */


void FUN_0011c7b0(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055a8a4;
  temp_v0 = FUN_002ea00c(param_1 + 0x1c);
  FUN_002ecac4(temp_v0 - 0x70);
  return;
}
