/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037d25c` (_code @ 0x37d25c, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrGetArg(...);
int FUN_003dfd08(void);
int FUN_003dfdf0(int);

/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: FUN_003dfd08. */
/* Supplied declaration required: FUN_003dfdf0. */


unsigned int FUN_0037d25c(void)

{
/* irregular: 3 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  
  temp_v1 = scrGetArg();
  temp_v0 = scrGetArg(1);
  if (temp_v1 != 0) {
    FUN_003dfd08();
  }
  else {
    FUN_003dfdf0((int)temp_v0);
  }
  return 1;
}

} /* extern "C" */
