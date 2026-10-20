/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a8d8c` (_code @ 0x3a8d8c, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003283ac(int);

extern int FUN_0014aa78(void);
extern int FUN_00236038(void);
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_003a8d8c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00236038();
  temp_v1 = FUN_0014aa78();
  FUN_003283ac(*(short *)(temp_v1 + 0x2006) <= temp_v0);
  return 1;
}

} /* extern "C" */
