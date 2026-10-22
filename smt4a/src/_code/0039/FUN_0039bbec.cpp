/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039bbec` (_code @ 0x39bbec, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scriptReadStackValueAsFloat(int);
int FUN_00377f54(unsigned int);

extern unsigned int scrGetArg(unsigned int);
/* Supplied declaration required: scriptReadStackValueAsFloat. */
/* Supplied declaration required: FUN_00377f54. */


unsigned int FUN_0039bbec(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = scrGetArg(0);
  scriptReadStackValueAsFloat(1);
  scriptReadStackValueAsFloat(2);
  scriptReadStackValueAsFloat(3);
  scriptReadStackValueAsFloat(4);
  FUN_00377f54(temp_v0);
  return 1;
}

} /* extern "C" */
