/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003800bc` (_code @ 0x3800bc, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0014aa78(void);
extern int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_003800bc(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00236038(0);
  temp_v2 = 0;
  temp_v1 = FUN_0014aa78();
  if ((temp_v0 != 0) && (*(int *)(temp_v1 + 0x4e58) != *(int *)(temp_v1 + 0x4e5c))) {
    temp_v2 = 1;
  }
  FUN_003283ac(temp_v2);
  return 1;
}
