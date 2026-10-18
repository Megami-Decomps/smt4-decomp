/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00310c50` (_code @ 0x310c50, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002893d8(void);
/* Supplied declaration required: FUN_00296cc8. */
/* Supplied declaration required: FUN_002a880c. */
extern unsigned int FUN_002c08f0(void);


unsigned int FUN_00310c50(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002893d8();
  if (temp_v0 != 0) {
    temp_v0 = FUN_002893d8();
    if (temp_v0 == 10) {
      return 1;
    }
  }
  else {
    FUN_00296cc8(0);
    temp_v1 = FUN_002c08f0();
    FUN_002a880c(temp_v1,1,10);
  }
  return 0;
}
