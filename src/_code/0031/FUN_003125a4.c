/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003125a4` (_code @ 0x3125a4, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00245394. */
extern int FUN_002453e4(unsigned int, unsigned int);
extern unsigned int FUN_00293c98(void);
extern unsigned int FUN_00296f60(unsigned int);
extern int FUN_0033b590(unsigned int, unsigned int);


unsigned char FUN_003125a4(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00296f60(0);
  temp_v1 = FUN_00293c98();
  temp_v2 = FUN_0033b590(temp_v1,0);
  if (temp_v2 != 0) {
    temp_v2 = FUN_002453e4(temp_v1,0);
    return temp_v2 != 0;
  }
  FUN_00245394(temp_v1,0,temp_v0);
  return 0;
}
