/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bb26c` (_code @ 0x3bb26c, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003283ac(void);
int FUN_003857c8(int);

extern int FUN_00162e8c(void);
/* Supplied declaration required: FUN_003283ac. */
/* Supplied declaration required: FUN_003857c8. */


unsigned int FUN_003bb26c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00162e8c();
  if (*(int *)(temp_v0 + 0x15cc) != 0) {
    FUN_003857c8(*(int *)(temp_v0 + 0x15cc));
  }
  FUN_003283ac();
  return 1;
}

} /* extern "C" */
