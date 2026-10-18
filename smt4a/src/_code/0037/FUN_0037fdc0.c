/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037fdc0` (_code @ 0x37fdc0, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int *FUN_001ab888(void);
/* Supplied declaration required: FUN_00232388. */
/* Supplied declaration required: FUN_00236038. */
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_0037fdc0(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  
  temp_v0 = FUN_00236038();
  FUN_00236038(1);
  FUN_00232388();
  piVar2 = (int *)FUN_001ab888();
  FUN_003283ac(*piVar2 <= temp_v0);
  return 1;
}
