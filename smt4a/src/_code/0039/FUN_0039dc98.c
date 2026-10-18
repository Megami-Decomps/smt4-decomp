/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039dc98` (_code @ 0x39dc98, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00236038. */
extern int FUN_0031cfd0(unsigned short);
/* Supplied declaration required: FUN_0031f0f4. */


unsigned int FUN_0039dc98(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_00236038(1);
  temp_v2 = FUN_0031cfd0(temp_v0);
  FUN_0031f0f4(temp_v0,temp_v2 + temp_v1);
  return 1;
}
