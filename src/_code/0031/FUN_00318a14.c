/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00318a14` (_code @ 0x318a14, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00223a18. */
/* Supplied declaration required: FUN_0028df54. */
extern unsigned int FUN_003bf674(void);


unsigned int FUN_00318a14(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_003bf674();
  FUN_00223a18();
  FUN_0028df54(temp_v0);
  return 1;
}
