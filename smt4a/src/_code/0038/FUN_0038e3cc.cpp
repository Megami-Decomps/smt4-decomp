/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038e3cc` (_code @ 0x38e3cc, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00236038(...);
int FUN_0031f190(int, int);

/* Supplied declaration required: FUN_00236038. */
/* Supplied declaration required: FUN_0031f190. */


unsigned int FUN_0038e3cc(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  unsigned short temp_v1;
  
  temp_v0 = FUN_00236038();
  temp_v1 = FUN_00236038(1);
  FUN_0031f190(temp_v0,temp_v1);
  return 1;
}

} /* extern "C" */
