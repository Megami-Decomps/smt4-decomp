/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b56bc` (_code @ 0x3b56bc, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00187180(int, int);

extern int DAT_00570280; /* 0x570280 */

/* Supplied declaration required: FUN_00187180. */
extern int FUN_00192748(void);


int FUN_003b56bc(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  FUN_00187180(0x23,0);
  temp_v0 = FUN_00192748();
  return temp_v0 + *(int *)(DAT_00570280 + 0x3e4);
}

} /* extern "C" */
