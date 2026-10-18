/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039b59c` (_code @ 0x39b59c, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00164a34(void);
extern int FUN_00239194(void);
extern int FUN_002b4cb0(void);
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_00301830. */
/* Supplied declaration required: FUN_00303a48. */
/* Supplied declaration required: FUN_0031cea0. */
extern int MapMode_IsBusy(void);


unsigned int FUN_0039b59c(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002deb84();
  if (temp_v0 == 0) {
    FUN_0031cea0(3);
  }
  temp_v0 = FUN_00239194();
  temp_v1 = 0;
  if (temp_v0 != 0) {
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
    temp_v1 = 1;
  }
  return temp_v1;
}
