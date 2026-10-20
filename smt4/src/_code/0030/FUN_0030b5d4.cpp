/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030b5d4` (_code @ 0x30b5d4, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0024571c(int, int);
int FUN_00296cc8(int);

/* Supplied declaration required: FUN_0024571c. */
extern int FUN_00245768(unsigned short);
/* Supplied declaration required: FUN_00296cc8. */


unsigned int FUN_0030b5d4(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v1 = FUN_00296cc8(1);
  temp_v2 = FUN_00245768(temp_v0);
  FUN_0024571c(temp_v0,temp_v2 + temp_v1);
  return 1;
}

} /* extern "C" */
