/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00373958` (_code @ 0x373958, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003283ac(unsigned int);

extern int FUN_0014aa78(void);
extern unsigned int FUN_00236038(void);
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_00373958(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00236038();
  if (temp_v0 < 0x10) {
    temp_v1 = FUN_0014aa78();
    FUN_003283ac(*(unsigned int *)(temp_v1 + temp_v0 * 4 + 0x4c88));
  }
  return 1;
}

} /* extern "C" */
