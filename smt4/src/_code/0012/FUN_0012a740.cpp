/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012a740` (_code @ 0x12a740, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bb308(void);
int FUN_002bb378(void);

extern unsigned int FUN_0013bac4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bb308. */
/* Supplied declaration required: FUN_002bb378. */


unsigned int FUN_0012a740(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_002bb378();
  temp_v0 = FUN_0013bac4(1,param_1);
  FUN_002bb308();
  return temp_v0;
}

} /* extern "C" */
