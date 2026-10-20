/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d884c` (_code @ 0x2d884c, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00249c4c(unsigned int, int);
int FUN_00249dc4(void);
int FUN_0028dcb0(unsigned int);
int FUN_002f5a10(void);

/* Supplied declaration required: FUN_00249c4c. */
/* Supplied declaration required: FUN_00249dc4. */
/* Supplied declaration required: FUN_0028dcb0. */
extern unsigned int FUN_00296cc8(void);
/* Supplied declaration required: FUN_002f5a10. */


unsigned int FUN_002d884c(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_00296cc8();
  FUN_002f5a10();
  FUN_00249dc4();
  FUN_00249c4c(temp_v0,0);
  FUN_0028dcb0(temp_v0);
  return 1;
}

} /* extern "C" */
