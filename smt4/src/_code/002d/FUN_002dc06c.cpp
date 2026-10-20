/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002dc06c` (_code @ 0x2dc06c, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(int);

/* Supplied declaration required: FUN_0028dcb0. */
extern int FUN_002b63ac(void);


unsigned int FUN_002dc06c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002b63ac();
  FUN_0028dcb0((int)*(short *)(temp_v0 + 0x2a));
  return 1;
}

} /* extern "C" */
