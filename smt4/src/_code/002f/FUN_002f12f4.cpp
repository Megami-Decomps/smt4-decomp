/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f12f4` (_code @ 0x2f12f4, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0027e6f4(unsigned int, int);
int FUN_0028dcb0(void);

/* Supplied declaration required: FUN_0027e6f4. */
/* Supplied declaration required: FUN_0028dcb0. */
extern unsigned int FUN_002939f4(void);


unsigned int FUN_002f12f4(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_002939f4();
  FUN_0027e6f4(temp_v0,1);
  FUN_0028dcb0();
  return 1;
}

} /* extern "C" */
