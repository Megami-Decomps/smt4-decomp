/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003188c8` (_code @ 0x3188c8, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00223b0c. */
/* Supplied declaration required: FUN_0028dcb0. */
extern unsigned int FUN_003bf44c(void);


unsigned int FUN_003188c8(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_003bf44c();
  FUN_00223b0c();
  FUN_0028dcb0(temp_v0);
  return 1;
}
