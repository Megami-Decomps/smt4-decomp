/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ef284` (_code @ 0x2ef284, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0025930c(unsigned int, unsigned int);
int FUN_0027d8b4(unsigned int);
int FUN_002eb674(void);

/* Supplied declaration required: FUN_0025930c. */
/* Supplied declaration required: FUN_0027d8b4. */
extern unsigned int FUN_00296cc8(unsigned int);
/* Supplied declaration required: FUN_002eb674. */


unsigned int FUN_002ef284(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v1 = FUN_00296cc8(1);
  temp_v2 = FUN_00296cc8(2);
  FUN_0025930c(temp_v1,temp_v2);
  FUN_0027d8b4(temp_v0);
  FUN_002eb674();
  return 1;
}

} /* extern "C" */
