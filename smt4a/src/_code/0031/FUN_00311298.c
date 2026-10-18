/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00311298` (_code @ 0x311298, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055ab98; /* 0x55ab98 */

extern int FUN_001105e4(unsigned int *);
/* Supplied declaration required: FUN_00114048. */


int FUN_00311298(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055ab98;
  temp_v0 = FUN_001105e4(param_1 + 0xb);
  temp_v0 = temp_v0 - 0x28;
  FUN_00114048(temp_v0);
  return temp_v0 - 4;
}
