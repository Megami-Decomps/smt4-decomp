/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a3cf4` (_code @ 0x2a3cf4, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00301830(void);
int FUN_00303a48(void);

extern int FUN_00164a34(void);
extern int FUN_002b4cb0(void);
/* Supplied declaration required: FUN_00301830. */
/* Supplied declaration required: FUN_00303a48. */
extern int MapMode_IsBusy(void);


unsigned int FUN_002a3cf4(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = MapMode_IsBusy();
  if ((temp_v0 != 0) || (temp_v0 = FUN_00164a34(), temp_v0 != 0)) {
    FUN_00303a48();
  }
  else {
    temp_v0 = FUN_002b4cb0();
    if (temp_v0 != 0) {
      FUN_00301830();
    }
  }
  return 1;
}

} /* extern "C" */
