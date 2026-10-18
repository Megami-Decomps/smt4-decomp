/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f7414` (_code @ 0x2f7414, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00558eb0; /* 0x558eb0 */

extern int FUN_0010378a(unsigned int *);
/* Supplied declaration required: FUN_00188b60. */


int FUN_002f7414(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_00558eb0;
  temp_v0 = FUN_0010378a(param_1 + 1);
  FUN_00188b60();
  return temp_v0 - 4;
}
