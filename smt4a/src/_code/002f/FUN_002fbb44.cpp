/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fbb44` (_code @ 0x2fbb44, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002fe9d2(void);

extern unsigned char DAT_005595f0; /* 0x5595f0 */

extern int FUN_002f8760(unsigned int *);
/* Supplied declaration required: FUN_002fe9d2. */


int FUN_002fbb44(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_005595f0;
  FUN_002fe9d2();
  temp_v0 = FUN_002f8760(param_1 + 2);
  return temp_v0 - 8;
}

} /* extern "C" */
