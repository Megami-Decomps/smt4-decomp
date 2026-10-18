/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fe874` (_code @ 0x2fe874, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001e2384. */
extern unsigned int FUN_00296f60(unsigned int);


unsigned int FUN_002fe874(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_00296f60(3);
  temp_v1 = FUN_00296f60(2);
  temp_v2 = FUN_00296f60(1);
  temp_v3 = FUN_00296f60(0);
  FUN_001e2384(temp_v3,temp_v2,temp_v1,temp_v0);
  return 1;
}
