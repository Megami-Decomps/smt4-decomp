/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a9148` (_code @ 0x3a9148, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003283ac(int);

extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_003a9148(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0014aa78();
  temp_v0 = *(int *)(temp_v0 + 0x4ce0);
  if (temp_v0 < 0) {
    temp_v0 = 0;
  }
  FUN_003283ac(temp_v0);
  return 1;
}

} /* extern "C" */
