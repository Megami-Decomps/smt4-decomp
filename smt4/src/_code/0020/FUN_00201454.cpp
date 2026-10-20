/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00201454` (_code @ 0x201454, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00254434(unsigned int, unsigned int);
int FUN_0027db40(void);

/* Supplied declaration required: FUN_00254434. */
extern unsigned int FUN_002592d8(void);
/* Supplied declaration required: FUN_0027db40. */
extern unsigned int FUN_00296cc8(unsigned int);


unsigned int FUN_00201454(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002592d8();
  temp_v1 = FUN_00296cc8(0);
  FUN_00254434(temp_v1,temp_v0);
  FUN_0027db40();
  return 2;
}

} /* extern "C" */
