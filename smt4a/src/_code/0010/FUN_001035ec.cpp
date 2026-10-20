/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001035ec` (_code @ 0x1035ec, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorNewB(int);
int asdOperatorDelete(unsigned int);

/* Supplied declaration required: asdOperatorNewB. */
/* Supplied declaration required: asdOperatorDelete. */


unsigned int FUN_001035ec(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = 1;
  asdOperatorNewB(1);
  asdOperatorDelete(temp_v0);
  return 0xffffffff;
}

} /* extern "C" */
