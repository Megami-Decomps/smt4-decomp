/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00348818` (_code @ 0x348818, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0038a1d4(unsigned int, int, int);

extern int FUN_00236038(void);
/* Supplied declaration required: FUN_0038a1d4. */


unsigned int FUN_00348818(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00236038();
  if (temp_v0 == 0) {
    temp_v1 = 0xff;
  }
  else {
    temp_v1 = 0xffffffff;
  }
  FUN_0038a1d4(temp_v1,0,1);
  return 1;
}

} /* extern "C" */
