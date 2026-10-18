/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00211e54` (_code @ 0x211e54, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00259544. */
/* Supplied declaration required: FUN_0026fbd0. */
extern unsigned int FUN_00296f60(unsigned int);


unsigned int FUN_00211e54(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00296f60(0);
  temp_v1 = FUN_00296f60(2);
  temp_v2 = FUN_00296f60(1);
  FUN_00259544(temp_v2,temp_v1);
  FUN_0026fbd0(temp_v0);
  return 2;
}
